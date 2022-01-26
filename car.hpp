#ifndef CAR_H
#define CAR_H
#include <string>

using namespace std;

class Car {
private:
  string brand;
  int speed;

public:
  Car(); //default constructor
  Car(string name, int s); //value passed constructor
  
  string get_brand() const;
  int accelerate(int increase_speed);
  int get_speed() const;
  void set_brand(string name);
  void set_speed(int speed);
  void stop();
  void print();
  
};


#endif 

