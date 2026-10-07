#include<iostream>
using namespace std;
#pragma pack(1)
class Base
{
    public:
       int i,j;

       void fun()
       {
        cout<<"inside the base fun\n";
       }

       void gun()
       {
        cout<<"inside the base gun\n";
       }
      virtual void sun()
       {
        cout<<"inside the base sun\n";
       }

      virtual void run()
       {
        cout<<"inside the base run\n";
       }
};    // 16 bytes 

#pragma pack(1)
class Derived : public Base
{
    public:
       int x;

       void fun()
       {
        cout<<"inside the Derived  fun\n";
       }

       void sun()
       {
        cout<<"inside the derived sun\n";
       }
      virtual void mun()
       {
        cout<<"inside the derived mun\n";
       }

       void bun()
       {
        cout<<"inside the derived bun\n";
       }

};    //20 bytes
int main()
{
    Base *bp=new Derived();

    bp->fun();
    bp->gun();
    bp->sun();
    bp->run();
    bp->mun();  //error
    bp->bun();  //error

    return 0;
}