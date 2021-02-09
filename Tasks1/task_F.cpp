#include <iostream>
using namespace std;

int main(){
	int a[10001];

	int max = 0;
	int length = 0;
	for(int i = 0; i < 10001; i++){
		cin >> a[i];
		if(a[i] == 0){
			length = i;
			break;
		}
		if(a[i] > max)
			max = a[i];
	}

	int max_amount = 0;
	for(int i = 0; i < length; i++){
		if(max == a[i]){
			max_amount++;
		}
	}
	cout << max_amount << endl;

	return 0;
}