// constTest.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class Point {
private:
	
public:
	Point() {}
	Point(int xPos, int yPos) {
		this->xPos = xPos;
		this->yPos = yPos;
	}

	int xPos = 0;
	int yPos = 0;
};

ostream& operator<< (ostream& os, const Point& pos) {
	os << '[' << pos.xPos << ", " << pos.yPos << ']' << endl;
	return os;
}

class BonudCheckPointArray
{
private:
	Point* arr;
	int arrLen;
	BonudCheckPointArray(const BonudCheckPointArray& arr) {}
	BonudCheckPointArray& operator=(const BonudCheckPointArray& arr) {}

public:
	BonudCheckPointArray(int len) : arrLen(len) {
		arr = new Point[len];
	}

	Point& operator[] (int idx) 
	{
		if (idx < 0 || idx >= arrLen) {
			cout << "Array index out of bound exception" << endl;
			exit(0);
		}

		return arr[idx];
	}

	Point& operator[] (int idx) const 
	{
		if (idx < 0 || idx >= arrLen) {
			cout << "Array index out of bound exception" << endl;
			exit(0);
		}

		return arr[idx];
	}

	int GetArrLen() const { return arrLen; }
	~BonudCheckPointArray() { delete []arr; }
};


int main() {
	
	BonudCheckPointArray arr(3);
	arr[0] = Point(3, 4);
	arr[1] = Point(5, 6);
	arr[2] = Point(7, 8);

	for (int i = 0; i < arr.GetArrLen(); i++) {
		cout << arr[i];
	}


	return 0;
}