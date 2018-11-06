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

//int* plusOne(int* digits, int digitsSize, int* returnSize) {
//	int i = digitsSize - 1;
//	for (; i >= 0; i--)
//	{
//		if (i>=0&&digits[i] < 9)
//		{
//			digits[i]++;
//			break;
//		}
//		else
//		{
//			digits[i] = 0;
//			continue;
//		}
//	}
//	for (int j = 0; j < digitsSize; j++)
//	{
//		returnSize[j] = digits[j];
//	}
//	return returnSize;
//}

int* plusOne(int* digits, int digitsSize, int* returnSize) {
	int i = 0;
	digits[digitsSize-1]++;
	int *newreturn = malloc(sizeof(int)*(digitsSize + 1));
	(*returnSize) = digitsSize;
	for (i = digitsSize - 1; i > 0; i--)
	{
		if (digits[i] >= 10)
		{
			digits[i] = digits[i] % 10;
			digits[i - 1] ++;
		}
	}
	if (digits[0] >= 10)
	{
		newreturn[0] = 1;
		digits[0] = digits[0] % 10;
		(*returnSize) = digitsSize + 1;
		for (i = 0; i < digitsSize; i++)
		{
			newreturn[i + 1] = digits[i];
		}
	}
	else
	{
		for (i = 0; i < digitsSize; i++)
		{
			newreturn[i] = digits[i];
		}
	}
	return newreturn;
}

int main(){
	int difits[] = { 9,9,9 };
	int digitsSize = sizeof(difits) / sizeof(difits[0]);
	int input = 0;
	int *returnSize = &input;
	int *ret = plusOne(difits, digitsSize, returnSize);
	for (int i = 0; i < (*returnSize); i++)
	{
		printf("%d ", ret[i]);
	}
	free(ret);
	system("pause");
	return 0;
}