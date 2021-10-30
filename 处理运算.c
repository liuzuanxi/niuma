void operate(int a[], char c[]) {
	int length1 = sizeof(a);
	int length2 = sizeof(c);
	int nums[length1];
	char *op;
	int i = 0;
	int j = 0;
	int k = 0;
	int total = 0;
	for (i = 0; i < lenght2; i++) {
		if (c[i] == '*') {
			nums[j++] = muti(a[i], a[i + 1]);
			i++;
		} else if (c[i] == '/') {
			nums[j++] = except(a[i], a[i - 1]);
			i++;
		} else {
			nums[j++] = a[i];
			op[k++] = c[i];
		}
	}
	for (i = 0; i < sizeof(op); i++) {
		if (op[i] == '+') {
			//total+=add(nums[i],nums[i+1]);
			nums[i + 1] = add(nums[i], nums[i + 1]);
			total = nums[i + 1];
		} else if (op == '-') {
			nums[i + 1] = sub(nums[i], nums[i + 1]);
			total = nums[i + 1];
		}
	}
	printf("%d", total);
}
