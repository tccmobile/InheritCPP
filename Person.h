//
// Created by William Smith on 10/14/24.
//

#ifndef INHERITCPP_PERSON_H
#define INHERITCPP_PERSON_H
#include <string>
#include <ostream>

using namespace std;

class Person {
private:
    string name;
    int age;
public:
    const string &getName() const;

    void setName(const string &name);

    int getAge() const;

    void setAge(int age);

    Person();

    Person(const string &name, int age);

    void haveBirthday();

    friend ostream &operator<<(ostream &os, const Person &person);

    virtual void print();
};


#endif //INHERITCPP_PERSON_H
