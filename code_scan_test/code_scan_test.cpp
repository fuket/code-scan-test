// code_scan_test.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>

int main()
{
	char buf[] = "Hello World!"; // 文字列を格納するバッファ
	for (int i = 0; i < sizeof(buf) + 1; ++i)
	{
		printf("%c", buf[i]); // バッファの内容を1文字ずつ出力
	}
	printf("\n");
    return 0;
}

