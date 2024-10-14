//
// Created by William Smith on 10/14/24.
//

#ifndef INHERITCPP_STUDENT_H
#define INHERITCPP_STUDENT_H

#include <ostream>
#include "Person.h"

class Student: public Person {
private:
    double gpa;
public:
    void setGpa(double Gpa);
    double getGpa();

    Student();

    Student(const string &name, int age, double gpa);

    friend ostream &operator<<(ostream &os, const Student &student);

     virtual void print();
};


#endif //INHERITCPP_STUDENT_H
