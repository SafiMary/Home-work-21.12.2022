#include "Phonebook.h"
#include <iostream>
#include <string>

Phonebook::Phonebook() {  
}

Phonebook::Phonebook(const std::vector<int>&number,
	const std::vector<std::string>&subscriber):
	_number(number),_subscriber(subscriber){}  


int Phonebook::getNumber(size_t index) {  
	return _number[index];
}
void Phonebook::addNumber(int number) {  
	_number.push_back(number);
}
bool Phonebook::removeNumber(int number) {   
	for (size_t i = 0; i < _number.size(); i++) {
		if (_number[i] == number) {
			_number.erase(_number.begin() + i);
			return true;
		}
	}
	return false;


}

void Phonebook::removeNumberByIndex(size_t index) {
	_number.erase(_number.begin() + index);
}
const std::string& Phonebook::getSubscriber(size_t index) {
	return _subscriber[index];
}

void Phonebook::addSubscriber(const std::string& subscriber) {
	_subscriber.push_back(subscriber);
}

bool Phonebook::removeSubscriber(const std::string& subscriber) {   
	for (size_t i = 0; i < _subscriber.size(); i++) {
		if (_subscriber[i] == subscriber) {
			_subscriber.erase(_subscriber.begin() + i);
			return true;
		}
	}
	return false;

}
void Phonebook::removeSubscriberByIndex(size_t index) {
	_subscriber.erase(_subscriber.begin() + index);
}
void Phonebook::printAllNumber() {
	for (size_t i = 0; i < _number.size(); i++) {
		std::cout << _number[i] << '\n';
	}
}
	void Phonebook::printAllSubscriber() {
		for (size_t i = 0; i < _subscriber.size(); i++) {
			std::cout << _subscriber[i] << '\n';
		}
	}


const std::string& Phonebook::operator[](int index) {
	return _subscriber[index];
}
bool Phonebook::operator>(Phonebook& other) {
	return(_subscriber > other._subscriber);	
}
bool Phonebook::operator<(Phonebook& other) {
	return(_subscriber < other._subscriber);
}
bool Phonebook::operator>=(Phonebook& other) {
	return (_subscriber == other._subscriber || _subscriber > other._subscriber);
}
bool Phonebook::operator<=(Phonebook& other) {
	return(_subscriber == other._subscriber || _subscriber < other._subscriber);

}