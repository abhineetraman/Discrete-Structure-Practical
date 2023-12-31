//THis is the program to check relations of the given set

#include<iostream>
using namespace std;


//Creating class set with functions to check relations
class set{
int **ar;
int size;
public:void setsize();
void enter();
int reflexive();
void display();
bool symmetric();
int antisym();
int transitive();
};

//Creating function setsize
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

//Creating set enter to check relation
void set::enter(){
int a,b,n;
cout<<"Enter the no of relations"<<endl;
cin>>n;
if(n>(size*size))
cout<<"Invalid no of relations"<<endl;
else{
for(int i=0;i<n;i++){
cout<<"enter the element"<<endl;
cin>>a>>b;
if((a==0)||(b==0)||(a>size)||(b>size)){
cout<<"wrong choice"<<endl;
exit(0);
}
else{
ar[a-1][b-1]=1;
}}}}

//Creating relation display the set in matrix form
void set::display()
{
cout<<"The relation in matrix form is "<<endl;
for(int i=0;i<size;i++){
for(int j=0;j<size;j++){
cout<<ar[i][j]<<" ";
cout<<endl;
}}}

//Creating function to check reflexive relation
int set::reflexive(){
int flag=1;
for(int i=0;i<size;i++){
if(ar[i][i]==0){
flag=0;
return flag;
}}
return flag;
}

//Creating function to check symmetric relation
bool set::symmetric(){
int flag=1;
for(int i=0;i<size;i++){
for(int j=i+1;j<size;j++){
if((ar[i][j]!=ar[j][i])){
flag=0;
return flag;
break;
}}}
return flag;
}

//Creating function to check antisymettric relation
int set:: antisym(){
int flag=1;
for(int i=0;i<size;i++){
for(int j=i+1;j<size;j++){
if(ar[i][j]){if(ar[j][i]){
flag=0;
return flag;
break;
}}}}
return flag;
}

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

//Calling main function 
int main(){
int ch;
char ch1;
set a;
a.setsize();
a.enter();
a.display();
cout<<"1.equivalence"<<endl<<"2.partial order"<<"3.none"<<"4.exit()"<<endl;

//Creating do...while loop and switch block to check relation for provided set
do{
cout<<"enter your choice ";
cin>>ch;
switch(ch){
case 1: if((a.reflexive())&&(a.symmetric())&&(a.transitive()))
cout<<"it is a equivalence relation"<<endl;
else
cout<<"it is not a equivalence relation"<<endl;break;
case 2: if((a.reflexive())&&(a.antisym())&&(a.transitive()))
cout<<"it is a partial order relation"<<endl;
else
cout<<"it is not a partial order relation"<<endl;break;
case 3: if(!a.reflexive())
cout<<"NONE";
else{
if((!a.symmetric())||(!a.antisym()))
cout<<"NONE";
else{
if(!a.transitive())
cout<<"NONE";
else
cout<<"it is either equivalence or partial order";
}}
break;
case 4:exit(0);
default: cout<<"wrong choice"<<endl;break;
}
cout<<"Do you want to enter more Y or N "<<endl;
cin>>ch1;
}while((ch1=='y')||(ch1=='Y'));

return 0;
}

//End of the program
