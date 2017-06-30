#include<iostream>
using namespace std;
int[] prime(int num[],int n,int& count)
{
	 int i,j,ans[n];
for( i=0;i<n;i++)
{
	for(j=2;i<n;j++)
	{
		if(num[i]%j==0)
		break;
		
	}
	if(num[i]==j)
	{//cout<<num[i]<<"is prime number";
	
	ans[count]=num[i];
	count++;
	}
/*	else
	cout<<num[i]<<"not prime";
	*/
	
	
}
return ans;
  
	
}
int main()
{
	 int i,n,count=0;
	
	 cout<<"Enter the size of array";
	 cin>>n;
	 int A[n],ans[n];
	for(i=0;i<n;i++)
	{
		cout<<"Enter num";
		cin>>A[i];
		
	}
ans=prime(A,n,count);
cout<<"Prime numbers that user typed are:"<<endl;
for(int i=0;i<count;i++)

cout<<ans[i]<<endl;
}
     