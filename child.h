#include<iostream>
#ifndef CHILD_H
#define CHILD_H
#include "parent.h"

class Child : public Parent {
public:
virtual const char * getName();
};

#endif