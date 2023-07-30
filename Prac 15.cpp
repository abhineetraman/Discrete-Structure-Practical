//This is the program to find Eular's Path and circuit

#include<iostream>
using namespace std;

int main()
{
    char charr[50],choice;
    int ver,i,j,p=0,sum=0,flag=0,c=0;

    cout<<"Enter number of vertices for a adjancency matrix \n"; 
    cin>>ver;

    int arr[ver][ver],arr1[ver];
    
    //creating loop to create adjecency matrix of the graph
    for( i=0;i<ver;i++)      
    {
        for( j=0;j<ver;j++)
        {   
            cout<<"\n How many edge from "<<(char)(97+i)<<" to "<<(char)(97+j)<<" - ";
            cin>>arr[i][j];
        }
    }

    cout<<"\n THE ADJANCY MATRIX : \n ";
    
    //creating loop to show adjecency matrix
    for(int m=0;m<ver;m++)
    {
        cout<<endl;
        for(int n=0;n<ver;n++)
        cout<<arr[m][n]<<" ";
    }

//creating for loop to find the degree of the vertex of the graph 
    for(i=0;i<ver;i++)   
    {
        sum=0;
        for(j=0;j<ver;j++)
        {
            sum+=arr[i][j];
        }
        arr1[i]=sum;
    }

//creating for loop to show degree of vertex
    for(i=0;i<ver;i++)
    {
        cout<<"\n THE DEGREE OF " <<(char)(97+i) <<" -- "<<arr1[i]<<endl;
    }

//creating loop to check for Eular's circuit in the graph
    for(i=0;i<ver;i++)
    {
        if( (arr1[i]%2)!=0)
        {
            cout<<"\n There is no Euler circuit exist \n";
            flag =1;
            c++;
        }
    }

//creating if construct to check for Eular's path
    if(flag ==0)
    cout<<"\n There is Euler circuit \n ";

    if(c==2)
        cout<<"\n  There is a Euler path \n ";
    else
        cout<<"\n There is no Euler path \n";

    return 0;
}

