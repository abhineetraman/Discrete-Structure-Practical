//This is the program to find solution to the polynomial

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int arr[20],deg,x,sum=0;
    char ch;
    do
    {
        cout<<"Enter the degree of the polynomial :";
        cin>>deg;
        
        //Loop for coefficient input
        for(int i=deg; i>=0;i--)
        {
            cout<<"Enter the coefficient of degree "<<i<<" :";
            cin>>arr[i];
        }0
        cout<<"Our required polynomial is :";
        cout<<arr[deg]<<"x^"<<deg;
        
        //loop to calculate values
        for(int i=deg-1;i>0;i--)
        {
            if(arr[i]>0)
                cout<<"+"<<arr[i]<<"x^"<<i;
            else
                cout<<"-"<<arr[i]<<"x^"<<i;
        }
        cout<<"+"<<arr[0]<<"x^"<<0;
        cout<<"\n Enter the value of x : ";
        cin>>x;
        
        //Loop for calculation
        for(int i=deg;i>=0;i--)
        {
            sum+=(arr[i]*pow(x,i));
        }
        
        cout<<"\nThe solution of this polynomial is :"<<sum;
        char ch;
        cout<<"\n Do you want to continue?(y/n):";
        cin>>ch;

    }while(ch=='y'||ch=='Y');
}
