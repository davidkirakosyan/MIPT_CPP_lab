#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;

	int is_prime = 1;
	for(int i = 2; i < N; i++){
		if(N % i == 0){
			is_prime = 0;
			break;
		}
	}
	cout << is_prime << endl;

	return 0;
}
