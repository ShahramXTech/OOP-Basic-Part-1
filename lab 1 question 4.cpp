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
	 	
		 }
		
};

int main(){
	string x;
	int a;
	cout<<"entre your name : ";
	cin>>x;
	cout<<"Also enter your age :";
	cin>>a;
	
	Student student1;
	student1.setdetail(x,a);
		cout<<"entre your name : ";
	cin>>x;
	cout<<"Also enter your age :";
	cin>>a;
	


	return 0;
}

