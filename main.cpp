#include <iostream>
#include <string>

// Project 1 — Betsy Caudel
// CIS 5 Week 04 · Student card

//Removes need to rewrite withing the code many times. Simplifies the code.
using std::cin;
using std::cout;
using std::string;
using std::endl;

int main() {
  const int CURRENT_YEAR = 2026;

  // Declaration and initialization of the 4 variables.
  string name = "";
  int age = 0;
  int credits = 0;
  double gpa = 0.0;

  // Askes for information from user then saves information into the proper variable.
  cout << "First name? ";
  cin >> name;
  cout << "Age? ";
  cin >> age;
  cout << "Credits this term? ";
  cin >> credits;
  cout << "GPA? ";
  cin >> gpa;
  cout << endl;

  //Computed line with an operator
  int grad_year = CURRENT_YEAR + 4;

  // Prints the card from the variable names
  cout << "=== Student Card ===" << endl;
  cout << "Name: " << name << endl;
  cout << "Age: " << age << endl;
  cout << "Credits this term: " << credits << endl;
  cout << "GPA: " << gpa << endl;
  cout << "Expected graduation: " << grad_year << endl;
  
  return 0;
}