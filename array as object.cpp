#include<iostream>
using namespace std;
class Student
{
	int id;
	public:
	void  getData()
	{
		cin>>id;
	}
	void display()
	{
		cout<<id<<endl;
	}
};
main()
{
	Student s[5];
	cout<<"Enter value for id: "<<endl;
	for(int i=0;i<5;i++)
	{
		s[i].getData();
	}
	cout<<"Id values are: "<<endl;
	for(int i=0;i<5;i++)
	{
		s[i].display();
	}
}
