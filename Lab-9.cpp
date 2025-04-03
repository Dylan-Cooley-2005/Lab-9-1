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
	// Print every element at an even index
	cout << "Every element at an even index: ";
	for (int i = 0; i < 10; i += 2) { // Loop through the array with a step of 2
		cout << array[i] << " "; // Print each element at an even index
	}
	cout << endl;
	// Print every even element
	cout << "Every even element: "; // Loop through the array
	for (int i = 0; i < 10; i++) { // Check if the element is even
		if (array[i] % 2 == 0) { // If the element is even
			cout << array[i] << " ";
		}
	}
	cout << endl;
	// Print all elements in reverse order
	cout << "All elements in reverse order: ";
	for (int i = 9; i >= 0; i--) { // Loop through the array in reverse
		cout << array[i] << " ";
	}
	cout << endl;
	// Print only the first and last element
	cout << "Only the first and last element: ";
	cout << array[0] << " " << array[9] << endl; // Print the first and last element
		// End of program
	return 0;
}