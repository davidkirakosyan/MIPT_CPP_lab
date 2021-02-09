#include <iostream>
using namespace std;

int main(){
	int a[100];

	int max = 0;
	for(int i = 0; i < 100; i++){
		cin >> a[i];
		if (a[i] == 0)
			break;
		if(a[i] % 2 == 0 && a[i] > max)
			max = a[i];
	}

	cout << max << endl;

	return 0;
}