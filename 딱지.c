#include <stdio.h>


int main() {
	int i,j,n,k;
	int check = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		int A[5] = { 0, };//�Է��ϴ� �� ������ �迭 ���� 4�Է½� A[4]++;�Ǵ� ����
		int B[5] = { 0, };
		int a, b;
		scanf("%d", &a);
		for (j = 0; j < a; j++) {//���� ���ڸ�ŭ �ݺ��ϸ鼭 �迭�� ����
			scanf("%d", &k);
			A[k]++;
		}
		scanf("%d", &b);
		for (j = 0; j < b; j++) {
			scanf("%d", &k);
			B[k]++;
		}
		for (j = 4; j > 0; j--) {//�迭��4��°�ε������� ������� �پ��鼭 ��
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
		if (check == 0)//üũ������ ����Ͽ� ���� ��� üũ
		{
			printf("D\n");
		}
		check = 0;//�ʱ�ȭ�� ������ D���� �ȳ���.
	}
	return 0;
}