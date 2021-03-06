// ExceptionHandling.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

// '0' ~ '9' 의 문자들을 숫자로 변환하여 리턴해준다.
// 잘못된 값이 들어온 경우 예외처리를 한다.
int StoI(char * str)
{
	int len = strlen(str);
	double num = 0;


	for (int i = 0; i < len; ++i) {
		if ('0' <= str[i] && str[i] <= '9') {
			num += (int)pow((double)10, len - 1 - i) * (str[i] - '0');
		}
		else {
			throw str[i];
		}
	}

	return num;
}

int main()
{

	char str1[200];
	char str2[200];

	while (1) {
		cout << "두개의 숫자 입력 : ";

		cin >> str1 >> str2;

		try
		{
			cout << StoI(str1) + StoI(str2) << endl;
			break;
		}
		catch (char ch)
		{
			cout << "문자 " << ch << "가 입력되었습니다." << endl;
			cout << "재입력 진행합니다. " << endl << endl;
		}
	}

	cout << "프로그램을 종료합니다." << endl << endl;


    return 0;
}

