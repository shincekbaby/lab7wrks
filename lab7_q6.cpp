//include the library
#include<iostream>
using namespace std;
//declaration and definition of the recursive function 
int rev(int i){
	//loop terminator
	if(i==0)
	{}
	//loop running
	else{   //each time the ending term is printed which is found by % operator
		cout<<i%10;
		//number before the ending term taken before
		i=(i/10);
		//recursive call
		rev(i);
		return 0;
	}
	return 0;
}
//main function
int main(){
	//input from user
	int a;	
	cout<<"\n Enter a number to find its palindrome ";
	cin>>a;
	//calling the recursive function
	rev(a);
	return 0;	
}
