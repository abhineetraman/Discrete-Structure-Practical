//Program to create set and finding its cardinality

#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

//creating class set with 6 methods
class set
{
int *ar;int size;
public:set()
{
size=10;ar=new int[size];
}
void input();
void display();
void cardinality();
void unique();
int ismember();
void powerset();
};

//creating method input
void set::input(){
cout<<"enter the size of array"<<endl;
cin>>size;
ar=new int[size];
cout<<"enter the array elements"<<endl;
for(int i=0;i<size;i++)
cin>>ar[i];
}

//creating method display 
void set::display(){
cout<<"the given set is {";
for(int i=0;i<size;i++){
if(i == 0)
cout<<ar[i];
else
cout<<"," <<ar[i];
}
cout<<"}"<<endl;
}

//creating method cardinality
void set::cardinality(){
cout<<"The cardinality of given set is "<<size<<endl;
}

//creating method unique
void set::unique()
{
int i,j,l;
for(i=0;i<size;++i)
{
for(j=i+1;j<size;)
{
if(ar[i]==ar[j])
{
for(l=j;l<size-1;++l)
ar[l]=ar[l+1];--size;
}
else
++j;
}
}
}

//creating method powerset
void set::powerset()
{
int count,temp;
count=pow(2,size);
cout<<"{ {},";
for(int i=1;i<count;i++)
{
temp=i;cout<<"{";
for(int j=0;j<size;j++)
{
if(temp&1)
cout<<ar[j]<<",";
temp=temp>>1;
}
cout<<"\b}";
}
cout<<" }";
}
//creating method ismember
int set::ismember()
{
int e,flag=0;
cout<<"enter the element to be search"<<endl;cin>>e;
for(int i=0;i<size;i++)
if(e==ar[i])
{flag=1;break;}
return flag;
}

//calling main function
int main()
{
int ch;
char ch1;
set a;

//calling methods
a.input();
a.unique();
a.display();
a.cardinality();

//loop for choice selection
do{cout<<"Enter your choice"<<endl;
cout<<"1.Power set"<<endl<<"2.Is member"<<endl<<"3.Exit"<<endl;
cin>>ch;

//switch statement select the option
switch(ch)
{
case 1: a.powerset();break;
case 2: if(a.ismember())
cout<<"given element belong to set "<<endl;
else
cout<<"given element not belong to set"<<endl;break;
case 3:exit(0);
default:cout<<"wrong choice!!..";break;
}
cout<<endl<<"Do you want to enter more : "<<endl<<"'y' or 'n'"<<endl;
cin>>ch1;
}while((ch1=='y')||(ch1=='Y'));
return 0;
}
