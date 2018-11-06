//给定一个由整数组成的非空数组所表示的非负整数，在该数的基础上加一。
//最高位数字存放在数组的首位， 数组中每个元素只存储一个数字。
//你可以假设除了整数 0 之外，这个整数不会以零开头。
//示例 1:
//输入 : [1, 2, 3]
//输出 : [1, 2, 4]
// 解释 : 输入数组表示数字 123。
//	  示例 2 :
//  输入 : [4, 3, 2, 1]
//   输出 : [4, 3, 2, 2]
//	解释 : 输入数组表示数字 4321。

#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {
	int i = digitsSize - 1;
	for (; i >= 0; i--)
	{
		if (i>=0&&digits[i] < 9)
		{
			digits[i]++;
			break;
		}
		else
		{
			digits[i] = 0;
			continue;
		}
	}
	for (int j = 0; j < digitsSize; j++)
	{
		returnSize[j] = digits[j];
	}
	return returnSize;
}

int main(){
	int difits[] = { 4, 3, 2, 9 };
	int digitsSize = sizeof(difits) / sizeof(difits[0]);
	int *returnSize = malloc(sizeof(int)*digitsSize);;
	int *ret = plusOne(difits, digitsSize, returnSize);
	for (int i = 0; i < digitsSize; i++)
	{
		printf("%d ", ret[i]);
	}
	free(returnSize);
	system("pause");
	return 0;
}