#ifndef TRIA_H
#define TRIA_H
#include<string>
#include "shape.h"

class Triangle : public Shape{
public:
Triangle(std::string name = "Nice Triangle!"): Shape(name){}
};
#endif
