// code_scan_test.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>

int* calc(char buf[])
{
	//めちゃくちゃ
	int size = sizeof(buf);
	return &size;
}

int main()
{
	char buf[] = "Hello World!"; // 文字列を格納するバッファ
	for (int i = 0; i < sizeof(buf) + 2; ++i)
	{
		printf("%c", buf[i]); // バッファの内容を1文字ずつ出力
	}
	printf("\n");
	printf("size: %d\n", *calc(buf));
    return 0;
}

