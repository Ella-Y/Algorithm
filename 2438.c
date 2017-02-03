/*
* 2438.c 
* 첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
*/
#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		for (int j = 0; j <= i; j++)
			cout << "*";
		cout << endl;
	}
}
