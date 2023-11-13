#include "core2.h"
#include <time.h>
#include <string.h>
#include <iostream>
#include <unistd.h>
#include <vector>

using namespace std;

Core2::Core2(int32_t client,std::string receiveFromIP ,int32_t port){
    this->client=client;
    this->receiveFromIP=receiveFromIP;
    this->port=port;
    this->rBuffer=new char[2000];
    this->slen=0;
}
Core2::~Core2(){};

void* Core2::run(){
    int32_t i=0;
    int32_t rLength=0;
    cerr <<"Core2 Started"<<endl;
    startReceiving(client,receiveFromIP ,port);
    while (started)
    {
        
           // fprintf(stderr,"Core2 step: %d\r\n",i);
            rLength= recvfrom(client,rBuffer,2000,0,(struct sockaddr *)&resp,&slen);
            i++;
            if(rLength>0){
                rBuffer[rLength]='\0';
                cout<<rBuffer<<endl;
            }
            //std::cout<<"ddd";
            usleep(20);
        
    }
    delete[] rBuffer;
    return nullptr;
}