#ifndef CORE1_H_
#define CORE1_H_
#include <arpa/inet.h>
#include <stdint.h>
#include <stdlib.h>
#include "thread.hpp"
class Core1:public Thread{
    public:
    
    Core1();
    virtual ~Core1();
    void* run();
    
};
#endif