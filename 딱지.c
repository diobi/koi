#include <stdio.h>


int main() {
	int i,j,n,k;
	int check = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		int A[5] = { 0, };//입력하는 값 저장할 배열 선언 4입력시 A[4]++;되는 형태 hh
		int B[5] = { 0, };
		int a, b;
		scanf("%d", &a);
		for (j = 0; j < a; j++) {//앞의 숫자만큼 반복하면서 배열값 증가
			scanf("%d", &k);
			A[k]++;
		}
		scanf("%d", &b);
		for (j = 0; j < b; j++) {
			scanf("%d", &k);
			B[k]++;
		}
		for (j = 4; j > 0; j--) {//배열의4번째인덱스부터 순서대로 줄어들면서 비교
			if (A[j] == B[j])
			{
				continue;
			}
			else if (A[j] > B[j])
			{
				printf("A\n");
				check++;
				break;
			}
			else {
				printf("B\n");
				check++;
				break;
			}
		}
		if (check == 0)//체크변수를 사용하여 비기는 경우 체크
		{
			printf("D\n");
		}
		check = 0;//초기화가 없을시 D값이 안나옴.
	}
	return 0;
}
