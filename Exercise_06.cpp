#include<iostream>
using namespace std;

int main() {
	int aList[5] = { 50,10,30,40,20 };

	int temp;

	for (int i = 0; i < 5; i++) {
		for (int j = i; j < 5; j++) {
			if (aList[i] >  aList[j]) {
				temp = aList[j];
				aList[j] = aList[i];
				aList[i] = temp;
			}
		}		
	}

	for (auto i : aList) {
		cout << i << endl;
	}
}