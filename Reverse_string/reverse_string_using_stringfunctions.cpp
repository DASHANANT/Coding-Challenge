#include<iostream>
#include<string>
int main() 
{ 
 int i;
std::string str;
std::string str1;
std::getline(std::cin,str); 
int k= str.size();
str1.resize(k);
for(i=0;i<str.size();i++)
{
  str1[i]= str[k-1];  
  k--;
}
str1.shrink_to_fit();
std::cout<< str1;
}
