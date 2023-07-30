//This is the program for set operations

#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

//Creating class on set operationsand providing 11 methods
class setop{
int *ar;
int size;
public:set(){
size=10;
ar=new int[size];
}

void input();
void display();
void setunion(setop &a,setop &b);
void unique();
void intersection(setop &a,setop &b);
int ismember(int e);
int subset(setop &b);
void complement(setop &a);
void cartesian(setop &a);
void symdif(setop &a, setop &b);
void diff(setop &a, setop &b);
};

//creating method for input the set elements
void setop::input(){
cin>>size;
ar=new int[size];
cout<<"enter the array elements"<<endl;

for(int i=0;i<size;i++)
cin>>ar[i];
}

//creating method to display the set
void setop::display()
{
cout<<"the given set is {";

for(int i=0;i<size;i++)
{
	
if(i==0)
cout<<ar[i];

else
cout<<","<<ar[i];
}
cout<<"}";
cout<<endl;
}

//creating method for union of sets
void setop::setunion(setop &a,setop &b){
int i=0,j=0,k=0;

while(i<a.size && j<b.size)
{
	
if(a.ar[i]<b.ar[j])
ar[k++]=a.ar[i++];

else
ar[k++]=b.ar[j++];
}

while(i<a.size)
{
ar[k++]=a.ar[i++];
}

while(j<b.size)
{
ar[k++]=b.ar[j++];
}
size=a.size+b.size;
}

//creating method unique
void setop::unique(){
int i,j,l;

for(i=0;i<size;++i)

for(j=i+1;j<size;){
	
if(ar[i]==ar[j]){
	
for(l=j;l<size-1;++l)
ar[l]=ar[l+1];--size;
}

else
++j;
}}

//creating method for intersection of sets
void setop::intersection(setop &a,setop &b){
size=0;

for(int i=0;i<a.size;i++){
	
for(int j=0;j<b.size;j++){
	
if(a.ar[i]==b.ar[j]){
	
ar[size]=a.ar[i];size++;
}}}}

//creating method for subset of the set
int setop::subset(setop &b){
int i=0,j=0;

for(i=0;i<b.size;i++){
	
for(j=0;j<size;j++){
	
if(b.ar[i]==ar[i])

break;
}

if(j==size)
return 0;
}
return 1;
}

//creating method to find complement of the given set
void setop::complement(setop &a){
int x[10]={1,2,3,4,5,6,7,8,9,10};
int p[20],ctr=0;

for(int i=0;i<a.size;i++){
	
for(int j=0;j<10;j++){
	
if(x[j]==a.ar[i]){
i++;continue;
}

else{
p[ctr]=x[j];
ctr++;
}}}
cout<<"complement is {";

for(int i=0;i<ctr;i++){
	
if(i==0)
cout<<p[i];

else
cout<<","<<p[i];
}}

//creating methods for finding cartisan product of the set
void setop::cartesian(setop &b)
{cout<<"{";

for(int i=0;i<size;i++){
	
for(int j=0;j<b.size;j++)
cout<<"("<<ar[i]<<","<<b.ar[j]<<")"<<",";
}
cout<<"}";
}

//creating method to find symettric difference
void setop::symdif(setop &a, setop &b){
int c=0; 
int p[10];
int flag;

for(int i=0;i<a.size;i++){
flag=0;

for(int j=0;j<b.size;j++){
	
if(a.ar[i]==b.ar[j]){
flag=0;break;
}

else{
flag=1;
}}

if(flag==1){
p[c]=a.ar[i];
c++;
}}

for(int k=0;k<b.size;k++){
flag=0;

for(int h=0;h<a.size;h++){
	
if(b.ar[k]==a.ar[h]){
flag=0;break;
}

else{flag=1;
}}

if(flag==1){
p[c]=b.ar[k];
c++;
}}
cout<<"The symmetric differnce is "<<"{";

for(int f=0;f<c;f++)
cout<<p[f]<<",";
cout<<"}";
}

//creating method to find diffence between two set
void setop::diff(setop &a, setop &b){
int c=0; 
int p[10];
int flag;

for(int i=0;i<a.size;i++){
flag=0;

for(int j=0;j<b.size;j++){
	
if(a.ar[i]==b.ar[j]){
flag=0;break;
}

else
{flag=1;
}
}

if(flag==1){
p[c]=a.ar[i];
c++;
}}
cout<<"The differnce is "<<"{";

for(int f=0;f<c;f++)
cout<<p[f]<<",";
cout<<"}";
}

//calling main function
int main(){
setop a;
setop b;
setop c;
setop d;
setop e;
setop f;
setop g;
setop h;
int ch,ch2,ch3;
char ch1;

//calling methods for 1st set
cout<<"enter the size of Ist array"<<endl;
a.input();
a.unique();
a.display();

//calling methods for 2nd set
cout<<"enter the size of IInd array"<<endl;
b.input();
b.unique();
b.display();

//creating do-while loop for calling different methods for set operations
do{
cout<<endl<<"Enter your choice"<<endl;
cout<<"1.Union"<<endl<<"2.Intersection"<<endl<<"3.subset"<<endl<<"4.Complement"<<endl<<"5.cartesian product"<<endl<<"6.Symmetric differnce"<<endl<<"7.Differnce"<<endl<<"8.exit"<<endl;
cin>>ch;

//creating switch statement to run called methods
switch(ch){
case 1: c.setunion(a,b);
c.unique();
c.display();break;

case 2: d.intersection(a,b);
d.display();break;

case 3: if(b.subset(a))
cout<<"A is Subset of B"<<endl;

else if(a.subset(b))
cout<<"B is subset of A"<<endl;

else
cout<<"A and B are not subset of each other"<<endl;break;

case 4: cout<<"what you want to find complement of 1)A or 2)B"<<endl;
cin>>ch2;

if(ch2==1)
e.complement(a);

else if(ch2==2){
e.complement(b);
}

else
cout<<"wrong choice";break;

case 5: cout<<"The cartesian product is ";
a.cartesian(b);break;

case 6: f.symdif(a,b);break;

case 7: cout<<"Enter your choice "<<"1.A-B"<<endl<<"B-A"<<endl;
cin>>ch3;

if(ch3==1)
{
g.diff(a,b);
}

else if(ch3==2){
h.diff(b,a);
}

else
cout<<"Wrong choice ";break;

default:cout<<"wrong choice";break;
}

cout<<"Do you want to enter more : y or n"<<endl;
cin>>ch1;
}
while((ch1=='y')||(ch1=='Y'));
return 0;
}
