#ifndef CORE2_H_
#define CORE2_H_
#include <arpa/inet.h>
#include <stdint.h>
#include <stdlib.h>
#include "thread.hpp"
class Core2:public Thread{
    public:
   
    Core2();
    virtual ~Core2();
    void* run();
    
};
#endif