#include <iostream>
using namespace std;

struct Address{
	string cityName;
	int No;
};

struct Employee{
	int id;
	string name;
	string department;
	Address address;
};

int main() {

	Employee employee = {12, "Yunus Emre", "Bilgisayar",{"Afyon",03}};

	cout << employee.id << endl;
	cout << employee.name << endl;
	cout << employee.department << endl;
	cout << employee.address.cityName << endl;
	cout << employee.address.No << endl;

	return 0;
}
