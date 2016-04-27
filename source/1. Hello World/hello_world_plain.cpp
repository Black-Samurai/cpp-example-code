#include <iostream> 


int main()
{
	//non-namespace example
	std::cout << "Hello World!" << std::endl;
	
	//special character example:
	std::cout << "Hello World!\n";

	using namespace std;
	
	//namespace examples:
	cout << "Hello World!" << endl; 
	cout << "Hello World!\n";

	//seperation example:
	cout << "Hello" << " World!" << endl;

	//complex example:
	cout << "Hello" << endl << "World!" << endl << "Hello\nWorld!\n"
	<< "Hello\n" << "World!\n" << "Hello\n" << "World!" << endl;


	system("pause"); //needed for windows

	return 0;

}//end main function

