#include <iostream>
using namespace std;

int main(){
	
	int x,count=0;
	cin>>x;
	string s;
	while(x--){
	  cin>>s;
	  if(s[1]=='+')
	  count++;
	  else
	  count--;
	}
	cout<<count<<endl;	
		
	return 0;
	}
