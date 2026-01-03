#include<iostream>
using namespace std;

class bankaccount
{
private:
int accountnumber;
float balance;
public:
 void setNumber(int N)
{
	accountnumber=N;
	}	
void setBalance(float b)
{
	balance=b;
}
int getNumber()
{
	return accountnumber;
}
float getBalance(){
	return balance;
}
};
int main(){
	int N;
	float b;
	cout<<"Enter your account number :";
	cin>>N;
	cout<<"enter your account balance :";
	cin>>b;
	cout<<endl;
	cout<<"/n"<<endl;
	
	bankaccount info;
	info.setNumber(N);
	info.setBalance(b);
	
	cout<<"Your account number is :"<<info.getNumber()<<endl;
	cout<<"Your account balance is : "<<info.getBalance()<<endl;
}