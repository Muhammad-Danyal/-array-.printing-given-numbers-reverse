#include<iostream>
using namespace std;

int main() {
	int arr[10];
	for (int i = 0; i < 10; i++) {
		cout << "array[" << i << "] = ";
		cin >> arr[i];
	}
	for (int i=10; i >= 0; i--)
		cout << arr[i]<<endl;
	return 0;
}