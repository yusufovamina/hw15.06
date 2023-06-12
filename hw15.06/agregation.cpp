#include<iostream>
using namespace std;

class WiFi {
private:
	char name[30];
	char password[20];
	bool hidden;
	
public:
	WiFi(const char name[], const char password[], bool hidden) :
		 hidden{hidden} {
		strcpy_s(this->name, name);
		strcpy_s(this->password, password);

	}
	void show(){
		cout << "\t-WIFI-" << endl;
		cout << "Name: "  << name << endl;
		cout << "Password: " << password << endl;
		cout << "Hidden: "<< boolalpha << hidden << endl;
		cout << endl;
	}
};


class Smartphone {
private:
	char company[20];
	char model[20];
	int releaseYear;
	WiFi& wifi;
public:
	Smartphone(const char company[], const char model[], int releaseYear, WiFi wifi) :
		 releaseYear(releaseYear), wifi(wifi) {
		strcpy_s(this->company, company);
		strcpy_s(this->model, model);
	}
	void show() {
		cout << "Company: " << company<<endl;
		cout << "Model: " << model << endl;
		cout << "Release year: " << releaseYear << endl;
		wifi.show();
	}
};

class Laptop {
private:
	char company[20];
	char model[20];
	char prossesor[25];
	int releaseYear;
	WiFi& wifi;
public:
	Laptop(const char company[], const char model[], const char prossesor[], int releaseYear, WiFi wifi) :
		 releaseYear(releaseYear), wifi(wifi) {
		strcpy_s(this->company, company);
		strcpy_s(this->model, model);
		strcpy_s(this->prossesor, prossesor);
	}
	void show() {
		cout << "Company: " << company << endl;
		cout << "Model: " << model << endl;
		cout << "Prossesor: " << prossesor << endl;
		cout << "Release year: " << releaseYear << endl;
		wifi.show();
	}
};

int main() {
	WiFi wifi("TP - Link13", "f23XcL1a", true);
	Smartphone phone("Apple", "Iphone 12", 2020, wifi);
	Laptop laptop("Lenovo", "Lenovo Yoga", "Intel i-5", 2019, wifi);


	phone.show();
	laptop.show();
}