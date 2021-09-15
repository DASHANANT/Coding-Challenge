#include <iostream>
using namespace std;
int SWAP(int &x,int &y)
{ 
  int temp;
  temp= x;
  x=y;
  y=temp;

}  

int main() 
{   
    int x, y;
    cin>> x >> y;
    cout << "Before swapping a= "<< x <<" and b="<<y;
    SWAP(x,y);
    
	cout << "\nAfter swapping a= "<< x <<" and b="<<y;
    return 0;
}
