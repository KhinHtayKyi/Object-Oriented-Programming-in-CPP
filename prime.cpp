#include<iostream>
using namespace std;
void prime(int[],int);
int main()
{
	 int i,n;	          
	 cout<<"Enter the size of array";
	 cin>>n;
	 int A[n];      
	for(i=0;i<n;i++)
	{
		cout<<"Enter num";
		cin>>A[i];  
		
	}
prime(A,n);   

}

void prime(int num[],int n)   
{
	 int i,j;
for( i=0;i<n;i++)
{
	for(j=2;j<=num[i];j++)
	{
		if(num[i]%j==0)
		break;
		
	} 
	if(num[i]==j)
	{
	    cout<<num[i]<<"is prime number";  
	}
else
	cout<<num[i]<<"not prime";
	}	
}
