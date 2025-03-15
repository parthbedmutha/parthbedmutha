#include<iostream>
#include<string>
using namespace std;
int main()
{
	string name;
	
	cout<<"enter the name:";
	getline(cin,name);
	
	cout<<"string length is:"<<name.length()<<endl;
    return 0;	
}
