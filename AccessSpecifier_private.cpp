#include<iostream>

using   namespace   std;

#pragma pack(1)
class Demo
{
    public:
        int i;
        float f;

    private:
        char  ch;
};
int main()
{

    Demo  dobj;

    dobj.i  = 11;
    dobj.f  = 3.14;
    dobj.ch = 'a';

    cout<<dobj.i<<"\n";
    cout<<dobj.ch<<"\n";
    cout<<dobj.f<<"\n";
    return  0;
}