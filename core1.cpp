#include "core1.h"
#include <time.h>
#include <cstdio>
#include <string.h>
#include <iostream>
#include <unistd.h>
#include <vector>


using namespace std;

Core1::Core1(std::string sendToIP,std::vector<char> message,int32_t port){ 
    this->sendToIP=sendToIP;
    this->port=port;
    this->message =message;
    
};
Core1::~Core1(){};

void* Core1::run(){
    int i=0;
    cerr <<"Core1 Started"<<endl;
    while (started)
    {
        //fprintf(stderr,"Core1 step: %d\r\n",i);
        i++;
        sendUdpBroadcast(sendToIP,port,message);
        usleep(20);
        
    }
    return nullptr;
}