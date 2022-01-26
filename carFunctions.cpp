#include <iostream>
#include <string>
#include "car.h"

using namespace std;

Car::Car()
{
  brand = "Default Car";
  speed = 25;
}

Car::Car(string name, int s)
{
  brand = name;
  speed = s;
}

int Car::accelerate(int new_speed)
{
  return speed += new_speed;
}

string Car::get_brand () const
{
  return brand;
}

int Car::get_speed() const
{
  return speed;
}

void Car::set_brand(string name)
{
  brand = name;
}

void Car::set_speed(int s)
{
  speed = s;
}

void Car::stop()
{
  speed = 0;
}

void Car::print()
{
  cout << "Your car is a " << brand << "\n";
  cout << "It is currently going " << speed << " miles per hour\n\n";
}
