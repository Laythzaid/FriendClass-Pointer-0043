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
		cout << "Kite Shape\n";
		cout << "Area : " << calcArea() << endl;
		cout << "Perimeter : " << calcPerimeter() << endl;
	}

	friend float totalPerimeter(rectangle t, KiteShape);

};

class rectangle {
private:
	float dgl1, dgl2;
	float side;

public:
	void EnterDimns() {
		cout << "Enter Rectangle dimensions\n";
		cout << "Diagonal 1: ";
		cin >> dgl1;
		cout << "Diagonal 2: ";
		cin >> dgl2;
		cout << "Side: ";
		cin >> side;
	}
	float calcArea() const {
		return (dgl1 * dgl2) / 2;
	}
	float calcPerimeter() const {
		return (4 * side);
	}
	void printDimns() const {
		cout << "Rectangle Shape\n";
		cout << "Area : " << calcArea() << endl;
		cout << "Perimeter : " << calcPerimeter() << endl;
	}
	friend float totalPerimeter(rectangle t, KiteShape k);
};
    float totalPerimeter(rectangle t, KiteShape k) {
	    return (4 * t.side) + (2 * (k.sideA + k.sideB));
	 }
	int main() {
		KiteShape kiteObj;
		rectangle rectangleObj;

		

	}

