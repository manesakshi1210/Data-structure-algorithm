//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[100],i,n;
//	cout<<"Enter size of array:";
//	cin>>n;
//	for(i=0;i<n;i++)
//	{
//		cin>>a[i];
//	}
//	
//	cout<<"Sorted array:\n";
//	int pass,temp;
//	for(pass=1;pass<n;pass++)//pass=2
//	{
//		for(i=0;i<n-pass;i++)//0<3
//		{
//			if(a[i]>a[i+1])
//			{
//				temp=a[i];
//				a[i]=a[i+1];
//				a[i+1]=temp;
//			}
//		}
//	}
//	
//	for(i=0;i<n;i++)
//	{
//		cout<<a[i]<<"\t";
//	}
//}


//
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[100],i,n;
//	cout<<"Enter size of array:";
//	cin>>n;
//	for(i=0;i<n;i++)
//	{
//		cin>>a[i];
//	}
//	
//	cout<<"Sorted array:\n";
//	int pass,temp;
//	for(pass=1;pass<n;pass++)
//	{
//		for(i=0;i<n-pass;i++)
//		{
//			if(a[i]<a[i+1])
//			{
//				temp=a[i];
//				a[i]=a[i+1];
//				a[i+1]=temp;
//			}
//		}
//	}
//	
//	for(i=0;i<n;i++)
//	{
//		cout<<a[i]<<"\t";
//	}
//}



//
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[100],i,n;
//	cout<<"Enter size of array:";
//	cin>>n;
//	for(i=0;i<n;i++)
//	{
//		cin>>a[i];
//	}
//	
//	cout<<"Sorted array:\n";
//	int pass,temp;
//	for(pass=1;pass<n;pass++)
//	{
////		if(a[i]%2==0)
//		
//		
//		for(i=0;i<n-pass;i++)
//		{
//			if(a[i]<a[i+1]&&(a[i]%2==0)
//			{
//				
//				temp=a[i];
//				a[i]=a[i+1];
//				a[i+1]=temp;
//			}
//			
//	}
//		
//	
//	
//	for(i=0;i<n;i++)
//	{
//		cout<<a[i]<<"\t";
//	}
//    }
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a[5],i;
//	
//cout<<"enter the 5 numbers: ";
//
//for(i=0;i<5;i++)
//{
//	cin>>a[i];
//}
//cout<<"even numbers are:"<<"\n";
//for(i=0;i<5;i++)
//
//{
//
//	if(a[i]%2==0)
//	{
//  	cout<<a[i]<<"\t";
//  }
///
//}
//}


//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a[5],i;
//	
//cout<<"enter the 5 numbers: ";
//
//for(i=0;i<5;i++)
//{
//	cin>>a[i];
//}
//cout<<"even numbers are:"<<"\n";
//for(i=0;i<5;i++)
//{
//int pass,temp;
//	if(a[i]%2==0)
//	{
//		if(a[i]<a[i+1])
//		{
//			temp=a[i];
//				a[i]=a[i+1];
//				a[i+1]=temp;
//		}
//		
//  	cout<<a[i]<<"\t";
//  }
//
//}
//}

//
//#include<iostream>
//using namespace std;
//int main()
//{
//	int no,i;
//	cout<<"enter no. : ";
//	for(i=0;i<=10;i++)
//	{
//		cin>>no;
//		for(i=0;i<=10;i++)
//{
//        if(no%2==0)
//		{
//			cout<<no;
//			
//		}
//	}
//}
//for(i=0;i<=10;i++)
//{
//        if(no%2==0)
//		{
//			cout<<no;
//			
//		}
//	}
	
//}
//
//
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n,i,a[10],k=0;
//	cout<<"ENter 10 numbers:";
//	for(i=0;i<10;i++)
//	{
//		cin>>n;
//        //1 2 3 4 5 7
//        if(n%2==0)
//		{
//			a[k]=n;
//			k++;
//		}
//	}
//	for(i=0;i<k;i++)
//	{
//		cout<<a[i]<<"\t";
//	}
//	
//
//		
//	
//}


//
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n,i,a[10],k=0;
//	cout<<"ENter 10 numbers:";
//	for(i=0;i<10;i++)
//	{
//		cin>>n;
//       
//        if(n%2==0)
//		{
//			a[k]=n;
//			k++;
//		}
// 	}
//		cout<<"sorted even array:\n";
//		int pass,temp;
// for(pass=1;pass<k;pass++)
// {
// 	if(a[i]<a[i+1])
//    {
// 	temp=a[i];
// 	a[i]=a[i+1];
// 	a[i+1]=temp;
//    }
//    
//    for(i=0;i<10;i++)
//	{
//		cout<<a[i]<<"\t";
//	}
//}
//}


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












