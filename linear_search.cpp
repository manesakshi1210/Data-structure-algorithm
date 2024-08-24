#include<iostream>
using namespace std;
class A
{
	public:
	     sort()
		{
			int pass,temp,i,a[i],n;
			if(a[i]%2==0)
			{
				int pass,temp;
				for(pass=1;pass<n;pass++)
				{
					for(i=0;i<n-pass;i++)
					{
					  if(a[i]<a[i+1])
				        {
					       temp=a[i];
					       a[i]=a[i+1];
					      a[i+1]=temp;
					      break;
				        }
			        }
			    }
			    for(i=0;i<n;i++)
		{
			cout<<a[i]<<"\t";
		}
			}
//		
//		for(i=0;i<n;i++)
//		{
//			cout<<a[i]<<"\t";
//		}
    }  
};
int main()
{ 
int a[5],i,n=5;
	cout<<"enter the 5 numbers:";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
    A a1;
	a1.sort()  ;
		
}
