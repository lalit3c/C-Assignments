/*
CH-230-A
a13_p1.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <fstream>
#include <iostream>
#include <string>

int main()
{
	std::string input, output; //stores names of input and output files
	std::cout << "Enter name of file: ";
	std::cin >> input; 			//read the name of input file
	output = input;				//name output file as input file
	
	std::size_t found = output.rfind("."); 
					//find the last dot (of extension) in output file name
	
	output.insert(found, "_copy"); //insert "_copy" before extension

	std::ifstream inf;
	inf.open (input, std::ifstream::in); //open input file for reading

	std::ofstream outf;
	outf.open (output, std::ofstream::out); //open output file for writitng

	char c;
	while (inf.get(c))   // read every character for input file
	{
		outf << c;			//write to output file
	}

	inf.close();		//close files
	outf.close();

	return 0;

}