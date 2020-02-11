//#include<iostream>
//#include<fstream>
//#include<string>
//
//int main() {
//	//const char* fileName = ""; --> old style of creating strings
//
//	const char* fileName = "myFile.txt";
//
//	std::ifstream fIn(fileName);
//	
//	std::string line = "";
//
//	char c = ' ';
//
//	if (fIn.is_open()) {
//		std::cout << "File is open" << "\n";
//
//		//while (std::getline(fIn, line))
//			//std::cout << line << "\n";
//
//		//while (fIn >> c)//skips spaces and new lines
//			//std::cout << c;
//
//		//while (fIn.get(c)) //prints all chars including spaces and new lines
//			//std::cout << c;
//
//		//int count = 0;
//
//		//while (fIn.get(c)) //counts all a characters
//		//	if (c == 'e' || c == 'E')
//		//		count++;
//		//std::cout << count;
//
//		//while (!fIn.eof()) checks if I am at the end of the file
//	}
//	else
//		std::cout << "COULD NOT OPEN FILE: " << fileName << "\n";
//
//	fIn.close();
//
//
//	return 0;
//}