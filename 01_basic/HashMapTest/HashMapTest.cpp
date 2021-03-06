// HashMapTest.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <map>
#include <map>

using namespace std;

struct GameCharacter
{
	GameCharacter() {}

	GameCharacter(int charCd, int Level, int Money)
	{
		_CharCd = charCd;
		_Level = Level;
		_Money = Money;
	}

	int _CharCd;
	int _Level;
	int _Money;
};

void printCharacter(GameCharacter &character)
{
	cout << "캐릭터 코드 : " << character._CharCd << " | 레벨 : "
		<< character._Level << "| 가진 돈 : " << character._Money << endl;
}

int main()
{

	map<int, GameCharacter> Characters;

	GameCharacter Character1(12, 7, 1000);
	Characters.insert(map<int, GameCharacter>::value_type(12, Character1));

	GameCharacter Character2(15, 20, 111000);
	Characters.insert(map<int, GameCharacter>::value_type(15, Character2));

	GameCharacter Character3(7, 34, 3345000);
	Characters.insert(map<int, GameCharacter>::value_type(7, Character3));

	GameCharacter Character4(14, 12, 112200);
	Characters.insert(map<int, GameCharacter>::value_type(14, Character4));

	GameCharacter Character5(25, 3, 5000);
	Characters.insert(map<int, GameCharacter>::value_type(25, Character5));

	map<int, GameCharacter>::iterator Iter1;
	cout << "저장한 캐릭터 리스트" << endl;
	for (Iter1 = Characters.begin(); Iter1 != Characters.end(); ++Iter1)
	{
		printCharacter(Iter1->second);
	}

	cout << "lower_bound(14) " << endl;
	map<int, GameCharacter>::iterator Iter = Characters.lower_bound(14);
	while (Iter != Characters.end())
	{
		printCharacter(Iter->second);

		++Iter;
	}

    return 0;
}

