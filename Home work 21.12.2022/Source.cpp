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
	
	a.addSubscriber("Антон"); //записали контакт
	a.addNumber(123);          //записали номер
	a.addSubscriber("Валерия");
	a.addNumber(456);

	b.addSubscriber("Владимир");
	b.addNumber(678);
	b.addSubscriber("Катя");
	b.addNumber(94488);
	b.addSubscriber("Геннадий");
	b.addNumber(9856);
	
	//достали из книжки номера и контакты объектов
	std::cout << a.getSubscriber(0) << " " << a.getNumber(0) << '\n';
	std::cout << a.getSubscriber(1) << " " << a.getNumber(1) << '\n';
	std::cout << "****************************\n";

	a.printAllSubscriber(); //показали контакт
	a.printAllNumber();    //показали номер
	std::cout << "****************************\n";

	a.removeNumberByIndex(1); //удалили номер по индексу
	a.removeNumber(123);      //удалили номер
	 
	a.removeSubscriber("Антон");  //удалили контакт

	a.printAllSubscriber(); //показали все контакты
	a.printAllNumber();     //показали все номера

	std::cout << "\nВывод контакта по индексу: " << b[0] << '\n';
	if (a > b)
		std::cout << "a > b\n";
	if (a < b)
		std::cout << "a < b\n";
	if (a >= b)
		std::cout << "a >= b\n";
	if (a <= b)
		std::cout << "a <= b\n";


}