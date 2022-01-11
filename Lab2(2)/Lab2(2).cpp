// Lab2(2).cpp : ���� ���� �������� ������� "main". ����� ���������� � ������������� ���������� ���������.
//
#include"Fraction.h"
#include <iostream>
#include<string>
#include <conio.h>



//������ �����, ���-5, ������� 9

/*�������� ����� Fraction ��� ������������� ������������ ������(��� ���������
	���� ����� ����� x / y).����������� ��������� + , -, *, / ��� ������.����������� �����
	void reduce() ��� ���������� �����, � ����� ����������� ������ :
? int gcd(int n, int m)
������� ��� ���������� ����������� ������ �������� ����� n � m;
? void printAsFraction(double decimal_fraction)
? void printAsFraction(char* decimal_fraction)
������������� ������ ������ ���������� ����� � ���� ������������
(��������, ��� �������� decimal_fraction = 0.43 �� ������ ������
	��������� 43 / 100, ��� 0.25 � 1 / 4 � �.�.).
	����� ����������� � ���� ������������ ����� ������ ������� ���� ��������� ��
	������ ������ � ��������� ����������� ������.
	������������������ ������ ���������� ������.������� ��������� �������� ������.
	���������� �������� ��������, ���������, ��������� � ������� ������.�������
	�� ����� ����������.�������� ����� ���������� ������ ����������� ������� ������.*/



int main()
{
	setlocale(LC_ALL, "Rus");
	int nominator1 = 0;
	int nominator2 = 0;
	int denominator1 = 0;
	int denominator2 = 0;
	std::cout << "������� ��������� ������ �����:  " << std::endl;
	std::cin >> nominator1;
	std::cout << "������� ����������� ������ �����:  " << std::endl;
	std::cin >> denominator1;
	std::cout << "������� ��������� ������ �����:  " << std::endl;
	std::cin >> nominator2;
	std::cout << "������� ����������� ������ �����:  " << std::endl;
	std::cin >> denominator2;
	Fraction fract1(nominator1,denominator1);
	Fraction fract2(nominator2, denominator2);
	Fraction result;
	system("cls");
	bool errorFlag = true;
	do
	{
		std::cout << "������ �����:  ";
		fract1.printFraction();
		std::cout << "������ �����:  ";
		fract2.printFraction();
		int n;
		std::cout << "�������� ��������:  " << std::endl;
		std::cout << "1.���������� ��� " << std::endl;
		std::cout << "2.����� ���������� ����� � ���� ������������" << std::endl;
		std::cout << "3.���������� �����" << std::endl;
		std::cout << "4.�������� ������" << std::endl;
		std::cout << "5.��������� ������" << std::endl;
		std::cout << "6.��������� ������" << std::endl;
		std::cout << "7.������� ������" << std::endl;
		std::cout << "8.���������� �������� ������: " << std::endl;
		std::cout << "9.�����" << std::endl;

		char fractChar[10];
		double fractNum = 0;
		std::cin >> n;
		switch (n)
		{
		case 1:
			system("cls");
			int n, m;
			std::cout << "������� ����� n: " << std::endl;
			std::cin >> n;
			std::cout << "������� ����� m: " << std::endl;
			std::cin >> m;
			std::cout << "���: " << Fraction::gcd(n, m) << std::endl;
			_getch();
			system("cls");
			break;
			
		case 2:
			system("cls");
			std::cout << "������� ���������� ����� ��� ��������������: ( ����� ����� )(1 ������) " << std::endl;
			std::cin >> fractChar;
			Fraction::printAsFraction(fractChar);
			std::cout << "������� ���������� ����� ��� ��������������: ( ����� ����� )(2 ������) " << std::endl;
			std::cin >> fractNum;
			Fraction::printAsFraction(fractNum);
			_getch();
			system("cls");
			break;
		case 3:
			system("cls");
			fract1.reduce();
			fract2.reduce();
			fract1.printFraction();
			fract2.printFraction();
			_getch();
			system("cls");
			break;
		case 4:
			
			system("cls");
		    result = fract1 + fract2;
			result.reduce();
			result.printFraction();
			_getch();
			system("cls");
			break;
		case 5:
			
			system("cls");
			result = fract1 - fract2;
			result.reduce();
			result.printFraction();
			_getch();
			system("cls");
			break;
		case 6:
			system("cls");
			result = fract1 * fract2;
			result.reduce();
			result.printFraction();
			_getch();
			system("cls");
			break;
			break;
		case 7:
			
			system("cls");
			result = fract1 / fract2;
			result.reduce();
			result.printFraction();
			_getch();
			system("cls");
			break;
		case 8:
			system("cls");
			std::cout << "8.���������� �������� ������: ";
			std::cout << Fraction::count << std::endl;
			_getch();
			system("cls");
			break;
		case 9:
			errorFlag = false;
			break;
		default:
			std::cout << "������� ������ ��������" << std::endl;
			errorFlag = true;
			break;
		}
	} while (errorFlag);
	return 0;
}


// ������ ���������: CTRL+F5 ��� ���� "�������" > "������ ��� �������"
// ������� ���������: F5 ��� ���� "�������" > "��������� �������"

// ������ �� ������ ������ 
//   1. � ���� ������������ ������� ����� ��������� ����� � ��������� ���.
//   2. � ���� Team Explorer ����� ������������ � ������� ���������� ��������.
//   3. � ���� "�������� ������" ����� ������������� �������� ������ ������ � ������ ���������.
//   4. � ���� "������ ������" ����� ������������� ������.
//   5. ��������������� �������� ������ ���� "������" > "�������� ����� �������", ����� ������� ����� ����, ��� "������" > "�������� ������������ �������", ����� �������� � ������ ������������ ����� ����.
//   6. ����� ����� ������� ���� ������ �����, �������� ������ ���� "����" > "�������" > "������" � �������� SLN-����.
