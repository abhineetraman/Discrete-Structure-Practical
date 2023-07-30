//This is the progrom for relation check

#include<iostream>
using namespace std;

//creating class set. with relations as its function
class set{
int **ar;int size;
public:void setsize();
void enter();
int reflexive();
void display();
bool symmetric();
int antisym();
int transitive();
};

//creating function set size
void set::setsize(){
cout<<"Enter the size "<<endl;
cin>>size;
ar=new int*[size];

for(int i=0;i<size;i++){
ar[i]=new int[size];
}
for(int i=0;i<size;i++){
for(int j=0;j<size;j++){
ar[i][j]=0;
}}}

//creating function to set the relation
void set::enter(){
int a,b,n;
cout<<"Enter the no of relations"<<endl;
cin>>n;
for(int i=0;i<n;i++){
cout<<"enter the element"<<endl;
cin>>a>>b;
if((a==0)||(b==0)||(a>size)||(b>size)){
cout<<"wrong choice"<<endl;
exit(0);
}
else
{
ar[a-1][b-1]=1;
}}}

//creating function for reflexive relation
int set::reflexive(){
int flag=0;
for(int i=0;i<size;i++){
if(ar[i][i]==1){
flag=1;
}
else
{flag=0;
break;
}}
return flag;
}

//Creating function to display relation matrix
void set::display(){
cout<<"The relation in matrix form is "<<endl;
for(int i=0;i<size;i++){
for(int j=0;j<size;j++){
cout<<ar[i][j]<<" ";
cout<<endl;
}}}

//Creating function to check symmetric relation
bool set::symmetric(){
int flag;
for(int i=0;i<size;i++){
for(int j=i+1;j<size;j++){
if((ar[i][j]!=ar[j][i]))
return false;
break;}}
return true;
}

//Creating function to check antisymmetric relation
int set:: antisym(){
int flag=0;
for(int i=0;i<size;i++){
for(int j=i+1;j<size;j++){
if(((ar[i][j])&&(ar[j][i]))==1){
flag=1;break;
}
else
{flag=0;
}}
return flag;
}}

//Creating function to check transitive relation
int set::transitive(){
int flag=1;
for(int i=0;i<size;i++){
for(int j=0;j<size;j++){
if(ar[i][j]==1){
for(int k=0;k<size;k++){
if((ar[j][k]==1)&&(ar[i][k]!=1))
flag=0;
}}}}
return  flag;
}

//calling main function
int main(){

//creating variables to check
int ch;
char ch1;
set a;
a.setsize();
a.enter();
a.display();
cout<<"1.Reflexive"<<endl<<"2.Symmetric"<<endl<<"3.antisymmetric"<<endl<<"4.transitive"<<endl<<"5.exit()"<<endl;

//Creating do while loop to check and calling relation function using switch case
do{
cout<<"enter your choice ";
cin>>ch;

//creating swich case
switch(ch){
case 1: if(a.reflexive())
cout<<"the given relation is reflexive"<<endl;
else
cout<<"The given relation is not reflexive"<<endl;break;
case 2: if(a.symmetric())
cout<<"The relation is symmetric"<<endl;
else
cout<<"The relation is not symmetric"<<endl;break;
case 3: if(a.antisym())
cout<<"The given relation is not antisymmetric"<<endl;
else
cout<<"The given relation is  antisymmetric"<<endl;break;
case 4: if(a.transitive())
cout<<"the given relation is transitive"<<endl;
else
cout<<"the given relation is not transitive"<<endl;break;
case 5:exit(0);
default: cout<<"wrong choice"<<endl;break;
}
cout<<"Do you want to enter more Y or N "<<endl;
cin>>ch1;
}while((ch1=='y')||(ch1=='Y'));

return 0;
}

//End of Program
