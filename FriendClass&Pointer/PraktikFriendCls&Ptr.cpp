#include <iostream>
using namespace std;

class rectangle; // forward declaration

class TableShape {
private: 
	float SideC, SideD;
	float SideA, SideB;

public: 
	void EnterDimns() {
		cout << "Enter Table dimensions\n";
		cout << "Side C: ";
		cin >> SideC;
		cout << "Side D 2: ";
		cin >> SideD;
		cout << "Side A: ";
		cin >> SideA;
		cout << "Side B: ";
		cin >> SideB;
	}

	float calcArea() const{
		return (SideC * SideD);
	}

	float calcPerimeter() const {
		return (2 * (SideA + SideB));
	}

	void printDimns() const {
		cout << "Table Shape Shape\n";
		cout << "Area : " << calcArea() << endl;
		cout << "Perimeter : " << calcPerimeter() << endl;
	}

	friend float totalPerimeter(rectangle c, TableShape);

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
	friend float totalPerimeter(rectangle c, TableShape t);
};
    float totalPerimeter(rectangle c, TableShape t) {
	    return (4 * c.side) + (2 * (t.SideA + t.SideB));
	 }
	int main() {
		TableShape tblObj;
		rectangle rectangleObj;

		tblObj.EnterDimns();
		rectangleObj.EnterDimns();

		tblObj.printDimns();
		rectangleObj.printDimns();

		cout << "\n Total Perimeter (Friend Function):"
			<< totalPerimeter(rectangleObj, tblObj) << endl;

		return 0;
	}


