#include<stdio.h>
void func(int a);
int cnt = 0;
void main() {
	int a = 0, c = 0, TWO = 2, dx = 0, sum = 0;
	int A=0, B=0;
	//입력받기
	//scanf_s("%d",&a);
	//func(a);
	scanf_s("%d %d", &A, &B);

	for (dx = A;dx <=B;dx++) {
		func(dx);
		if (cnt >1) {
			TWO = TWO << cnt-1;
		}
		else if (cnt == 0)
		{
			TWO = 1;
		}
		else 
		{
			TWO = 2;
		}
		
		sum += TWO;
		cnt = 0;
		TWO = 2;

	}
	//2의 배수가 없어 1이 반환 된 경우.

	//cnt수만큼 제곱수 취하기.


	printf("%d", sum);

	//값 원상 복귀
	
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
			cnt = 0;
	}
}
//#include<stdio.h>
//void func(int a);
//int cnt=0;
//void main() {
//	int a = 0, i = 0, j = 0, c = 0, sum = 0, two = 2;
//	int A = 0, B = 0, count = 0;
//	//scanf_s("%d",&a);
//	//func(a);
//	//printf("%d",cnt);
//	scanf_s("%d %d", &A, &B);
//	for (i = A;i < B;i++) {
//		func(i);
//		if (cnt == 1)
//			two = 1;
//		
//		j = cnt;
//		
//		cnt = 0;
//		for (c = 1;c < j;c++)
//			two = two * 2;
//
//		sum += two;
//		two = 2;
//	}
//	printf("%d", sum);
//
//	scanf_s("%d", &a);
//}
//void func(int a) {
//	if (a % 2 == 0) {
//		cnt++;
//		func(a / 2);
//	}
//	else
//	{
//		if (cnt == 0)
//			cnt = 1;
//	}
//}
