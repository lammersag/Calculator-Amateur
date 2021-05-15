#include <iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

class calc {
	private:
		int Number1;
		int Number2;

	public:
		int		GetNumber1() { return Number1; }
		void	SetNumber1(int NewNum) { Number1 = NewNum; }
		int 	GetNumber2() { return Number2; }
		void	SetNumber2(int NewNum) { Number2 = NewNum; }
		calc(int Num1, int Num2) { Number1 = Num1;Number2 = Num2; }
		calc() {};
		int Sum();
		int Mul();
		int Min();
		float MyDiv();

};

		calc* objcalc = new calc();

void input();

int main()
{
	char ch;
	while (1)
	{
		cout << "\n\n 1:Input 2:Sum 3:Mul 4:Min 5:Div 6:exit";
		cout<<"\n\n\t";
		cin >> ch;
		switch (ch)
		{
		case '1':input();
			break;
		case '6':exit(0);
			break;
		case '2': cout << "\nSum =" << objcalc->Sum();
			break;
		case '3': cout << "\nMul =" << objcalc->Mul();
			break;
		case '4': cout << "\nMin =" << objcalc->Min();
			break;
		case '5': cout << "\nDiv =" << objcalc->MyDiv();
			break;
		}
	}
	return 0;
}

void input() {
	int TempNumber;
	cout << "Number1  =";
	cin >> TempNumber;
	objcalc->SetNumber1(TempNumber);
	cout << "Number2  =";
	cin >> TempNumber;
	objcalc->SetNumber2(TempNumber);
}

int calc::Sum()
{
	return Number1+Number2;
}

int calc::Mul()
{
	return Number1*Number2;
}

int calc::Min()
{
	return Number1-Number2;
}

float calc::MyDiv()
{
	return Number1/(float)Number2;
}
