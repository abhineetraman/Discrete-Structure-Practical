//This is the program to find no of  paths of length n in given graph

#include<iostream>
using namespace std;

//Creating multipication function with 5 parameters
void multiplication(int a1[50][50],int ver,int pathlen,int source,int dest)
{
    int a2[50][50],a3[50][50];

    for(int i=0;i<ver;i++)
    {
        for(int j=0;j<ver;j++)
        {
            a2[i][j]=a1[i][j];
        }
    }
    
    //creating if statement for path length as 1 to show the same matrix
    if(pathlen==1)
    {
        for(int i=0;i<ver;i++)
        {
            for(int j=0;j<ver;j++)
            {
                cout<< a1[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    
    //else loop to create A^r matrix for the defined path
    else
    {
        for(int l=2;l<=pathlen;l++)
        {
            cout<<"\n The Matrix after multiplication is : ";
            
            for(int i=0;i<ver;i++)
            {
                cout<<endl;
                
                for(int j=0;j<ver;j++)
                {
                    a3[i][j]=0;
                    
                    for(int k=0;k<ver;k++)
                    {
                        a3[i][j]+=a1[i][k]*a2[k][j];
                    }
                   cout<< a3[i][j]<<" ";
                }
            }
            
            for(int i=0;i<ver;i++)
            {
                for(int j=0;j<ver;j++)
                {
                    a2[i][j]=a3[i][j];
                }
            }
            cout<<endl<<endl;
        }
        
        //taking user's input
    source=source-97;
    dest=dest-97;    
    cout<<"\n Enter the path between "<<char(source)<<" and "<<char(dest)<<" ";
    
    cout<<a3[source][dest];
    }
}

//calling main function
int main()
{
    int pl;
    int a[50][50];
    int i,j;
    int ch;
    int v;
    int length;
    char source,dest;

    cout<<"\n Enter the vertices : ";
    cin>>v;
    cout<<endl;

//for loop to enter adjecency matrix values
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            cout<<"\n Enter the elements ";
            cout<<(char)(i+97)<<" "<<"to vertex"<<" "<<(char)(j+97)<<"  : ";
            cin>>a[i][j];
        }
    }
    cout<<"\n The matrix you entered is : "<<endl;
    
	//for loop to show the adjecency matrix of the graph 
    for( i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
//asking user for pathlength ,source and destination
    cout<<"\n Enter the path length: ";
    cin>>pl;
    cout<<endl;

    cout<<"\n Please Enter the source : ";
    cin>>source;
    cout<<"\n Please Enter the destination : ";
    cin>>dest;

//calling function multipication
    multiplication(a,v,pl,source,dest);
    return 0;
}

