#include<iostream>
#include<string>
using namespace std;
class vehicle{
	private:
	string name;
	int model;
	int speed;
	int price;
	public:
		 void setVehicle(string n,int m,int s,int p)
		 {
		 	name=n;
		 	model=m;
		 	speed=s;
		 	price=p;
		 }
		 void getVehicle()
		 {
		 	cout<<"you car Deatil  is :"<<endl;
		 	cout<<"Name : "<<name<<endl;
		 		cout<<"Model : "<<model<<endl;
		 			cout<<"speed : "<<speed<<endl;
		 				cout<<"Price :$ "<<price<<endl;
		 }
};

int main(){
	
	vehicle Vehicle;
	Vehicle.setVehicle("Bmw",2025,470,12000);
	Vehicle.getVehicle();
}