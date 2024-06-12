#include<iostream>
using namespace std;

struct FoodItem {
	char name[50];
	double price;
};
void getMenu(FoodItem menu[], int itemCount) {
	for (int i = 0; i < itemCount;++i) {
		cout << "lotfan name qazaye shomareye" << i + 1 << "ra vared konid:";
		cin >> menu[i].name;
		cout << "lotfan qeymat qazaye" << menu[i].name << "ra vared konid:";
		cin >> menu[i].price;
	}
}
void applyValueAddedTax(const FoodItem menu[], int itemCount) {
	cout << "\n menu qaza ba arzesh afzoode:\n";
	for (int i = 0;i < itemCount;++i) {
		cout << "qaza:" << menu[i].name << "-qeymat:" << menu[i].price << "toman\n";
	}
}
int main() {
	int itemCount;
	double taxRate;
	cout << "chand model qaza dar menu ast?";
	cin >> itemCount;

	FoodItem menu[itemCount];
	getMenu(menu, itemCount);
	cout << "nerkh arzesh afzoode ra vared konid:";
	cin >> taxRate;
	applyValueAddedTax(menu, itemCount, taxRate);
	printMenu(menu, itemCount);
	return 0;
}