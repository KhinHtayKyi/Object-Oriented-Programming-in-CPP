#include<iostream>

#define S 3
using namespace std;
class OOPMark
	{
	private: int A[S];
	int count;
	         
	         
  public: 
 OOPMark()
  {
  	//A[0]=0;
  	count=0;
  }
  
  void putMark(int data)
  {
  	 cout<<"Function data is"<<data<<endl;
  	 A[count]=data;
  	 cout<<"mark is"<<A[count]<<endl;
  	 count++;
  	 
  }
  
  int Popmark(int index)
  {
  	 return A[index];
  	
  }
  
  int Mini_mark()
  {
  	 int index=0;
  	 int smallest=A[0];
  	for(int i=0;i<S;i++)
  	{
	  	
	  		if(smallest>A[i])
	  		{
		  		smallest=A[i];
		  		index=i;
		  		
		  	}
	  	     
	  
		  
	  }
	  
	  return index;
  }
};

int main()
{
	OOPMark a;
	int mark;
	char ch;
	for(int i=0;i<S;i++)
	{
		cout<<"Enter mark for studnet";
		cin>>mark;
		cout<<"main mark"<<mark<<endl;
		a.putMark(mark);
	}
	
	int i=a.Mini_mark();
	cout<<"The smallest mark is"<<a.Popmark(i);
}