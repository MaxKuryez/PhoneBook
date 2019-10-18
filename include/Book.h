#ifndef BOOK_H
#define BOOK_H
#include <string>
#include "Entry.h"
#include <map>
#include <iostream>

using namespace std;

class Book
{
    public:
        Book();
        virtual ~Book();
        void add(string nick, Entry* contact);
        friend ostream& operator<<(ostream & ost, const Book& book);
        Entry& operator[](string nick);
        void clearBook();
        static int BookCount();
        class NameError: public logic_error
        {
        public:
            NameError(string s): logic_error(s){}
        };
    protected:

    private:
        map <string, Entry*> contacts;
};

#endif // BOOK_H
