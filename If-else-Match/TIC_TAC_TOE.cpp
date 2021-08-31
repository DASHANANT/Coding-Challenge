#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	char c,d;
	cin >> c;
	cin >> d;
	if (c=='R' || d=='R'){
		cout<< 'R';
	}
	else if(c=='J' || d=='J'){
		if (c=='J')		
		{		
			cout<< d;
        }
        else
        {        
			cout<< c;
        }	
	}

	else if(c!='J' && c!='R' && d!='J' && d!='R'){
		cout<<'D';
	}	
	return 0;
}
