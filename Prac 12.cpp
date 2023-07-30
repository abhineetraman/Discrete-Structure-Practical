/*Program to create adjecency matrix of given graph and checks for complete graph*/

#include<iostream>
using namespace std;

int main()
{	
    int ver;
    bool flag=0;
    /*Declarinng variables*/
    
    cout<< "enter the number of vertices" ;
    cin>>ver;
    
    /*Code to form matrix*/
    
    int am[ver][ver];
    for(int i=0;i<ver;i++)
    {
        for(int j=0;j<ver;j++)
        {
            cout<<"\n How many edge from "<<(char)(97+i)<<" to "<<(char)(97+j)<<" - ";
            cin>>am[i][j];
        }
    }
    
/*Code to show matrix*/

    cout<<"the adjancy matrix of graph is \n";
    for(int k=0;k<ver;k++)
    {
        cout<<endl;
        for(int l=0;l<ver;l++)
        cout<<am[k][l]<<" ";
    }
    
/*Code to check complete graph*/

    for(int k=0;k<ver;k++)
    {
    	cout<<endl;
        for(int l=0;l<ver;l++)
        {
            if ((k<l) && am[k][l]!=1)
            {
                    flag=1;
                    break;
            }
            
            else if ((k==l) && am[k][l]==1) 
            {
                    flag=1;
                    break;
            }
        }
    }

    if(flag)
    {
        cout<<"this is not a complete graph\n";
    }
    else
    {
        cout<<"this is a complete graph\n";
    }
}
