#include<iostream>
using namespace std;
#pragma pack(1)
class Base
{
    public:
       int i,j;

       void fun()       //1000
       {
        cout<<"inside the base fun\n";
       }

       void gun()       //2000
       {
        cout<<"inside the base gun\n";
       }
      virtual void sun()        //3000
       {
        cout<<"inside the base sun\n";
       }

      virtual void run()        //4000
       {
        cout<<"inside the base run\n";
       }
};    // 16 bytes 

#pragma pack(1)
class Derived : public Base
{
    public:
       int x;

       void fun()       //5000
       {
        cout<<"inside the Derived  fun\n";
       }

       void sun()       //6000
       {
        cout<<"inside the derived sun\n";
       }
      virtual void mun()        //7000
       {
        cout<<"inside the derived mun\n";
       }

       void bun()       //8000
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
    //bp->mun();  //error
    //bp->bun();  //error

    return 0;
}