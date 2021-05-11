#include<stdio.h>

void main() {
	char str[] = "Hello world";

	char reChar[10] = { NULL };

	//포인터 변수를 이용하여 reChar배열에 "o wo"를 저장하세요
	char* ptr = reChar;

	for (int i = 0; i < 4; i++) {
		ptr[i] = str[4 + i];
	}
	/*
	int j = 0;
	for (int i = 0; i < 12; i++)
		{
			if (str[i] == 'w' or str[i] == 'o')
			{
				ptr[j] = str[i];
				j++;
			}
		}
	*/

	printf("%s", ptr);

	fgetc(stdin);
}