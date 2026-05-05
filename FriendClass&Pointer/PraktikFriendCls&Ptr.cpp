#include <iostream>
using namespace std;

class rectangle; // forward declaration

class KiteShape {
private: 
	float dgl1, dgl2;
	float sideA, sideB;

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

	float calcArea() const{
		return (dgl1 * dgl2);
	}

	float calcPerimeter() const {
		return (2 * (sideA + sideB));
	}

	void printDimns() const {
		cout << "Kite dimensions\n";
		cout << "Diagonal 1: " << dgl1 << endl;
		cout << "Diagonal 2: " << dgl2 << endl;
		cout << "Side A: " << sideA << endl;
		cout << "Side B: " << sideB << endl;
	}
};