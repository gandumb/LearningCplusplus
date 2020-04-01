#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>

int main(int argc, char *args[]) {
	//std::string line;
	//std::ifstream f("inputFile.txt");

	//for (; std::getline(f, line);) { //the getline checks the failbit and badbit
	//	//this code bit can't be surprised, if the file isn't opened, it doesn't run the loop
	//	std::cout << line << "\n";
	//}

	//f.close();

	int data[5][2];
	std::istringstream lineStream;
	std::string line;
	std::ifstream f("inputFile.txt");

	int temp1 = 0;
	int temp2 = 0;

	for (int i = 0; std::getline(f, line); i++) {
		lineStream.str(line);
		lineStream >> temp1;
		lineStream >> temp2;

		if (lineStream.fail()) {}
		else {
			data[i][0] = temp1;
			data[i][1] = temp2;
		}
		lineStream.clear();
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 2; j++)
			std::cout << data[i][j] << " ";
		std::cout << std::endl;
	}

	f.close();
}
