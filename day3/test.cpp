#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
	int Fibonacci(int n) {
		if (n == 0)
			return 0;
		int first = 1;
		int second = 1;
		int third = 1;
		while (n > 2) {
			third = first + second;
			first = second;
			second = third;
			n--;
		}
		return third;
	}
};

class Solution {
public:
	int Fibonacci(int n) {
		if (n == 0)
			return 0;
		if (n <= 2)
			return 1;
		return Fibonacci(n - 2) + Fibonacci(n - 1);
	}
};

class Solution {
private:
	unordered_map<int, int> map;
public:
	int Fibonacci(int n) {
		if (n == 0 || n == 1)
			return n;
		int ppre = 0;
		if (map.find(n - 2) == map.end()) {
			ppre = Fibonacci(n - 2);
			map.insert(make_pair(n - 2, ppre));
		}
		else {
			ppre = map[n - 2];
		}
		int pre = 0;
		if (map.find(n - 1) == map.end()) {
			pre = Fibonacci(n - 1);
			map.insert(make_pair(n - 1, pre));
		}
		else {
			pre = map[n - 1];
		}
		return ppre + pre;
	}
};

class Solution {
public:
	int jumpFloor(int number) {
		int* dp = new int[number + 1];
		dp[0] = 1;
		dp[1] = 1;
		for (int i = 2; i <= number; i++) {
			dp[i] = dp[i - 1] + dp[i - 2];
		}
		int ret = dp[number];
		delete dp;
		return ret;
	}
};

class Solution {
public:
	int jumpFloor(int number) {
		int first = 1;
		int second = 2;
		int third = number;
		while (number > 2) {
			third = first + second;
			first = second;
			second = third;
			number--;
		}
		return third;
	}
};

class Solution {
public:
	int rectCover(int number) {
		int* dp = new int[number + 1];
		dp[1] = 1;
		dp[2] = 2;
		for (int i = 3; i <= number; i++) {
			dp[i] = dp[i - 1] + dp[i - 2];
		}
		int ret = dp[number];
		delete dp;
		return ret;
	}
};

class Solution {
public:
	int  NumberOf1(int n) {
		int count = 0;
		while (n) {
			n &= (n - 1);
			count++;
		}
		return count;
	}
};