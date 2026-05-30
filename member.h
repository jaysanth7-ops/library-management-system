#ifndef MEMBER_H
#define MEMBER_H

#include <iostream>
using namespace std;

class Member {
public:
    int id;
    string name;

    Member() {}

    Member(int i, string n) {
        id = i;
        name = n;
    }

    void display() {
        cout << "Member ID: " << id 
             << " | Name: " << name << endl;
    }
};

#endif