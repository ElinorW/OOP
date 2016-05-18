#include "citrusfruit.h"
#include "fruits.h"

using namespace std;

const char * Orange::getName()
{return "Orange Fruit";}

float Orange::getPh()
{return ph * 0.5;}

void PrintTheFruits(CitrusFruit &fruit)
{
cout <<"fruit is a " <<fruit.getName()
<< "and has a pH " <<fruit.getPh() << endl;
} 

