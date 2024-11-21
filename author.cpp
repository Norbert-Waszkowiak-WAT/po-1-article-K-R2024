#ifndef AUTHOR_H
#define AUTHOR_H
#include <iostream>
#include <string>
class Author{
   std::string name;
   std::string surname;
    public:
    Author(std::string name, std::string surname)
    : name(name), surname(surname) {};
    std::string getSurname(){
        return surname;
    }
    void print(){
        std::cout<<name<<" "<<surname<<std::endl;
    }
    std::string toString(){
        return name+" "+surname;
    }
    std::string getName(){
        return name;
    }
    Author()
    :name(""), surname(""){};

};
#endif