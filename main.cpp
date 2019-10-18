#include <iostream>
#include "Entry.h"
#include "Book.h"
#include "PhoneEntry.h"
#include <string>

using namespace std;

int main()
{
       PhoneEntry a("John Smith", 100200300);
       PhoneEntry b("Michael Scott", 1034340);
       a.setName("Don");
       a.setPhone(5678976);
       cout<<a.getContents()<<"\n";

       cout<<a.getContents()<<" "<<b.getContents()<<endl;
       Book cont;
       cont.add("Bonie", new PhoneEntry("Bonie Mitchel", 9034340));
       cont.add("John", new PhoneEntry("John Smith", 100200300));
       cont.add("Michael", new PhoneEntry("Michael Scott", 1034340));
       cont.add("Annie", new PhoneEntry("Annie Stevenson", 44434340));

       try{
       cout<<cont["Michael"].getName();
       cout<<cont["Bonie78"].getName();
       cout<<cont["Michael"].getName();
       } catch(Book::NameError &e) {
       cout << e.what();
       }
       cout<<endl;
       cout<<cont;
       cont.clearBook();
       cout<<"Cleared One:"<<Book::BookCount();
       cont.add("Bonie", new PhoneEntry("Bonie Mitchel", 9034340));
       cont.add("John", new PhoneEntry("John Smith", 100200300));
       cont.add("Michael", new PhoneEntry("Michael Scott", 1034340));

       cout<<"Cleared One:"<<Book::BookCount();

}
