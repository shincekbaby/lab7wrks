//include the libraries
#include<iostream>
using namespace std;
//declaration and definition of recursive function 
	int printeven(int i,int j=2){
	//loop terminator
	if(j>i)
	{}  
	else{   //printing even numbers one by one
		cout<<j<<endl;
		j+=2;
		//recursive call statement
		printeven(i,j);
		return 0;
	}
	return 0;
}
//main function
int main(){
	//input from user
	int a;	
	cout<<"\n Range till even number is to be printed is ";
	cin>>a;
	//calling the recursive function
	printeven(a);
	return 0;	
}
