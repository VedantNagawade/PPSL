#include <iostream>
#include <string>
using namespace std;

class car {
  
  public:
  string brand;
  string model;
  int year;
};


int main() {
    //create an object of car
    car carObj1;
    carObj1.brand = "AUDI";
    carObj1.model = "Q8";
    carObj1.year = 2024;
    
    
    //create another object of car
    car carObj2;
    carObj2.brand = "LAND ROVER";
    carObj2.model = "DEFENDER";
    carObj2.year = 2020;
    
    
    //print attribute values
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
    
    return 0;
    
}