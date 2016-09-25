/*
 * implementation file for Car class
 *
 */

#include "Car.h"

//constructor 
//sets values of private member variables
Car::Car(string name, string type, int size)
{
  this->name = name;
  this->type = type;
  this->size = size;
}


//sets the name variable
void Car::setName(string name)
{
  this->name = name;
}


//sets the type variable
void Car::setType(string type)
{
  this->type = type;
}


//sets the size variable
void Car::setSize(int size)
{
  this->size = size;
}


//returns the name variable
string Car::getName()
{
  return name;
}


//returns the type variable
string Car::getType()
{
  return type;
}


//returns the size variable
int Car::getSize()
{
  return size;
}
