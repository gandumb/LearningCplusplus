//#include<iostream>
//#include<string>
//#include<vector>
//#include<fstream>
//
//int main() {
//	//Vectors
//
//	//container class, dyanmic array
//
//	std::vector<int> myIntVect; //empty vector
//	//you can use std::string, and any other variable type for the vector
//
//	myIntVect.push_back(24); //pushes to the back of the vector
//	
//	// has a .size() to fetch size
//	//strings use .length()
//
//	for (unsigned i = 0; i < myIntVect.size(); i++)
//		std::cout << myIntVect[i] << "\n";
//
//	myIntVect.erase(myIntVect.begin()+0); //give, + num specifies what position
//	//.end() -1; gives the end of the vector
//
//	myIntVect.clear(); //removes everything from the vector
//
//	for (unsigned i = 0; i < myIntVect.size(); i++) //remove elements at various positions
//		myIntVect.erase(myIntVect.begin() + 0);
//	
//
//	//www.cplusplus.com/reference/vector/vector/
//
//	/*
//	Helpful functions:
//	assign()
//	push_back()
//	pop_back()
//	insert()
//	erase()
//	swap()
//	clear()
//	emplace()
//	emplace_back()
//	*/
//
//	std::cout << myIntVect.size();
//}