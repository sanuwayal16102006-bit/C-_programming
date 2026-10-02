#include<iostream>

using   namespace   std;

class PPA
{
    public :
        int no1;
        int no2;
//Parametrised  constructor
    PPA(int a,int b)
    {
        cout<<"Inside Parametrised cunstructor\n";
    }
    ~PPA()
    {
        cout<<"Inside   Destructor\n";
    }
};

int main()
{
    PPA pobj1;
    PPA pobj2(11,21);

    return  0;
}