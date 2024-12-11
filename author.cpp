
#ifndef AUTHOR
#define AUTHOR 
#include <iostream>
#include <string>
using namespace std;
class  Author{
private:
    string name;
    string surname;
public:
    Author():
    name(""), surname (""){};
    Author (string name, string surname): 
    name (name), surname (surname){};
    
    string getName() {
        return name;
   }
    string getSurname() {
        return surname;
   } 
    string toString () {
        return name+" "+ surname;
    }
    void print () {
        cout <<name <<" "<< surname<< endl; 
    }
};
#endif