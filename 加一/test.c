//����һ����������ɵķǿ���������ʾ�ķǸ��������ڸ����Ļ����ϼ�һ��
//���λ���ִ�����������λ�� ������ÿ��Ԫ��ֻ�洢һ�����֡�
//����Լ���������� 0 ֮�⣬��������������㿪ͷ��
//ʾ�� 1:
//���� : [1, 2, 3]
//��� : [1, 2, 4]
// ���� : ���������ʾ���� 123��
//	  ʾ�� 2 :
//  ���� : [4, 3, 2, 1]
//   ��� : [4, 3, 2, 2]
//	���� : ���������ʾ���� 4321��

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