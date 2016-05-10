#ifndef CAR_H
#define CAR_H
#include <string>
#include "driver.h"

 class SteeringWheel{

 };


 class Car{

 Driver *dere;

 SteeringWheel s_wheel; //composition is demonstrated here

 std::string car_type;

 public:

 Car(std::string ct, Driver *driver = NULL) : 
 
 dere(driver), car_type(ct){} 


  Car(Driver *driver=NULL) : Car("Mercedes", driver){} 
  
  std::string whosDriving();

 };
#endif
