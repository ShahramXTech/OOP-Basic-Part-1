#include <iostream>
#include <string>

using namespace std;

class employee {
private:
    string name;
    float salary;

public:
    void setName(string N) {
        name=N;
    }

    void setSalary(int s) {
        salary=s;
    }

    string getName() {
        return name;
    }

    int getSalary() {
        return salary;
    }

   
    
};

int main() {
    string N;
    int s;

    cout << "Enter  your Name: ";
    cin >> N;

    cout << "Enter your salary : ";
    cin >> s;

    employee account;
    account.setName(N);
    account.setSalary(s);

    cout << "Name: "<<account.getName()<<endl;
    cout << "Salary : "<<account.getSalary()<<endl;

  

    return 0;
}

