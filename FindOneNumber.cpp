//����1��������
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

int FindOneNumber(unsigned int num)
{
	int numberofOne = 0;
	while (num)
	{
		num = num & (num - 1);
		numberofOne++;
	}
	return numberofOne;
}


void Test()
{
	int num = 32;
	cout<<FindOneNumber(num)<<endl;
}


int main()
{
	Test();
	system("pause");
	return 0;
}

//����2��ģ����
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

int FindOneNumber(unsigned int num)
{
	int numberofOne = 0;
	while (num)
	{
		if(num % 2 == 1)		
		numberofOne++;
		num /= 2;
	}
	return numberofOne;
}


void Test()
{
	int num = 32;
	cout << FindOneNumber(num) << endl;
}


int main()
{
	Test();
	system("pause");
	return 0;
}


//����3����λ
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

int FindOneNumber(unsigned int num)
{
	int numberofOne = 0;
	while (num)
	{
		if (num & 1)
			numberofOne++;
		num = num >> 1;
	}
	return numberofOne;
}


void Test()
{
	int num = 32;
	cout << FindOneNumber(num) << endl;
}


int main()
{
	Test();
	system("pause");
	return 0;
}