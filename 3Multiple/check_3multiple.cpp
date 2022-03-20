#include <iostream>
using namespace std;

int main() {
    int T, K , D0,D1;
    int i,c;
    int total=0;
    int next=0;
	std::cin>>T;
	for (c=0; c<T ;c++)
	{
    	std::cin >>K >> D0 >> D1;
    
    	total= D0+D1;
	
    	for (i=2; i<K ;i++)
    	{
    	    next = total;
    	    
    	    if (next > 10)
    	    {
    	        next = total % 10;
    	    }
    	    
    	   total=  total + next;
    	}

    	if(total %3 == 0)
    	{
    	    std::cout<<"Yes";
    	    std::cout<<"\n";
    	}
    	else
    	{
    	    std::cout<<"No";
    	    std::cout<<"\n";
    	}
	}
	return 0;
}
