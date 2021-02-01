#include <iostream>
using namespace std;

int main(){

	int N;
	cin >> N;

	/*
	*****
	*****
	*****
	*****
	*****
	*/
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			cout << '*';
		}
		cout << endl;
	}
	cout << endl;

	/*
	*
	**
	***
	****
	*****
	*/
	for(int i = 0; i < N; i++){
		for(int j = 0; j <= i; j++){
			cout << '*';
		}
		cout << endl;
	}
	cout << endl;

	/*
	*****
	****
	***
	**
	*
	*/
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N-i; j++){
			cout << '*';
		}
		cout << endl;
	}
	cout << endl;

	/*
	*******
	 *****
	  ***
	   *

	*/
	for(int i = 0; i <= N / 2; i++){
		cout << "";
		for(int j = 0; j < i; j++){
			cout << ' ';
		}
		for(int j = 0; j < N-2*i; j++){
			cout << '*';
		}
		cout << endl;
	}
	cout << endl;

	// Wait for Enter
	cin.get();
	cin.get();

	return 0;
}