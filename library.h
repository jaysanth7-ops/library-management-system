#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include <fstream>
#include "Book.h"
#include "Member.h"

using namespace std;

class Library {
private:
    vector<Book> books;
    vector<Member> members;

public:
    void addBook(int id, string title, string author);
    void addMember(int id, string name);
    void issueBook(int bookId);
    void returnBook(int bookId);
    void searchByTitle(string title);
    void searchByAuthor(string author);

    void saveBooks();
    void loadBooks();
};

#endif