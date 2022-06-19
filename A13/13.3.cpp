/*
CH-230-A
a13_p3.cpp
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

#include <iostream>
#include <fstream>

int main()
{
	int number;
	std::cout << "Enter the number of files to concatenate: ";
	std::cin >> number;
	std::string file_names[number]; //to store the name of files
	int i = 0;
	while (i < number)
	{
		std::cout << "Enter name of file" << i+1 <<": ";
		std::cin >> file_names[i++]; //read from keyboard the name of files 

	}

	std::ofstream output_file;
	output_file.open("concatn.txt", std::ofstream::out);
	if (!output_file)
	{
		std::cout << "Error opening output file!" << std::endl;
		exit (1);
	}

	i = 0;
	while (i < number)
	{
		std::ifstream input_file;
		input_file.open(file_names[i++], std::ifstream::in); //open each file
		if (!input_file)
		{
			std::cout << "Error opening input file"<< i+1 <<"!" << std::endl;
			exit (2);
		}
		char c;
		while (input_file.get(c))
		{
			output_file << c; //write to the output file
		}
		output_file << "\n"; //new line after content of each file
		input_file.close();
		
	}
	output_file.close();
	std::cout << "The concatenated file was saved as 'concatn.txt'!\n"; 
	return 0;

	
}
