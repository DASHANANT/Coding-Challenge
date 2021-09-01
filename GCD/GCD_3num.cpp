#include<iostream>

int gcd(int a,int b)
{
    int i;
    while(b){
        i=b;
        b=a%b;
        a=i;
    }
    return a;    
}

int main()
{
    int a,b,c,gcd1;
    std::cin>>a>>b>>c;
    gcd1= gcd(a,gcd(b,c));   
   	std::cout<<gcd1;  
  return 0;
}
