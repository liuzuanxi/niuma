#include <iostream>
#include <string>
using namespace std;

int add(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int muti(int a, int b) {
	return a * b;
}

int except(int a, int b) {
	return a / b;
}

void operate(int a[], char c[]) {
	int length1 = sizeof(a);
	int length2 = sizeof(c);
	int nums[length1];
	char op[length2];
	int i = 0;
	int j = 0;
	int k = 0;
	int total = 0;
	for (i = 0; i < length2; i++) {
		if (c[i] == '*') {
			nums[j++] = muti(a[i], a[i + 1]);
			i++;
		} else if (c[i] == '/') {
			nums[j++] = except(a[i], a[i - 1]);
			i++;
		} else {
			nums[j++] = a[i];
            k++;
			op[k] = c[i];
		}
	}
	for (i = 0; i < sizeof(op); i++) {
		if (op[i] == '+') {
			//total+=add(nums[i],nums[i+1]);
			nums[i + 1] = add(nums[i], nums[i + 1]);
			total = nums[i + 1];
		} else if (op[i] == '-') {
			nums[i + 1] = sub(nums[i], nums[i + 1]);
			total = nums[i + 1];
		}
	}
	printf("%d", total);
}


int main() {
	char s[4] = {'+', '*', '-'};
	int a[4] = {3, 4, 5, 6};
	operate(a, s);
	return 0;
}