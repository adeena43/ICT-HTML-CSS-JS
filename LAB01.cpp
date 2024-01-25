#include<iostream>
using namespace std;

int main()
{
	int index;
	cout<<"Enter the number of integers you want to enter: "<<endl;
	cin>>index;
	int i1=-2;
	int i2=-2;
	int arr[index];
	for(int i=0;i<index;i++)
	{
		cin>>arr[i];
	}
	int target;
	cout<<"Enter the number you want to find in the array: ";
	cin>>target;
	
	for(int j=0; j<index ; j++)
	{
		if(arr[j]!=-1)
		{
			if(arr[j]+arr[j+1]==target)
			{
				i1 = j;
				i2 = j+1;
			}
		}
	}
	if(i1==-2||i2==-2)
	{
		cout<<"No pair found :("<<endl;
	}
	if(i1!=-2&&i2!=-2){
		cout<<"("<<i1<<" , "<<i2<<")"<<endl;
	}

	return 0;
}
