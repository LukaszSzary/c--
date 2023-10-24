#include "core1.h"
#include <time.h>
#include <cstdio>
#include <string.h>
#include <iostream>
#include <unistd.h>

using namespace std;

Core1::Core1(){ 
   
};
Core1::~Core1(){};

void* Core1::run(){
    int32_t i=0;
    cerr <<"Core1 Started"<<endl;
    while (started)
    {
        for(i=0;i<20;i++){
            fprintf(stderr,"Core1 step: %d\r\n",i);
            usleep(2);
        }
    }
    return nullptr;
}