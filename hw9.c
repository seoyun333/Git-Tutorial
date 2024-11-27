/*#include<stdio.h>
int change(int ch) {
	const int diff = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z') {
		return ch + diff;
	}
	else if (ch >= 'a' && ch <= 'z') {
		return ch - diff;
	}
	else {
		return -1;
	}
}
int main(void) {
	int ch;
	printf("���ڿ� �Է�: ");
	ch = getchar();
	ch = change(ch);
	if (ch == -1) {
		puts("������ ��� �Է��Դϴ�.");
		return -1;
	}
	putchar(ch);
	return 0;
	
}*/

#include <stdio.h>

void change(const char* input, char* output) {
    const int diff = 'a' - 'A';
    int i = 0;

    while (input[i] != '\0') {
        if (input[i] >= 'A' && input[i] <= 'Z') {
            output[i] = input[i] + diff;
        }
        else if (input[i] >= 'a' && input[i] <= 'z') {
            output[i] = input[i] - diff;
        }
        else {
            output[i] = input[i];
        }
        i++;
    }
    output[i] = '\0';
}

int main(void) {
    char input[200];
    char output[200];

    printf("���ڿ� �Է�: ");
    fgets(input, sizeof(input), stdin);

    change(input, output);

    printf("output: %s", output);

    return 0;
}
