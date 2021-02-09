#include <iostream>
using namespace std;

int main(){
	
	int res = 0;
	int a;
	while(cin >> a){
		if((int)(a) == 0){
			break;
		}
		if((int)(a) % 2 == 0) 
			res++;
	}
	cout << res << endl;
	
	return 0;
}