//
// Created by Khrastiik on 08.10.2021.
//

#ifndef ANDREYPERSON_PERSON_H
#define ANDREYPERSON_PERSON_H

#include <iostream>
#include <string>

enum Floor {
    MAN,
    WOMAN
};

class Person {
    
public:
    Person();
    Person(std::string name, Floor floor, double height, double weight, bool smoke, bool drink);
    
    std::string getName();
    
    double getWeight();
    
    double getHeight();
    
    void printData();
    
    void run();
    
    int getAge();
    
private:
    
    std::string name;
    
    double weight = 0;
    double height;
    
    Floor floor;
    
    int age;

    bool smoke;
    bool drink;
    
    bool checkWeight(double weight);
    bool checkHeight(double height);
    
    void calcWeight();
    void calcHeight();
    
};



#endif //ANDREYPERSON_PERSON_H
