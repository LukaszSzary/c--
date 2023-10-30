#ifndef CORE1_H_
#define CORE1_H_
#include <arpa/inet.h>
#include <stdint.h>
#include <stdlib.h>
#include <vector>
#include "netfunctions.h"
#include "thread.hpp"
class Core1:public Thread{
    public:
    std::string sendToIP;
    std::vector<char> message;
    int32_t port;
    Core1(std::string sendToIP,std::vector<char> message,int32_t port);
    virtual ~Core1();
    void* run();
    
};
#endif