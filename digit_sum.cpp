#include <iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  while(n>9)
  {
    n= (n/10)+(n%10);
  }
  cout<<n;
  return 0;
}
