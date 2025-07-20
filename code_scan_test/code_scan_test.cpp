// code_scan_test.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>


//int* calc(char buf[])
//{
//	//めちゃくちゃ
//	int size = sizeof(buf);
//	return &size;
//}

int main()
{
	char buf[] = "Hello World!";

	for (int i = 0; i < 14; ++i)
	{
		printf("%c", buf[i]);
	}
	printf("\n");

	//printf("size: %d\n", *calc(buf));

	return 0;
}

