#include<stdio.h>
void func(int a);
int cnt = 0;
void main() {
	int a = 0, c = 0,TWO=2;
	//�Է¹ޱ�
	scanf_s("%d",&a);
	func(a);
	//2�� ����� ���� 1�� ��ȯ �� ���.
	if (cnt == 1)
		TWO = 1;
	//cnt����ŭ ������ ���ϱ�.
	for (c = 1;c < cnt;c++)
		TWO = TWO * 2;

	printf("%d", TWO);

	//�� ���� ����
	TWO = 2;
	scanf_s("%d", &a);
}
void func(int a) {
	if (a % 2 == 0) {
		cnt++;
		func(a / 2);
	}
	else
	{
		if (cnt == 0)
			cnt = 1;
	}
}
