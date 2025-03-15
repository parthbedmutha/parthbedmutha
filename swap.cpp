#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	int swap;
	
	cout<<"enter the value of a:"<<endl;
	cin>>a;
	
	cout<<"enter the value of b:"<<endl;
	cin>>b;
	
	cout<<"enter the value of c:"<<endl;
	cin>>c;
	 
	 swap = a;
	 a=b;
	 b=c;
	 c=swap;
	 
	 cout<<"Value after a :"<<a<<"value of b:"<<b<<"value of c:"<<c;
	 return 0;
	}
