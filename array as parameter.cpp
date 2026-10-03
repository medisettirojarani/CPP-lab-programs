#include<iostream>
using namespace std;
class Student
{
	public:
		int num;
		void getData(int n)
		{
			num=n;
		}
		void display(Student s)
		{
			cout<<"number="<<s.num<<endl;
		}
};
int main()
{
	Student obj1,obj2;
	obj2=obj1.getData();
	cout<<"number="<<obj2.num<<endl;
	return 0;
}