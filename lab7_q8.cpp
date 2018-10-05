//include the library
#include<iostream>
using namespace std;
//declaration and definition of the recursive function 
int sumdig(int j,int s){
	//loop terminator
	if(j==0)
	{	cout<<" sum of digits = "<<s;
		return 0;}
	else{	//summing digits from the last 
		s+=(j%10);
		j=(j/10);
		//recursive call
		sumdig(j,s);
		return 0;
	}
}
//main function
int main(){
	//input from user
	int a;	
	cout<<"\n Enter any number ";
	cin>>a;
	//calling the recursive function
	sumdig(a,0);
	return 0;	
}
