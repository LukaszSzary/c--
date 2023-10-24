#include <inttypes.h>
#include <unistd.h>
#include "core1.h"
#include "core2.h"

int32_t main (int arc, char *argv[]){
    Core1 *core1 = new Core1();
    Core2 *core2= new Core2();

    core1->start();
    core2->start();

    while(true){
        usleep(200000);
    }
    core2->stop();
    core1->stop();

    core2->join();
    core1->join();

    return 0;
}