#include "Book.h"
#include "Entry.h"
#include "PhoneEntry.h"
#include <map>

static int Count = 0;

Book::Book()
{
    //ctor
}

Book::~Book()
{
    for(map<string, Entry* >::const_iterator it = contacts.begin();
    it != contacts.end(); ++it)
{
  Entry * tmp = (it -> second);
  delete tmp;
}

contacts.erase(contacts.begin(),contacts.end());
}

void Book::add(string nick, Entry* contact)
{
 Count++;
 contacts.insert(std::pair<string, Entry*>(nick, contact));

}

Entry& Book::operator[](string nick)
{
   auto it = contacts.find(nick);
   if (it == contacts.end() ) throw NameError(" NameError");
   return *(it -> second);
}

ostream& operator<<(ostream & ost, const Book& book)
{

    for(map<string, Entry* >::const_iterator it = book.contacts.begin();
    it != book.contacts.end(); ++it)
{
    ost << it->first <<" ";
    Entry* lol= it -> second;
    ost << (*lol).getContents() << "\n";
}
    return ost;
}

void Book::clearBook()
{
auto Begin = contacts.begin();
auto End = contacts.end();
if (Begin == End) throw NameError(" EmptyBook");

for(map<string, Entry* >::const_iterator it = contacts.begin();
    it != contacts.end(); ++it)
{
  Entry * tmp = (it -> second);
  delete tmp;
  Count--;
}
contacts.erase(contacts.begin(),contacts.end());

}

int Book::BookCount()
 {
     return Count;
 }



