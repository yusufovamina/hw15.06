#include<iostream>
using namespace std;

//u kajdoy palochki mojet bit tolko 1 xozyain!
class MagicWand {
private:
	char material[25];
	char core[25];
	int length;
public:
	MagicWand(const char material[], const char core[], int length) :length(length) {
		strcpy_s(this->material, material);
		strcpy_s(this->core, core);
	}
	void show() {
		cout << "\n\t- MAGIC WAND -" << endl;
		cout << "Material: " << material << endl;
		cout << "Core: " << core << endl;
		cout << "Length: " << length << endl;
		cout << endl << endl;
	}
};

class Wizard {
private:
	char name[50];
	int age;
	char faculty[20];
	MagicWand& wand;
public:
	Wizard(const char name[],int age,const char faculty[],MagicWand wand):age(age),wand(wand) {
		strcpy_s(this->name, name);
		strcpy_s(this->faculty, faculty);
	}
	void show() {
		cout << "Wizard's name: " <<name<< endl;
		cout << "Age: " << age << endl;
		cout << "Faculty: " <<faculty<< endl;
		wand.show();
	}
};

int main() {
	
		MagicWand wand1("Acacia", "Unicorn hair", 15);
		MagicWand wand2("Cedar", "Phoenix feather", 16);
		Wizard wiz1("Cedric Diggory", 17, "Hufflepuff", wand1);
		Wizard wiz2("Harry Potter", 16, "Griffindor", wand2);
		wiz1.show();
		wiz2.show();
}