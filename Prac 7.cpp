//This is the program to calculate permutation and Combination

#include<iostream>
using namespace std;

//Method to find factorial
int fact(int n){
	return fact(n-1)*n;
}

//method to find Permutation
int permutation(int a,int b){
	int p=(fact(a))/(fact(a-b));
	return p;
}

//Method to find Combination
int combination(int c,int d){
	int x=(fact(c))/((fact(c-d))*(fact(d)));
	return x;
}

//Calling main method to run the program and showing the calculated va;ue
int main(){
	int n,r,p,c,ch1;
	char ch;
cout<<"Enter total no of element";
cin>>n;
cout<<"no of selected items";
cin>>r;
do{
cout<<"Enter your choice"<<endl<<"1. Permutation"<<endl<<"2. Combination"<<endl<<"3.Exit"<<endl;
cin>>ch;
switch(ch){
case '1':p=permutation(n,r);
cout<<"The permutation of given element is"<<p<<endl;break;
case '2':c=combination(n,r);
cout<<"The combination of given element is"<<c<<endl;break;
case '3':exit(0);
}
cout<<"Do you want to enter more 1.Yes or 2.No"<<endl;
cin>>ch1;
}while (ch1==1);
}
