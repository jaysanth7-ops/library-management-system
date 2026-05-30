#ifndef BOOK_H
#define BOOK_H

#include <iostream>
using namespace std;

class Book {
public:
    int id;
    string title;
    string author;
    bool isIssued;

    Book() {}

    Book(int i, string t, string a, bool issued = false) {
        id = i;
        title = t;
        author = a;
        isIssued = issued;
    }

    void display() {
        cout << "ID: " << id 
             << " | Title: " << title 
             << " | Author: " << author 
             << " | Issued: " << (isIssued ? "Yes" : "No") 
             << endl;
    }
};

#endif