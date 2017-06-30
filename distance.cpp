#include<iostream.h>
#include<cmath>
void main()
{
	
  int x1,y1,x2,y2,A,B;
  float distance;
  
  char ch;
  cout<<"Enter coordinates of first point A:  ";
  cin>>x1>>ch>>y1;
  cout<<"Enter coordinates of second point B:  ";
  cin>>x2>>ch>>y2;
  A=pow((x2-x1),2);  
  B=pow((y2-y1),2);
  distance=sqrt(A+B);
  cout<<"distance between the points A and B: "<<distance<<endl;	
}
