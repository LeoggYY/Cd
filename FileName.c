#include <stdio.h>
#include <stdlib.h>
#include<string.h>


int main() {
	char arr[1000] = { '\0' };
	int left = 0, right = 0; 
	while (gets(arr)) {
		int length = strlen(arr);
		for (length; length >= 0; length--)
		{
			if (arr[length] == '{')left++;
			else if (arr[length] == '}')right++;
		}
		if (right > left)printf("���A�����k�A�� ��%d��", right - left);
		else if (left > right)printf("���A�����k�A�� �h%d��", left - right);
		else printf("OK");
		left = 0; right = 0;
		if (arr[1] == '\0')break;
		memset(arr, '\0', sizeof(arr));

	}
}