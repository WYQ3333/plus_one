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