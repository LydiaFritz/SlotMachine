#ifndef CAT_H
#define CAT_H

#include <string>
#include <iostream>

class Cat {
private:
	std::string name;
public:
	Cat() :name("Trixie") {}
	Cat(std::string n) :name(n) {}
	std::string getName()const { return name; }
	void speak() { std::cout << "MEOWWWWW" << std::endl; }
};

#endif
