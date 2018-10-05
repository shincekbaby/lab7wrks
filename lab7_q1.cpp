//header files
#include<iostream>
using namespace std;
//recursive function declaration and definition
int power(int a,int b,int t=1,int s=1){
	//terminating condition given by if statement
	if(t>b)
	{	cout<< a <<" to the power "<< b <<" = "<<s;}
	//loop running
	else{
		s*=a;
		t++;
		power(a,b,t,s);
	}
	return 0;
}
//main function
int main(){
	//take two inputs from the user
	int a,b;	
	cout<<"\n program to find a to the power b ";
	cout<<"\n Enter a,b ";
	cin>>a>>b;
	//calling the recursive function
	power(a,b);
	return 0;	
}
