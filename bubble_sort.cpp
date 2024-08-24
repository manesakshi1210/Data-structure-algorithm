#include<iostream>
using namespace std;
int main()
{
	int n,i,a[10],k=0;
	cout<<"ENter 10 numbers:";
	for(i=0;i<10;i++)
	{
		cin>>n;
        
        if(n%2==0)
		{
			a[k]=n;
			k++;
		}
	}
	
	cout<<"Sorted array:\n";
	int pass,temp;
	for(pass=1;pass<10;pass++)
	{
		for(i=0;i<k-pass;i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
	
	for(i=0;i<k;i++)
	{
		cout<<a[i]<<"\t";
	}

}












