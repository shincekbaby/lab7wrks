//include the library
#include<iostream>
using namespace std;
//declaration and definition of the recursive function 
 int findfac(int i,int j,int s)
{ 	//loop terminator
	if(j>i){
		cout<<" factorial of the given number = "<<s<<endl;
	}
 	else{   //multiplying each element to the previous product
		s*=j;
		//increment
		j++;
		//recursive call
		findfac(i,j,s);	
		return 0;
	}
	return 0;
}
//main function
int main(){
	//input from user
	int a;
	cout<<"\n Enter any number ";
	cin>>a;
	//calling recursive function
	findfac(a,1,1);
	return 0;
}
