#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float a,b;
	float result;
	
	cout<<"enter num 1:"<<endl;
	cin>>a;
	cout<<"enter num 2:"<<endl;
	cin>>b;
	result=a+b;
	cout<<"addition is:"<<result;
	
	result=a-b;
	cout<<"substraction is:"<<result;
	result=a*b;
	cout<<"multiplication is:"<<result;
	
	result=a/b;
	cout<<"division is:"<<result;
	
	result=(int)a%(int)b;
	cout<<"module is:"<<result;
	
	result=pow(a,b);
	cout<<"exponent is:"<<result;
	
	result=sqrt(a);
	cout<<"exponent is:"<<result;
	
	result=abs(a);
	cout<<"absoulte value is:"<<result;
	
	result=min(a,b);
	cout<<"min value is:"<<result;
	
	result=max(a,b);
	cout<<"max value is:"<<result;
			
	return 0;
}
