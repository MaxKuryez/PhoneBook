#ifndef ENTRY_H
#define ENTRY_H
#include <string>

using namespace std;

class Entry
{
    public:
        Entry( string );
        virtual ~Entry();
        virtual string getContents() const = 0;
        void setName(string name);
        string getName() const;
    protected:
        int ID;
        string description;
    private:


};

#endif // ENTRY_H
