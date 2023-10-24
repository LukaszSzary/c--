#include "core2.h"
#include <time.h>
#include <string.h>
#include <iostream>
#include <unistd.h>
using namespace std;

Core2::Core2(){
    
}
Core2::~Core2(){};

void* Core2::run(){
    int32_t i=0;
    cerr <<"Core2 Started"<<endl;
    while (started)
    {
        for(i=0;i<20;i++){
            fprintf(stderr,"Core1 step: %d\r\n",i);
            usleep(2);
        }
    }
    return nullptr;
}