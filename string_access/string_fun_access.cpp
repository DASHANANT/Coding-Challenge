#include <iostream>
#include <string>
int main ()
{
 std::string s ("Strings");
 s.pop_back();
 s.back() = '!';
 s.front()='s';
 s.at(4)='i';
 std::cout << s;
}


# s= Strings
# .pop()= last letter will be removed  ---- s= String
# .back()= is used to access last letter of string --------s= Strin!
# .front()= is used to access first letter of string --------s= strin!
# .at(4)= is used to access any letter of string --------s= strii!
