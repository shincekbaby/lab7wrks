//include the library
#include<iostream>
using namespace std;
//declaration and definition of the recursive function 
int  printsumodd(int i,int j,int s)
{ 	//loop terminator
	if(j>i){cout<< " sum is "<<s<<endl;
		return 0;
	}
 	//loop running
	else{    //the sum is calculated by adding incremented elements one by one
		s+=j;
		//incrementing
		j+=2;
		//rucursive call
		printsumodd(i,j,s);
   		return 0;
	}
	
}
//main function
int main(){
	//input from user
	int n;
	cout<<"\n Finding sum of odd natural numbers from 1 to n";
	cout<<"\n Enter n ";
	cin>>n;
	//calling the recursive function
	printsumodd(n,1,0);
	return 0;
}
