#ifndef PHONEENTRY_H
#define PHONEENTRY_H
#include "Entry.h"
#include "Book.h"
#include <string>

class PhoneEntry : public Entry
{
    public:
        PhoneEntry(string n, int phoneNum);
        virtual ~PhoneEntry();
        virtual string getContents() const;
        void setPhone(int phone);

    protected:

    private:
        int phNum;
};

#endif // PHONEENTRY_H
