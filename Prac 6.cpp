//Ths is the program to imoplement insertion sort

#include <iostream>
#include <stdlib.h>
using namespace std;

//Creeating method insertion for sorting 
int insertion(short int a[],int n)
{
    int key,c=0;
    for(int i=1;i<n;i++)
    {
        int t=0;
        key=a[i];
        int j=i-1;
        while(j>=0&&a[j]>key)
        {
            a[j+1]=a[j];
            j--;
            c++;
            t=1;
        }
        a[j+1]=key;
        cout<<"\n";
        for(int i=0;i<n;i++)
        {		
            cout<<a[i]<<"  ";
        }
    }
    cout<<"\nThe total no. of comparisons after sorting : "<<c;
}

//Calling main function for the method implementation
int main()
{
    short int arr[20],n , i , arr1 ;
    cout<<"\nEnter the no of elements in array: ";
    cin>>n;

    cout<<"\nthe array is : ";
    for( i=0;i<n;i++)
    {
        arr[i]=rand()%1000;
        cout<<arr[i]<<" ";
    }
    cout<<"\nThe list is: \n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    arr1=insertion(arr,n);

    cout<<"\nThe list after sorting is: \n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}
