#include <iostream>
#include <vector>
#include "Person.h"
#include "Student.h"
using namespace std;


int main() {

    Person one("Carl", 42);
    Student two("Sue",21,3.5);

    Person* three = new Person("Bob", 65);
    Person* four = new Student("Mary",25, 3.3);

    vector<Person*> room;

    room.push_back(three);
    room.push_back(four);
    room.push_back(new Student("Carl",12,4.0));
    room.push_back(new Person("Larry", 88));

    for (Person* item:room) {
        item ->print();
    }

   /* one.print();
    two.print();
    three ->print();
    four -> print(); */

    /* cout<<one<<endl;
    cout<<two<<endl;
    cout<<(*four)<<endl;

    one.haveBirthday();
    two.haveBirthday();
    four -> haveBirthday();

    two.setName("Bob"); // inherited
    //  one.getGpa(); not a student but a person
    four ->setName("Martha");
   // four -> setGpa(2.2); not a person pointer

    cout<<one<<endl;
    cout<<two<<endl;
    cout<<(*four)<<endl; */
    return 0;
}
