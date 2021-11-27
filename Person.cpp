//
// Created by Khrastiik on 08.10.2021.
//

#include "Person.hpp"

Person::Person(){};

Person::Person(std::string name, Floor floor, double height, double weight, bool smoke, bool drink){
    this->name = name;
    
    this->floor = floor;
    
    this->smoke = smoke;
    
    this->drink = drink;
    
    if (checkWeight(weight))
        this->weight=weight;
    else
    {
        std::cout << "Вес болжен быть больше нуля!!!";
        exit(1);
    }
    
    if (checkHeight(height))
        this->height=height;
    else
    {
        std::cout << "Рост не должен быть отрицательным!!!";
        exit(2);
    }
    
}

bool Person::checkWeight(double weight){
    if(weight > 0)
        return true;
    else
        return false;
}

bool Person::checkHeight(double height){
    if(height > 0)
        return true;
    else
        return false;
}

std::string Person::getName(){
    return this->name;
}

double Person::getWeight(){
    return this->weight;
}

double Person::getHeight(){
    return this->height;
}

void Person::printData(){
    std::cout << "Имя: " << this->getName() << std::endl;
    
    std::cout << "Вес: " << this->getWeight() << std::endl;
    
    std::cout << "Рост: " << this->getHeight() << std::endl;
    
    std::cout << "Возраст: " << this->getAge() << std::endl;
    
    std::cout << "------------------------------" << std::endl;
    
}

void Person::calcWeight(){
    if(age < 15)
        weight = height - 100;
    else
        weight = height - 110;
}

void Person::calcHeight(){
    if(age < 15)
        height += age * 10;
    else if (age < 20)
        height += age * 1;
};

void Person::run(){
    for (int i = 0; i <= 3; i++){
        if (i == 0){
            printData();
        }
        else if (i == 1){
            age = 14;
            calcHeight();
            calcWeight();
            printData();
        } else if (i == 2){
            age = 19;
            calcHeight();
            calcWeight();
            printData();
        } else if (i == 3){
            age = 100;
            
            if (smoke){
                age -= 10;
            }
            
            if (drink){
                age -= 10;
            }
            
            calcHeight();
            calcWeight();
            printData();
        }
    }
    
}

int Person::getAge(){
    return age;
}

