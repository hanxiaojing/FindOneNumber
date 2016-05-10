//方法1：与运算
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

//方法2：模除法
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


//方法3：移位
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