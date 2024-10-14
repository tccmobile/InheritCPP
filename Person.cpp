//
// Created by William Smith on 10/14/24.
//

#include "Person.h"
#include <iostream>

using namespace std;

const string &Person::getName() const {
    return name;
}

void Person::setName(const string &name) {
    Person::name = name;
}

int Person::getAge() const {
    return age;
}

void Person::setAge(int age) {
    Person::age = age;
}

Person::Person() {
    name = "unknown";
    age = 0;
}

Person::Person(const string &name, int age) : name(name), age(age) {}

void Person::haveBirthday() {
    age++;
}

ostream &operator<<(ostream &os, const Person &person) {
    os << "name: " << person.name << " age: " << person.age;
    return os;
}

void Person::print() {
    cout<<name<<" is "<< age <<" years old"<<endl;
}
