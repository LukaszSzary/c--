#ifndef CORE2_H_
#define CORE2_H_
#include <arpa/inet.h>
#include <stdint.h>
#include <stdlib.h>
#include <vector>
#include "netfunctions.h"
#include "thread.hpp"
class Core2:public Thread{
    public: 
   int32_t client;
   std::string receiveFromIP; 
   int32_t port;
   char *rBuffer;
   struct sockaddr_in resp;
   socklen_t slen ;
    Core2(int32_t client,std::string receiveFromIP ,int32_t port);
    virtual ~Core2();
    void* run();
    
};
#endif