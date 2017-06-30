#include<iostream>
void main ()
{
  int size;	
	cout<<"Enter Size bet 2 and 20";
	cin>>size;
	if(size>=2 && size<=20)
	
	{
	 for(int i=0;i<size;i++)
	  {	
	  
	      for(int j=size;j>0;j--)
	      
	        {
					 if (i==0 || i==size-1)
	                  cout<<"*";
	                  
	                  else
	                       { if( j==size || j==1)
	                                cout<<"*";
	                                
	                                else
	                                         cout<<" ";
					       }
	    			     		
		    }
				 cout<<endl;
	  
	}
	}
	
	else
	cout<<"size error";
	  

}
