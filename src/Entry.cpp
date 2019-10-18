#include "Entry.h"
#include <iostream>

static int num = 0;

Entry::Entry(string des)
{
    description = des;
    num++;
    ID = num;
}

Entry::~Entry()
{
    //dtor
}

void Entry::setName(string name)
{
    description = name;
}

string Entry::getName() const
{
    return description;
}
