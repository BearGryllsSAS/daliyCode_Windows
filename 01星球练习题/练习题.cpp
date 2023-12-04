#include <iomanip>
#include<vector>
#include<deque>
#include<string>
#include<algorithm>
#include<unordered_set>
#include<iostream>
using namespace std;

//运算符
class test01 {
public:
	//一
	void test01_1() {
		int a;
		cin >> a;

		cout << a / 100 << endl;
		cout << (a / 10) % 10 << endl;
		cout << a % 10 << endl;
	}

	//二
	void test01_2() {
		int l;
		cin >> l;

		float result = l * l - 3.14 * (l / 2.0) * (l / 2.0);

		cout << fixed << setprecision(2) << result << endl;
		//printf_s("%.2f\n", result);
	}
};

//判断
class test02 {
public:
	//一
	void test02_1() {
		float a, b, c;
		cin >> a >> b >> c;

		cout << max(a, max(b, c)) << endl;
	}

	//二
	void test02_2() {
		int n;
		cin >> n;

		int result;

		if (n <= 10) {
			result = 6 * n;
		}
		else if (n > 10 && n <= 20) {
			result = 6 * 10 + 2 * (n - 10);
		}
		else {
			result = 6 * 10 + 2 * 10 + 1 * (n - 20);
		}

		cout << result << endl;
	}

	//三
	void test02_3() {
		float walk = 0;
		float bike = 27 + 23;

		int n;
		cin >> n;

		walk = n / 1.2;
		bike += n / 3.0;

		if (walk == bike) cout << "一样快" << endl;

		cout << (walk > bike ? "骑车" : "走路") << endl;
	}

};

//简单循环
class test03 {
public:
	//一
	void test03_1() {
		int n;
		cin >> n;

		int result = 0, a;
		int temp = n;

		while (temp--) {
			cin >> a;
			result += a;
		}

		cout << fixed << setprecision(2) << (float)result / n << endl;
		// cout << fixed << setprecision(2) << result / (n * 1.0) << endl;
	}

	//二
	void test03_2() {
		int n, a;
		cin >> n >> a;

		int result = 0;
		int temp = a;

		while (n--) {
			result += a;
			a = a * 10 + temp;
		}

		cout << result << endl;
	}

	//三
	void test03_3() {
		int n;
		cin >> n;

		if (n <= 2) {
			cout << 1 << endl;
		}

		vector<int> dp(n, 0);
		dp[0] = 1;
		dp[1] = 1;

		for (int i = 2; i < n; i++) {
			dp[i] = dp[i - 1] + dp[i - 2];
		}

		cout << dp[n - 1] << endl;
	}

	//四
	void test03_4() {
		float M, N;
		cin >> M >> N;

		float sum = 0;

		for (int i = 0; i < N; i++) {
			sum += M + M / 2;
			M/= 2;
		}

		cout << fixed << setprecision(2) << M << endl << sum << endl;
	}
};

//嵌套循环
class test04 {
public:
	//一
	void test04_1() {
		for (int i = 1; i < 10; i++) {
			for (int j = 1; j <= i; j++) {
				cout << j << " * " << i << " = " << i * j << "   ";
			}
			cout << endl << endl;
		}
	}

	//二
	void test04_2() {
		int N;
		cin >> N;

		bool flag = true;

		for (int i = 2; i <= N; i++) {

			flag = true;

			for (int j = 2; j < i; j++) {

				if (i % j == 0) {

					flag = false;

					break;

				}

			}

			if (flag) {
				cout << i << endl;
			}

		}
	}

	//三
	void test04_3() {
		int n;
		cin >> n;

		int left = 1, right = 99;
		int mid = -1;

		while (left <= right) {
			mid = (left + right) >> 1;

			if (mid > n) {
				cout << mid << endl;
				right = mid - 1;
			}
			else if (mid < n) {
				cout << mid << endl;
				left = mid + 1;
			}
			else {
				cout << mid << endl;
				break;
			}
		}

		return;
	}

	//四
	void test04_4() {
		int n;
		cin >> n;

		int start = 1;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n - i - 1; j++) {
				cout << ' ';
			}

			for (int j = 0; j < start; j++) {
				cout << '*';
			}

			start += 2;

			cout << endl;
		}

		start = 2 * n - 3;

		for (int i = n - 1; i >= 0; i--) {
			for (int j = 0; j < n - i; j++) {
				cout << ' ';
			}

			for (int j = 0; j < start; j++) {
				cout << '*';
			}

			start -= 2;

			cout << endl;
		}

		return;
	}
};

//一维数组
class test05 {
public:
	//一
	void test05_1() {
		int N;
		cin >> N;

		unordered_set<int> repeat;
		vector<int> temp(N, 0);
		vector<int> result;

		for (int i = 0; i < N; i++) {
			cin >> temp[i];
		}

		for (int i = 0; i < N; i++) {
			if (repeat.find(temp[i]) != repeat.end()) {
				continue;
			}
			result.emplace_back(temp[i]);
			repeat.insert(temp[i]);
		}

		for (const int& a : result) {
			cout << a << ' ';
		}

		cout << endl;

		return;
	}

