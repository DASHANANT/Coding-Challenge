// Everyone Wants To Know The Topper
// During school days/college days, we are all curious to know who topped the class. It's a common curiosity that haunts everyone in the room. Given marks scored by "n" students, could find the highest score?
// ﻿Input Format:
// The first input contains an integer 'n' which denotes the number of students
// The remaining input denotes mark of 'n' students separated by spaces

// Output Format:
// Print the highest mark

#include<iostream>
using namespace std;
int main() 
{
  int n;
  std::cin>>n;
  int arr[n];
   
   for(int i=0; i<n; i++)
  {
    std::cin>>arr[i];
  }
  int topper=0;
  for(int i=0; i<n; i++)
  {
    if (topper < arr[i])
    {
      topper = arr[i];
    }
    
  }  
  std::cout<<topper<<" ";
  return 0;
}
  
 










// Sample Input
// 5
// 45 67 89 34 22

// Sample Output:
// 89
