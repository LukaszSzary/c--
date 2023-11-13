#include <inttypes.h>
#include <unistd.h>
#include <vector>
#include "core1.h"
#include "core2.h"
#include "netfunctions.h"
int32_t main (int arc, char *argv[]){
   
   
   if(arc!=2){
    std::cout<<"error";
    return -1;
   }

   std::string iface =argv[1];
   std::string ip= getIPAddress(iface);
   std::string ipb= getIfBroadcastAddr(iface);

   //std::cout<<iface.c_str() <<" "<<ip.c_str()<<" "<<ipb.c_str()<<std::endl;
    std::string messageString ="abcd";

    std::vector<char> message;
    
    std::copy(messageString.begin(), messageString.end(), std::back_inserter(message));
    
    
    int32_t port=5000;
   
   int32_t client=8; 
   
   
    Core1 *core1 = new Core1(ipb.c_str(),message,port );

    Core2 *core2= new Core2(client,ipb.c_str() ,port);
    
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