	//二
	void test05_2() {
		int n;
		cin >> n;

		vector<vector<int>> result(2, vector<int>(n, 0));

		for (int i = 0; i < n; i++) {
			cin >> result[0][i];
		}

		int m;
		cin >> m;

		int i, j;
		for (i = 0, j = m; j < n; i++, j++) {
			result[1][j] = result[0][i];
		}

		while (i < n) {
			result[1][(i + m) % n] = result[0][i];
			i++;
		}

		for (i = 0; i < n; i++) {
			cout << result[1][i] << ' ';
		}

		cout << endl;

		return;
	}

	//三
	void test05_3() {
		int n, m;
		cin >> n >> m;

		vector<int> result(n + m, 0);

		for (int i = 0; i < n; i++) {
			cin >> result[i];
		}
		for (int i = 0; i < m; i++) {
			cin >> result[i + n];
		}

		sort(result.begin(), result.end());

		for (auto& a : result) {
			cout << a << ' ';
		}

		cout << endl;

		return;
	}

	//四
	void test05_4() {
		int n, m;
		cin >> n >> m;

	}
};

//多维数组
class test06 {
public:
	//一
	void test06_1() {
		int n;
		cin >> n;

		vector<vector<int>> arr(n, vector<int>(n, 0));

		for (int j = 0; j < n; j++) {
			for (int i = 0; i < n; i++) {
				cin >> arr[i][j];
			}
		}

		cout << endl;

		for (auto& ar : arr) {
			for (auto& a : ar) {
				cout << a << ' ';
			}
			cout << endl;
		}

		return;
	}
};

//指针
class test07 {
public:
	//一
	void test07_1() {
		string s;
		getline(cin, s);

		int result = 0;
		int index = 0;

		int i = 0, j = 0;

		while (j < s.size() - 1) {
			while (j < s.size() - 1 && s[j] != ' ') {
				j++;
			}

			if (j - i > result) {
				result = j - i;
				index = i;
			}

			while (j < s.size() - 1 && s[j] == ' ') {
				j++;
			}

			i = j;
		}

		cout << index << ' ' << result << endl;
	}
};

//字符串
class test08 {
public:
	//一
	void test08_1() {
		string str;
		getline(cin, str);

		for (char& c : str) {
			if ((c >= 'a' && c <= 'z') || (c >= 'A' && c < 'Z')) {
				c ^= 32;
			}
		}

		cout << str << endl;

		return;
	}

	//二
	void test08_2() {
		string input[3];

		for (int i = 0; i < 3; ++i) {
			getline(cin, input[i]);
		}

		int pos = -1;

		while ((pos = input[0].find(input[1])) != -1) {
			input[0].replace(pos, input[1].size(), input[2]);
		}

		cout << input[0] << endl;

		return;
	}

	//三
	void test08_3() {
		string str;
		getline(cin, str);

		if ((str.size() >= 8 && str.size() <= 16) && (str.front() >= 'A' && str.front() <= 'Z')) {
			unordered_set<char> mySet = { '~','!','@','#','$','%','*' };

			int ziMu = 0, shuZi = 0, fuHao = 0;

			for (int i = 1; i < str.size(); i++) {
				char c = str.at(i);

				if (c >= 'a' && c <= 'z') {
					ziMu++;
				}
				if (c - 'a' >= 0 && c - 'a' <= 9) {
					shuZi++;
				}
				if (mySet.count(c)) {
					fuHao++;
				}
			}

			if (ziMu && shuZi && fuHao) {
				cout << "true" << endl;
			}
			else {
				cout << "false" << endl;
			}

			return;
		}

		cout << "false" << endl;

		return;
	}

	//四
	void test08_4() {
		string str;
		getline(cin, str);

		int temp = -1;

		for (char& c : str) {
			if (c >= '0' && c <= '9') {
				temp = c - '0';
				temp = (temp + 5) % 10;

				c = temp + '0';
			}
			else if (c >= 'a' && c <= 'z') {
				temp = c - 'a';
				temp = (temp + 5) % 26;

				c = temp + 'a';
			}
			else if (c >= 'A' && c <= 'Z') {
				temp = c - 'A';
				temp = (temp + 5) % 26;

				c = temp + 'A';
			}
		}

		cout << str << endl;

		return;
	}
};


int main() {
	// test01 t;
	// t.test01_1();
	// t.test01_2();
	   
	// test02 t;
	// t.test02_1();
	// t.test02_2();
	// t.test02_3();
	   
	// test03 t;
	// t.test03_1();
	// t.test03_2();
	// t.test03_3();
	// t.test03_4();
	   
	// test04 t;
	// t.test04_1();
	// t.test04_2();
	// t.test04_3();
	// t.test04_4();
	   
	// test05 t;
	// t.test05_1();
	// t.test05_2();
	// t.test05_2();
	// t.test05_3();
	// t.test05_4();
	   
	// test06 t;
	// t.test06_1();
	   
	// test07 t;
	// t.test07_1();
	   
	// test08 t;
	// t.test08_1();
	// t.test08_2();
	// t.test08_3();
	// t.test08_4();

	system("pause");

	return 0;
}