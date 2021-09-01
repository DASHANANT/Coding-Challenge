
#include <stdio.h>

int gcd(int ,int );

int main() 
{
    int a,b;
    cin >> a;
    cin >> b; 
    cout<<gcd(a,b);
 }

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
