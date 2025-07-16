// code_scan_test.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>

int&& add(const int a, const int b)
{
	int result = a + b;
	return std::move(result);
}

int main()
{
	printf("%d\b", add(1, 2));

	return 0;
}

