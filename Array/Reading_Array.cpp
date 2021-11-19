#include <iostream>
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
  for(int i=0; i<n; i++)
  {
    std::cout<<arr[i]<<"\n";
  }  
    return 0;
}

--------------------------------------------
// Input
// 5
// 4  7  34  67  100
------------------------------------------------
// Output:                                
// 4
// 7
// 34
// 67
// 100
