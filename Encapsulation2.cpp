#include<iostream>

using   namespace   std;

#pragma pack(1)
class Demo
{
    int j;
    float f;
    char    ch;
};
int main()
{

    Demo    dobj;

    cout<<sizeof(dobj)<<"\n";

    return  0;
}