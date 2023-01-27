#include<iostream>
using namespace std;
class student
{
	public:
		string name;
	    int age;
	    bool gender;
	    void printinfo()
	    {
	    	cout<<"print students Info"<<endl;
		}
			
};
int main()
{
	student arr[3];
	for(int i=0; i<3; i++)
	{
		cout<<"Name: "<<endl;
		cin>>arr[i].name;
		cout<<"age: "<<endl;
		cin>>arr[i].age;
		cout<<"Gender: "<<endl;
		cin>>arr[i].gender;
	}
	for(int i=0; i>3; i++)
	{
		arr[i].printinfo();
	}
	return0;
}