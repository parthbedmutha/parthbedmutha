#include<string>
using namespace std;
int main()
{
	string data1,data2,data3;
	cout<<"enter the data:"<<endl;
	cin>>data1;
	
	cout<<"enter the second data:"<<endl;
	cin>>data2;
	
	cout<<"enter the 3rd data:"<<endl;
	cin>>data3;
		
    cout<<"the length of string is"<<data1.length()<<endl;
    cout<<"the length of second string is:"<<data2.length()<<endl;
    cout<<"the length of 3rd string is:"<<data3.length()<<endl;
    
    if (data1.length() > data2.length() && data1.length() > data3.length())
    {
    	cout<<"data 1st is greater";
    	
	}
	else if(data2.length() > data3.length() && data2.length() > data1.length())
    {
    	cout<<"data 2nd is greater";
    }
    else{
    	cout<<"data 3 is greater";
    	
	}
    return 0;
    

	
	return 0;
}
