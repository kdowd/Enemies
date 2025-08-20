#pragma once

#include <map> 
#include <string> 
#include <vector> 
#include <iostream>



class Enemy {
public:
	std::string name{};

	Enemy(std::string s) : name(s)
	{

	}

	// my pure interface
	// derived classes must implement this method
	virtual void speak() = 0;

};

class Orc : public Enemy {
public:
	Orc(int i) :Enemy("Orc")
	{
		std::cout << "Orc " << i << std::endl;
	}


	void speak() {
		std::cout << R"(
  *
 ***
  *
)" << std::endl;
		std::cout << "I am an Orc, I'll bite your ankles.\t";
	}
};

class Wizard : public Enemy {
public:
	Wizard(int i) :Enemy("Wizard")
	{

	}

	void speak() {
		std::cout << R"(
  *
 ***
*****
)" << std::endl;

		std::cout << "I am a wizard, I'll put a spell on you\t";
	}
};


class Stormtrooper : public Enemy {
public:
	Stormtrooper(int i) :Enemy("Stormtrooper")
	{

	}
	void speak() {
		std::cout << R"(
*****
*****
*****
)" << std::endl;
		std::cout << "I am a Storming Trooper, I'll kill you\t";
	}
};