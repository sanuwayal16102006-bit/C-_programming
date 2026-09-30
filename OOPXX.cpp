#include<iostream>
using   namespace  std;

class Arithmatic
{
    public:
        int no1;
        int no2;

        Arithmatic()
        {
            this->no1 = 0;
            this->no2 = 0;
        }
        Arithmatic(int i,int j)
        {
            no1 = i;
            no2 = j;
        }

        //int   Addition(Arithmatic *this)
        int Addition()
        {
            int ans = 0;

            ans =  this->no1 + this->no2;
            
            return  ans;
        }
        //int   Substraction(Arithmatic *this)
        int Substraction()
        {
            int ans = 0;

            ans =  this->no1 - this->no2;
            
            return  ans;
        }

};

int  main()
{
    Arithmatic  aobj1(21,10);
    int Result  =   0;

    //Result  = Addition(&aobj1)
    Result  =   aobj1.Addition();

    cout<<"Addition is:"<<Result<<"\n";
    
    //Result  = Substraction(&aobj1)
    Result  =   aobj1.Substraction();

    cout<<"Substraction is:"<<Result<<"\n";
    
    return  0;
}