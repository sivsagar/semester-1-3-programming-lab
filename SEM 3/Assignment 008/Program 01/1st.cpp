/*Create a class Book with private member variables title (string) and author (string). Implement:
 A default constructor that initializes title to "Unknown" and author to "Anonymous".
 A parameterized constructor that takes title and author as arguments and initializes the member variables accordingly.
 A display() method to print the book's title and author.
 In main(), create one Book object using the default constructor and another using the parameterized constructor, then display their details.

 Sample output:
 Title: Unknown
 Author: Anonymous

 Title: 1984
 Author: George Orwell
*/

#include <iostream>
#include <string>

class Book {
private:
	std::string title;
	std::string author;
public:
	// Default constructor
	Book() : title("Unknown"), author("Anonymous") {}

	// Parameterized constructor
	Book(const std::string& t, const std::string& a) : title(t), author(a) {}

	// Display method
	void display() const {
		std::cout << "Title: " << title << std::endl;
		std::cout << "Author: " << author << std::endl;
	}
};

int main() {
	// Book using default constructor
	Book b1;

	// Book using parameterized constructor
	Book b2("1984", "George Orwell");

	b1.display();
	std::cout << std::endl;
	b2.display();

	return 0;
}