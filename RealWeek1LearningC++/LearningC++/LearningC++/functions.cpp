//#include<iostream>
//#include<vector>
//#include<string>
//#include<fstream>
//
////return type, name, input parameters
//int addTwoNums(int a, int b) {
//	return a + b;
//}
//
//void printResult(std::string s) {
//	std::cout << s << "\n";
//}
//
////Reference paramters
///*
//Pass by value
//Pass by reference
//*/
//
////void changeName(std::string name) { //pass by value, charName doesn't change in main function
////	name = "bob";
////}
//
//void changeName(std::string& changedName, std::string name) { //pass by reference, charName changes in main
//	changedName = name; //name goes from a var to an alias, does not store data
//	//points to charName
//	// * pointer can also be used for pass by reference
//}
//
//int main() {
//	std::cout << addTwoNums(7, 4) << "\n";
//	printResult("blah");
//	std::string charName = "josh";
//	changeName(charName, "bob");
//	std::cout << charName << "\n";
//	return 0;
//}