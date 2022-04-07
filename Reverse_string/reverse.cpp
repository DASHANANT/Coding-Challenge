#include <iostream>
#include <bits/stdc++.h>
int main()
{
char str[100], rev[100];     
int count = 0,p, i;  
std::cin.getline(str,100);
for(i=0;i<100;i++)
{
  if (int(str[i])==0)
    break;  
  count+=1;
}
for(p=0;p<100;p++)
{
  if(count>=0)
  {
     rev[p]=str[count-1];
     count-=1;
  }  
}
std::cout<<rev;
}
