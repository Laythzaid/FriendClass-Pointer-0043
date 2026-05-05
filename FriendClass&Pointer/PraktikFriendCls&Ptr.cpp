#include <iostream>
using namespace std;

class rectangle; // forward declaration

class KiteShape {
private: 
	float dgl1, dgl2;
	float sideA, SideB;

public: 
	void EnterDimns() {
		cout << "Enter Kite dimensions\n";
		cout << "Diagonal 1: ";
		cin >> dgl1;
		cout << "Diagonal 2: ";
		cin >> dgl2;
		cout << "Side A: ";
		cin >> sideA;
		cout << "Side B: ";
		cin >> sideB;
	}
};