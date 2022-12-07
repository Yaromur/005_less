#include<iostream>
#include<string>
#include<numeric> 
#include<algorithm> 

using namespace std;

class car {
	string name;
	int age;
	int	ob;
	int price;
public:
	car(string name, int age, int ob, int price) {
		this->name = name;
		this->age = age;
		this->ob = ob;
		this->price = price;
	}

	string getName()const {
		return name;
	}

	int getAge()const {
		return age;
	}

	int getOb()const {
		return ob;
	}

	int getPrice()const {
		return price;
	}

	void printCar() {
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Ob: " << ob << endl;
		cout << "Price: " << price << endl;
	}
};


int main() {




	return 0;
}