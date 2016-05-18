#ifndef LEMON_H
#define LEMON_H
#include<iostream>
#include "citrusfruit.h"

class Lemon : public CitrusFruit {
public:
Lemon(float ph) : CitrusFruit(ph){}
const char * getName();
float getPh();
};

#endif

