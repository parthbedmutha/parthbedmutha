#include<iostream>
using namespace std;
int main()
{
	float a,b,c,d;
	
	cout<<"enter the first num a:"<<endl;
	cin>>a;
	cout<<"enter the sec num b:"<<endl;
	cin>>b;
	cout<<"enter the third num c"<<endl;
	cin>>c;
	cout<<"enter the fourth num d:"<<endl;
	cin>>d;
	
	if(a>b && a>c && a>d)
	{
		cout<<"a is greate than bcd"<<endl;
		
	}
	else if (b>a && b>c && b>d)
	{
		cout<<"b is greater than acd"<<endl;
		
	}
	else if (c>a && c>b && c>d)
    {
    	cout<<"c is greater than abd"<<endl;
    	
	}
	else 
	{
		cout<<"d is greater than abc"<<endl;
	}
  return 0;
}
