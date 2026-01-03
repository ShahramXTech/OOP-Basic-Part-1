#include<iostream>
#include<string>
using namespace std;
class person {
	private://private
	 string name;
	
	public://public for access
		
			
	 void setNamep(string x)//for modifing
	 {
	 	name=x;
	 }
	 	string getNamep()//for cout
	 	{
	 		return name;
		 }
		
};

int main(){
	string x;
	cout<<"entre your name : ";
	cin>>x;
	person Person;
	Person.setNamep(x);
	cout<<"His name is : "<<Person.getNamep()<<endl;
	retun 0;
}

