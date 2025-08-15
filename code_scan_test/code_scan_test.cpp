// code_scan_test.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>


//int* calc(char buf[])
//{
//	//めちゃくちゃ
//	int size = sizeof(buf);
//	return &size;
//}

void copy(wchar_t* buf, const size_t bufSize, const char* str)
{
	mbstowcs_s(nullptr, buf, 64, str, strlen(str));
}

int main()
{
	//char buf[] = "Hello World!";

	//for (int i = 0; i < 14; ++i)
	//{
	//	printf("%c", buf[i]);
	//}
	//printf("\n");

	//printf("size: %d\n", *calc(buf));

	wchar_t wbuf[5];
	copy(wbuf, 5, "abc");

	wprintf(L"wbuf: %s", wbuf);

	return 0;
}

