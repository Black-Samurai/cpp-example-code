/*
This is a multi-line comment in c++.
To begin a multi-line comment, type /*
To end a multi-line comment, type:
*/

//This is a single-line comment.

#include <iostream> 
//This command includes the Standard Input / Output Streams Library
//In c++, <iostream> is called a header.
//Including <iostream> allows our program to use the "cout" object and "endl" function


int main() //this is the "main" function, or where the program starts.
{//brackets determine what is in the function.

	//sending the string "Hello World!" and endl to the cout object prints the string and a return character to the console.
	std::cout << "Hello World!" << std::endl; //semicolons mark the end of an expression in c++.

	//this does the same thing as above:
	std::cout << "Hello World!\n"; // "\n" is a special character which signals the console to go to a new line.

	//this command tells the compiler that everything below it could be using an object/method from std.
	using namespace std; //using multiple namespaces can add ambiguity to a program and is not always safe.

	//notice we do not have to use "std::" because we are now using the std namespace:
	cout << "Hello World!" << endl; 
	cout << "Hello World!\n";

	//you can seperate the string, but note the added space:
	cout << "Hello" << " World!" << endl;

	//you can also pass many strings and returns to cout at once:
	cout << "Hello" << endl << "World!" << endl << "Hello\nWorld!\n"
	<< "Hello\n" << "World!\n" << "Hello\n" << "World!" << endl;


	//If you are compiling the program in an OS other than windows, remove the following command.
	system("pause"); //(in windows, the console application will exit immediately without this)

	return 0;//The return value can be used to determine if the program ran successfully.
	//look at functions example for more information on return values.

}//end main function

