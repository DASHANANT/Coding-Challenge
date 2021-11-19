#include<iostream>
using namespace std;
int main() 
{
  int r,c;
  std::cin>>r;
  std::cin>>c;
  int a[r][c];
  int b[r][c]; 
	for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            std::cin>>a[i][j];
        }        
    }  
   for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            std::cin>>b[i][j];
        }        
    }  
    
  	for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            a[i][j]= a[i][j] + b[i][j];
        }        
    }
  
  	for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            std::cout<<a[i][j]<<" ";
        }  
      std::cout<<"\n";
    }
  return 0;
}
