#include<iostream>
#include<string>
using namespace std;
class person {
	private:
	 string name;
	
	public:
		
			
	 void setNamep(string x){
	 	name=x;
	 }
	 
		
};
int main(){
	string x;
	cout<<"entre your name : ";
	cin>>x;
	person Person;
	Person.setNamep(x);
retun 0;
}

