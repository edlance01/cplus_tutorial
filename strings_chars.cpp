#include <iostream>
#include <string>

using namespace std;

int main()
{
  char char1 = 'z';
  char char2 = 'p';

  string str1 = "Welcome";
  string str2 = " Students!";

  cout << char1 << endl;
  cout << char2 << endl;
  cout << str1 << str2 << endl;

  string str3 = "This forms "  "a single"
                " line.";
  string str4 = "But good programmers\
  probably do it this way the most.";  // TODO: this not workin output not on a single line

  cout << str3 << endl;
  cout << str4 << endl;

  //std::string str5 = R"(string with \backslash)";  //came out after 11  
  std::string str5 = "(string with \\backslash)";
  std::cout << str5 << std::endl; // Output: string with \backslash
  // TODO: should this one work?
  //string str6 = R"&%$(string with \backslash)&%$"; 


  return 0;
}