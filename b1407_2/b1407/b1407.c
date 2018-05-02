#include<stdio.h>
void func(int a);
int cnt = 0;
void main() {
	int a = 0, c = 0,TWO=2;
	//입력받기
	scanf_s("%d",&a);
	func(a);
	//2의 배수가 없어 1이 반환 된 경우.
	if (cnt == 1)
		TWO = 1;
	//cnt수만큼 제곱수 취하기.
	for (c = 1;c < cnt;c++)
		TWO = TWO * 2;

	printf("%d", TWO);

	//값 원상 복귀
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
