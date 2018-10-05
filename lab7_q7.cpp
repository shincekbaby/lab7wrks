//include the library
#include<iostream>
using namespace std;
//declaration and definition of the recursive function 
int rev(int i,int j,int s){
	//loop terminator
	if(j==0)
	{if(s==i)
		{cout<<"\n Number is a palindrome";
		return 0;}
	 else
		{cout<<"\n Number is not a palindrome";
		return 0;}
	}
	//loop running
	else{	//reversing the number 
		s=(s*10)+(j%10);
		j=(j/10);
		//recursive call
		rev(i,j,s);
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
	rev(a,a,0);
	return 0;	
}
