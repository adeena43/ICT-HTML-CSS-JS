/*Q1: Write a C++ program to check whether a given number is prime or not. Allow
the user to input a number and display whether it's prime or not?*/

#include<iostream>
using namespace std;

int main()
{
	int i;
	int n;
	cout<<"Enter a number: "<<endl;
	cin>>n;
	int count=0;
	for(i=1; i<n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count == 1)
	{
		cout<<"The numbered entered is prime";
	}
	else
	{
		cout<<"The numbered entered is not prime";
	}
}
