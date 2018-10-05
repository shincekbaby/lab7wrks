//include the library
#include<iostream>
using namespace std;
//declaration and definition of the recursive function 
int printsum(int i,int j,int s)
{ 	//loop terminator
	if(j==(i+1)){cout<< "sum is "<<s;
		return s;
	}
 	//loop running
	else{   //the sum is calculated by adding incremented elements one by one
		s+=j;
		//incrementing
		j++;
		//rucursive call
		 printsum(i,j,s);
   		return 0;
	}
	
}
//main function
int main(){
	//input from user
	int n;
	cout<<"\n Finding sum of natural numbers from 1 to n";
	cout<<"\n Enter n ";
	cin>>n;
	//calling the recursive function
	printsum(n,1,0);
	return 0;
}
