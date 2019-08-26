//
//  main.cpp
//  sexyprime PLP
//
//  Created by Sai Deepak   on 26/08/19.
//  Copyright © 2019 Sai Deepak  . All rights reserved.
//program to find sexy primes in a user given limits

#include <iostream>
//program to find sexy primes in a user given limits
#include <iostream>
using namespace std;
class sp
{
    int arr[1000],n=0;// n is to count total no prime no's
public:
    void prime(int a, int b);//to find prime numbers
    void sexyprime(void);// to find sexy primes in given limits
};
void sp::prime(int a, int b)
{
    int i=a;
    while(i<=b)
    {
        int k=1;// flag variable
        for(int j=2;j<=i/2;j++)
        {
            if(i==2)
            {
                arr[n]=2;
                n++;
            }
            int x;
            x=i%j;
            if(x==0)
            {
                k=0;
                break;
            }
        }
        if(k==1)
        {
            arr[n]=i;
            n++;
        }
        i++;
    }
}
void sp::sexyprime()
{
    cout<<"sexy prime are"<<endl;
    for(int i=0;i<n-1;i++)
    {
        int j=i+1;
        while(j<n)
        {
            int y;
            y=arr[j]-arr[i];
            if(y==6)
            {
                cout<<arr[i]<<"_"<<arr[j]<<endl;
                break;
            }
            if(y>6)
            {
                break;
            }
            j++;
        }
    }
}
int main()
{
    int x,y;//x<y
    sp s;
    cout<<"enter the limits: ";
    cin>>x>>y;//y value should be below or equal to 7919 because we can only store 1000 prime no
    s.prime(x,y);
    s.sexyprime();
}
