//============================================================================
// Name        : exercise_2_2.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{

	string outputResultString = "",
		   inputNumberString = "";

	char oneToNineDigits[] = {"one",   // char [4] {(char) 'o' , (char) 'n', (char)'e', (char) '\000'}
							  "two",   // char [4] {(char) 't' , (char) 'w', (char) 'o', (char) '\000'}
							  "three", // char [6] {(char) 't' , (char) 'h', (char) 'r', (char) 'e', (char) 'e', (char) '\000'}
							  "four",  // char [5] {(char) 'f' , (char) 'o', (char) 'u', (char) 'r', (char) '\000'}
							  "five",  // char [5] {(char) 'f' , (char) 'i', (char) 'v', (char) 'e', (char) '\000'}
							  "six",   // char [4] {(char) 's' , (char) 'i', (char) 'x', (char) '\000'}
							  "seven", // char [6] {(char) 's' , (char) 'e', (char) 'v', (char) 'e', (char) 'n', (char) '\000'}
							  "eight", // char [6] {(char) 'e' , (char) 'i', (char) 'g', (char) 'h', (char) 't', (char) '\000'}
							  "nine"}; // char [5] {(char) 'n' , (char) 'i', (char) 'n', (char) 'e', (char) '\000'}

	char tenToNineteenDigits[] = {"ten",	   // char [4] {(char) 't' , (char) 'e', (char) 'n', (char) '\000'}
								  "eleven",	// char [7] {(char) 'e' , (char) 'l', (char) 'e', (char) 'v', (char) 'e', (char) 'n', (char) '\000'}
								  "twelve",	// char [7] {(char) 't', (char) 'w', (char) 'e', (char) 'l', (char) 'v', (char) 'e', (char) '\000'}
								  "thirteen",  // char[9] {(char) 't', (char) 'h', (char) 'i', (char) 'r', (char) 't', (char) 'e', (char) 'e', (char) 'n', (char) '\000'}
								  "fourteen",  // char[9] {(char) 'f', (char) 'o', (char) 'u', (char) 'r', (char) 't', (char) 'e', (char) 'e', (char) 'n', (char) '\000'}
								  "fifteen",   // char[8] {(char) 'f', (char) 'i', (char) 'f', (char) 't', (char) 'e', (char) 'e', (char) 'n', (char) '\000'}
								  "sixteen",   // char[8] {(char) 's', (char) 'i', (char) 'x', (char) 't', (char) 'e', (char) 'e', (char) 'n', (char) '\000'}
								  "seventeen", // char[9] {(char) 's', (char) 'e', (char) 'v', (char) 'e', (char) 'n', (char) 't', (char) 'e', (char) 'e', (char) 'n', (char) '\000'}
								  "eighteen",  // char[8] {(char) 'e', (char) 'i', (char) 'g', (char) 'h', (char) 't', (char) 'e', (char) 'e', (char) 'n', (char) '\000'}
								  "nineteen"}; // char[8] {(char) 'n', (char) 'i', (char) 'n', (char) 'e', (char) 't', (char) 'e', (char) 'e', (char) 'n', (char) '\000'}

	char twentyToNinetyDigits[] = {"twenty", // char[7] {(char) 't', (char) 'w', (char) 'e', (char) 'n', (char) 't', (char) 'y', (char) '\000'}
								   "thirty", // char[7] {(char) 't', (char) 'h', (char) 'i', (char) 'r', (char) 't', (char) 'y', (char) '\000'}
								   "forty",  // char [6] {(char) 'f' , (char) 'o', (char) 'r', (char) 't', (char) 'y', (char) '\000'}
								   "fifty",  // char [6] {(char) 'f' , (char) 'i', (char) 'f', (char) 't', (char) 'y', (char) '\000'}
								   "sixty",  // char [6] {(char) 's' , (char) 'i', (char) 'x', (char) 't', (char) 'y', (char) '\000'}
								   "seventy",
								   "eighty",
								   "ninety"};

	char hundredAndThousandDigits[] = {"hundred", "thousand"};

	return 0;
}
