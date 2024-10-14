//
// Created by William Smith on 10/14/24.
//

#include "Student.h"
#include <iostream>
using namespace std;

void Student::setGpa(double Gpa) {
    this->gpa = Gpa;
}

double Student::getGpa() {
    return gpa;
}

Student::Student() {
    gpa = 0.0;
}

Student::Student(const string &name, int age, double gpa) : Person(name, age), gpa(gpa) {}

ostream &operator<<(ostream &os, const Student &student) {
    os << static_cast<const Person &>(student) << " gpa: " << student.gpa;
    return os;
}

void Student::print(){
    cout<< getName() << " is " << getAge() << " years old and has a gpa of " << gpa<<endl;
}
