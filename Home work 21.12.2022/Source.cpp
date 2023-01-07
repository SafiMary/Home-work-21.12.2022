#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <windows.h>
#include "Phonebook.h"


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Phonebook a;
	Phonebook b;
	
	a.addSubscriber("�����"); //�������� �������
	a.addNumber(123);          //�������� �����
	a.addSubscriber("�������");
	a.addNumber(456);

	b.addSubscriber("��������");
	b.addNumber(678);
	b.addSubscriber("����");
	b.addNumber(94488);
	b.addSubscriber("��������");
	b.addNumber(9856);
	
	//������� �� ������ ������ � �������� ��������
	std::cout << a.getSubscriber(0) << " " << a.getNumber(0) << '\n';
	std::cout << a.getSubscriber(1) << " " << a.getNumber(1) << '\n';
	std::cout << "****************************\n";

	a.printAllSubscriber(); //�������� �������
	a.printAllNumber();    //�������� �����
	std::cout << "****************************\n";

	a.removeNumberByIndex(1); //������� ����� �� �������
	a.removeNumber(123);      //������� �����
	 
	a.removeSubscriber("�����");  //������� �������

	a.printAllSubscriber(); //�������� ��� ��������
	a.printAllNumber();     //�������� ��� ������

	std::cout << "\n����� �������� �� �������: " << b[0] << '\n';
	if (a > b)
		std::cout << "a > b\n";
	if (a < b)
		std::cout << "a < b\n";
	if (a >= b)
		std::cout << "a >= b\n";
	if (a <= b)
		std::cout << "a <= b\n";


}