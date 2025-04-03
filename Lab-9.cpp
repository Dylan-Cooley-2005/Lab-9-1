/*
Dylan Cooley
4-3-2025
lab 9-1

Write a program that initializes an array with ten 4-digit random integers (obtained from the rand() function)
and then prints five lines of output containing:
• Every element in order of appearance in the array.
• Every element at an even index.
• Every even element.
• All elements in reverse order.
• Only the first and last element.
*/

#include<iostream>
#include<random>

using namespace std;

int main() 
{
	// Declare an array of 10 integers
	int array[10];
	// Seed the random number generator
	srand(time(0));
	// Initialize the array with random 4-digit integers
	for (int i = 0; i < 10; i++) {
		array[i] = rand() % 9000 + 1000; // Generates a random 4-digit number
	}
	// Print every element in order of appearance
	cout << "Every element in order of appearance: ";
	for (int i = 0; i < 10; i++) { // Loop through the array
		cout << array[i] << " "; // Print each element
	}
	cout << endl;
		// End of program
	return 0;
}