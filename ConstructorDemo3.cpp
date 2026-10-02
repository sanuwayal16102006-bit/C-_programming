#include<iostream>

using   namespace   std;

class PPA
{
    public :
        int no1;
        int no2;
//copy  constructor
    PPA(PPA &obj)
    {
        cout<<"Inside Copy cunstructor\n";
    }
    ~PPA()
    {
        cout<<"Inside   Destructor\n";
    }
};

int main()
{
    PPA pobj1;              //Default
    PPA pobj2(11,21);       //parameterise
    PPA pobj3(pobj1)
    return  0;
}