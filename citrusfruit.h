#ifndef CITRUSFRUIT_H
#define CITRUSFRUIT_H
#include <iostream>

class CitrusFruit{
protected:
float ph;
public:
CitrusFruit(float ph) : ph(ph){}
const char * getName();
float getPh();
};

#endif