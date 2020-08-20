#include <iostream>

int recur(int a, int b) {
	int sum = 0;
	if ((a == 0 || b == 0) || a == b)
		return 1;
	sum += recur(a - 1, b - 1) + recur(a, b - 1);
	return sum;
}
int main() {
	std::cout << recur(5,3);
	return 1;
}