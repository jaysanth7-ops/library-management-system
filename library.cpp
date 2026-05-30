#include "Library.h"

// Add Book
void Library::addBook(int id, string title, string author) {
    books.push_back(Book(id, title, author));
    cout << "Book added successfully!\n";
}

// Add Member
void Library::addMember(int id, string name) {
    members.push_back(Member(id, name));
    cout << "Member added successfully!\n";
}

// Issue Book
void Library::issueBook(int bookId) {
    for (auto &b : books) {
        if (b.id == bookId && !b.isIssued) {
            b.isIssued = true;
            cout << "Book issued successfully!\n";
            return;
        }
    }
    cout << "Book not available!\n";
}

// Return Book
void Library::returnBook(int bookId) {
    for (auto &b : books) {
        if (b.id == bookId && b.isIssued) {
            b.isIssued = false;
            cout << "Book returned successfully!\n";
            return;
        }
    }
    cout << "Invalid return!\n";
}

// Search by Title
void Library::searchByTitle(string title) {
    for (auto &b : books) {
        if (b.title == title) {
            b.display();
        }
    }
}

// Search by Author
void Library::searchByAuthor(string author) {
    for (auto &b : books) {
        if (b.author == author) {
            b.display();
        }
    }
}

// Save Books to file
void Library::saveBooks() {
    ofstream file("data/books.txt");
    for (auto &b : books) {
        file << b.id << " "
             << b.title << " "
             << b.author << " "
             << b.isIssued << endl;
    }
}

// Load Books from file
void Library::loadBooks() {
    ifstream file("data/books.txt");
    int id;
    string title, author;
    bool issued;

    while (file >> id >> title >> author >> issued) {
        books.push_back(Book(id, title, author, issued));
    }
}