/*************************************************************************
	> File Name: main.cpp
	> Author: renyoutong
	> Mail: justiceryt@163.com 
	> Created Time: Tue 30 Nov 2021 10:36:00 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() 
{
	int i, j;

	for(i = 0; i < 4; i++) {
		for(j = 0; j <= 2-i; j++){
			cout << " ";
		}
		for(j = 0; j <= 2*i; j++){
			cout << (char)('A'+i);
		}
		cout << endl;
	}

	for(i = 0; i < 3; i++){
		for(j = 0; j <= i; j++){
			cout << " ";
		}
		for(j = 0; j<= 4-2*i; j++){
			cout << "*";
		}
		cout << endl;
	}



/*
	const double price = 5400.0;
	double guess_price;
	int count = 0;

	for(;;) {
		cout << "请输入您猜的商品价格：";
		cin >> guess_peice;
		if (guess_price > 5400.0) {
			cout << "您猜大了！" << endl;
			count++;
		} else if (guess_price < 5400.0) {
			cout << "您猜小了！" << endl;
			cout++;
		} else{
			cout << "恭喜您在"
		}
	}


	//已知：1997年7月1日为星期二，请打印该月的日历
	int day = 31;
	int dayOfweek = 2;

	cout << "一\t二\t三\t四\t五\t六\t七\n";
	for(int i = 0; i < dayOfweek - 1; i++) {
		cout << '\t';
	}

	for(int i = 1; i <= day; i++) {
		cout << i;
		if((i + dayOfweek - 1) % 7 == 0) {
			cout << '\n';
		} else {
			cout << '\t';
		}
	}
	cout << endl;





	int sum = 0;
	int count = 0;
	for(int i = 1; i <= 100; i++){
		sum += i;
	}
	cout << sum <<endl;
*/
	return 0;
}
