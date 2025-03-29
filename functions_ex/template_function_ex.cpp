#include <iostream>
#include <string>
#include <typeinfo>

// This is our "Magic Box" template!
template <typename T>
T putInBox(T item) {
  std::cout << "Something went into the Magic Box...\n";
  return item; // Whatever went in, comes right back out!
}

int main() {
  // Let's use the Magic Box with different things!

  // Putting in a number (an integer)
  int number = 10;
  int numberFromBox = putInBox(number);
  std::cout << "The Magic Box gave back the number: " << numberFromBox << "\n\n";
  std::cout << "The type of the number is: " << typeid(numberFromBox).name() << "\n\n";
  std::cout << "Type of number (using decltype): " << typeid(decltype(numberFromBox)).name() << std::endl;


  // Putting in a word (a string)
  std::string word = "Awesome";
  std::string wordFromBox = putInBox(word);
  std::cout << "The Magic Box gave back the word: " << wordFromBox << "\n\n";
  std::cout << "The type of the word is: " << typeid(wordFromBox).name() << "\n\n";
  std::cout << "Type of word (using decltype): " << typeid(decltype(wordFromBox)).name() << std::endl;


  // Putting in a decimal number (a double)
  double decimal = 3.14;
  double decimalFromBox = putInBox(decimal);
  std::cout << "The Magic Box gave back the decimal: " << decimalFromBox << "\n";
  std::cout << "The type of the decimal is: " << typeid(decimalFromBox).name() << "\n\n";

  return 0;
}