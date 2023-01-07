#pragma once
#include <iostream>
#include <string>
#include <vector>

class Phonebook
{
public:
	Phonebook();
	Phonebook(const std::vector<int>&number, const std::vector<std::string>&subscriber);
	int getNumber(size_t index);
	void addNumber(int number);
	bool removeNumber(int number);
	void removeNumberByIndex(size_t index);
	const std::string& getSubscriber(size_t index);
	void addSubscriber(const std::string & subscriber);
	bool removeSubscriber(const std::string & subscriber);
	void removeSubscriberByIndex(size_t index);
	void printAllNumber();
	void printAllSubscriber();

	const std::string& operator[](int index);
	bool operator>(Phonebook& other);
	bool operator<(Phonebook& other);
	bool operator>=(Phonebook& other);
	bool operator<=(Phonebook& other);

private:
	std::vector<int> _number;
	std::vector<std::string> _subscriber;
};

