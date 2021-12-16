/*************************************************************************
	> File Name: main.cpp
	> Author: renyoutong
	> Mail: justiceryt@163.com 
	> Created Time: Tue 30 Nov 2021 10:36:00 AM CST
 ************************************************************************/
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int num = 108;
	int& rel_num = num;
	rel_num = 118;

	cout << num << '\t' << rel_num << endl;
	cout << &num << '\t' << &rel_num <<endl;
	/*
	int num = 1;
	int* p = &num;

	cout << *p << endl;
	cout << p << endl;
	vector<int> vec={1,2,3,4,5};

	vector<int>::iterator it;
	
	for(it = vec.begin(); it != vec.end(); ++it){
		cout << *it;
	}
	cout<<endl;


	int nums[] = {8, 4, 2, 1, 23, 344, 12};
	int sum = 0;
	int cal = 0;

	for(int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++){
		sum += nums[i];
	}
	cout << "The summary of the array is " << sum << endl;
	cout << sum /(sizeof(nums) / sizeof(nums[0])) << endl;
*/
	return 0;
}
