#include<iostream>
#include<string>
#include<vector>

//Object oriented programming

class Person {
private:
	//variables
	std::string name;
	int age;
	bool female;
	std::string profession;
	bool std;

	//private functions


public:
	//constructors and destructors - only called once when creating the object
	Person() { //default constructor
		this->name = ""; //good practice | this ->
		this->age = 0;
		this->female = false;
		this->profession = "";
		this->std = false;
	}

	Person(std::string name, int age, bool female, std::string profession, bool std) {
		this->name = name;
		this->age = age;
		this->female = female;
		this->profession = profession;
		this->std = std;
	}

	~Person() {
		//destructor
		//used to prevent memory leaks when deleting an object of this class
	}

	//accessors

	//modifiers

	//functions
};

int main(int argc, char* argv[]) {

	Person p1("Josh", 5, true, "reeee", true);

	return 0;
}


/*
Syntax of OOP
keyword(class) class-name{

private:
private members
private functions

public:
constructor
destructor
public members
public member-functions
}


*/
