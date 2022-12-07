#include<iostream>
#include<string>
#include<numeric> 
#include<algorithm> 
#include<vector> 

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

template <class T>
void printVector(vector<T> v) {
	cout << string(50, '-') << "\n";
	for (int i = 0; i < v.size(); i++)
		v[i].printCar();
	cout << "\n" << string(50, '-') << "\n";
}

bool sortAsc(int a, int b) { return a < b; }
bool sortDesc(int a, int b) { return a > b; }

//class car_dealership {
//	vector<car> carDealership;
//public:
//
//};



int main() {

	vector<car> carDealership = { car("BMW",2022,12,50000),
		car("Audi",2011,6,40000),
		car("Ford",2006,8,65000),
		car("Infinity",2021,8,70000),
		car("Cadilac",2017,4,80000)
	};

	printVector(carDealership);
	
	return 0;
}