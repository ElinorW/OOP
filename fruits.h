#ifndef FRUITS_H
#define FRUITS_H
#include<iostream>
#include "citrusfruit.h"

class Orange : public CitrusFruit {
public:
Orange(float ph) : CitrusFruit(ph){}
const char * getName();
float getPh();
void PrintTheFruits(CitrusFruit &fruit);
};

#endif