#include "PhoneEntry.h"
#include "Entry.h"
#include "Book.h"
#include <string>
#include <iostream>
#include <sstream>

PhoneEntry::PhoneEntry(string n, int phoneNum): Entry(n)
{
    phNum = phoneNum;
}

PhoneEntry::~PhoneEntry()
{
    //dtor
}

string PhoneEntry::getContents() const
{

    std::stringstream ss;
    ss << ID << ": " << description << ", num: " << phNum;
    std::string cont = ss.str();
    return cont;

}

void PhoneEntry::setPhone(int phone)
{
    phNum = phone;
}
