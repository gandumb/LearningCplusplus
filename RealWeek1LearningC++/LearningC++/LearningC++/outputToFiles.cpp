//#include<iostream>
//#include<fstream>
//#include<string>
//
//int main() {
//
//	//operators
//	/*
//	+
//	-
//	*
//	/
//	%
//
//	++
//	--
//
//	++i --> prefix
//	i++ --> postfix
//
//	float d1 = 6.0f
//	float d2 = 6.f --> optimizes computer recognizing value as a float
//	*/
//
//
//	//input output to files
//
//	//if files does not exist with a certain name, it will be created
//
//	//std::getline(stream, var, ",") last arguement delimits the stream
//
//	std::string data = "this is a string with stuff";
//	std::string fileName = "myFile.txt";
//	
//
//	std::ofstream fOut(fileName.c_str()); //out file stream
//	//fOut.open("fileName")
//	//std::instream fIn; //in file stream
//
//	if (fOut.is_open()) { //checks to see if the file could be opened
//		std::cout << "I am open:" << "\n";
//		fOut << data << "\n" << "reeee";
//	}
//
//	fOut.close();
//	 
//
//
//}