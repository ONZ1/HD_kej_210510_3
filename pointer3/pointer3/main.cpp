#include<stdio.h>

void main() {
	char str[] = "Hello world";

	char reChar[10] = { NULL };

	//������ ������ �̿��Ͽ� reChar�迭�� "o wo"�� �����ϼ���
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