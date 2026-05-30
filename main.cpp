#include <iostream>
#include "Library.h"

using namespace std;

int main() {
    Library lib;
    lib.loadBooks();

    int choice;

    while (true) {
        cout << "\n===== Library Menu =====\n";
        cout << "1. Add Book\n";
        cout << "2. Add Member\n";
        cout << "3. Issue Book\n";
        cout << "4. Return Book\n";
        cout << "5. Search by Title\n";
        cout << "6. Search by Author\n";
        cout << "7. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            int id;
            string title, author;
            cout << "Enter ID, Title, Author: ";
            cin >> id >> title >> author;
            lib.addBook(id, title, author);
        }
        else if (choice == 2) {
            int id;
            string name;
            cout << "Enter Member ID and Name: ";
            cin >> id >> name;
            lib.addMember(id, name);
        }
        else if (choice == 3) {
            int id;
            cout << "Enter Book ID: ";
            cin >> id;
            lib.issueBook(id);
        }
        else if (choice == 4) {
            int id;
            cout << "Enter Book ID: ";
            cin >> id;
            lib.returnBook(id);
        }
        else if (choice == 5) {
            string title;
            cout << "Enter Title: ";
            cin >> title;
            lib.searchByTitle(title);
        }
        else if (choice == 6) {
            string author;
            cout << "Enter Author: ";
            cin >> author;
            lib.searchByAuthor(author);
        }
        else if (choice == 7) {
            lib.saveBooks();
            cout << "Data saved. Exiting...\n";
            break;
        }
        else {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}