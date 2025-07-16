// code_scan_test.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>

int getlength(char buf[])
{
	//めちゃくちゃ
	int size = sizeof(buf);
	return size;
}

int main()
{
	char buf[] = "Hello World!"; // 文字列を格納するバッファ

	printf("size: %d, %s\n", getlength(buf));

	return 0;
}

