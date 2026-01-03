#include<iostream>
#include<string>
using namespace std;
class Student {
	private://private
	 string name;
	 int age;
	
	public://public for access
		
			
	 void setName(string x)//for modifing
	 {
	 	name=x;
	 }
	 void setAge(int a)
	 {
	 	age=a;
	 }
	 setdetail(string x, int a) {
        setName(x);
        setAge(a);
    }
	 	string getName()//for cout
	 	{
	 		return name;
		 }
		 int getAge(){
		 	return age;
		 }
		
};

int main(){
	string x;
	int a;
	cout<<"entre your name : ";
	cin>>x;
	cout<<"Also enter your age :";
	cin>>a;
	
	Student student1,student2,student03;
	student1.setdetail(x,a);
		cout<<"entre your name : ";
	cin>>x;
	cout<<"Also enter your age :";
	cin>>a;
	student2.setdetail(x,a);
		cout<<"entre your name : ";
	cin>>x;
	cout<<"Also enter your age :";
	cin>>a;
	student03.setdetail(x,a);
	cout<<"His name is : "<<student1.getName()<<endl;
	cout<<"His age is : "<<student1.getAge()<<endl;
	cout<<endl;
	cout<<"His name is : "<<student2.getName()<<endl;
	cout<<"His age is : "<<student2.getAge()<<endl;
	cout<<endl;
	cout<<"His name is : "<<student03.getName()<<endl;
	cout<<"His age is : "<<student03.getAge()<<endl;
	return 0;
}

