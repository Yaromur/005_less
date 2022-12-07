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

	friend bool operator < (const car&, const car&);
	friend bool operator > (const car&, const car&);
};

bool operator < (const car& e1, const car& e2) {
	return e1.getOb() < e2.getOb();
}

bool operator > (const car& e1, const car& e2) {
	return e1.getOb() > e2.getOb();
}

template <class T>
void printVector(vector<T> v) {
	cout << string(50, '-') << "\n";
	for (int i = 0; i < v.size(); i++) {
		v[i].printCar();
		cout << endl;
	}
	cout << "\n" << string(50, '-') << "\n";
}


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

	car ccaarr("BMW", 2022, 12, 50000);

	printVector(carDealership);
	carDealership.push_back(car("tanc", 2003, 5, 4000));
	printVector(carDealership);
	auto it = remove_if(carDealership.begin(), carDealership.end(), [](const car& el) {
		return el.getAge() == 2011;
		});
	carDealership.erase(it, carDealership.end());
	printVector(carDealership);


	auto res = find_if(carDealership.begin(), carDealership.end(),
	 [](car el) {
	  return el.getName() == "BMW";
	});

	if (res == carDealership.end()) cout << "not found!!!\n";
	else cout << "value found: " << "\n";
	ccaarr.getName();
	printVector(carDealership);

	 sort(carDealership.begin(), carDealership.end());
	 printVector(carDealership);

    return 0;
}