#include<iostream>

int power(int m,int n)
{
    int j,i;
    for(i=1,j=1;i<=n;i++)
        j=j*m;
    return j;
}

int arm(int n)
{   
  int o,r,sum,x;
  x=n;
  while(x){
    o++;
    x=x/10;
  }
  x=n;
  while(x){
    r=x % 10;
    sum+=power(r,o);
    x=x / 10;
  }
  return (sum==n);
}

int main()
{
    int n;
    std::cin>>n;
    if(arm(n)==1)
        std::cout<<"Yes, you have a Armstong Number";
    else
        std::cout<<"It is not an Armstrong Number";
    
}
