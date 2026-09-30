#include<iostream>
using   namespace  std;

class Arithmatic
{
    public:
        int no1;
        int no2;

        Arithmatic()
        {
            no1 = 0;
            no2 = 0;
        }
        Arithmatic(int i,int j)
        {
            no1 = i;
            no2 = j;
        }

        int Addition()
        {
            int ans = 0;

            ans =  no1+no2;
            
            return  ans;
        }
};

int  main()
{
    Arithmatic  aobj1(10,11);
    int Result  =   0;

    Result  =   aobj1.Addition();

    cout<<"Addition is:"<<Result<<"\n";
    
    return  0;
}