#include <iostream>
#include <string>
#include "car.hpp"

using namespace std;


int main() {
  
  //Creating 1st car w/method test
	Car sport("Mazda - MX-5 Miata", 50); //car object 1
  sport.print();
  sport.stop();
  sport.print();
  sport.accelerate(50);
  sport.print();

  cout << "-----------------------------------------------------\n";

  //Creating 2nd car w/method test
  Car *hybrid = new Car("Honda - Insight", 25);
  hybrid -> print();
  hybrid -> stop();
  hybrid -> print();
  hybrid -> accelerate(25);
  hybrid -> accelerate(30);
  hybrid -> print();

  delete hybrid;

  cout << "-----------------------------------------------------\n";

  //Creating 3rd car w/method test
  Car hatchback("Hyundai - Accent", 35);
  hatchback.print();
  hatchback.accelerate(10);
  hatchback.print();
  hatchback.stop();
  hatchback.print();

  cout << "-----------------------------------------------------\n";

  //testing default car w/method test
  Car *standard = new Car();
  standard -> print();
  standard -> accelerate(35);
  standard -> print();
  standard -> stop();
  standard -> print();

  delete standard;
  
}
