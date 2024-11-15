#include <stdio.h>
#include <math.h>

double SD(int* ptr) {
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += ptr[i];
	}
	double M = (double)sum / 5;

	double �������� = 0, ������������ = 0;
	for (int i = 0; i < 5; i++) {
		�������� = pow(ptr[i] - M, 2);
		������������ += ��������;
	}
	double ǥ������ = sqrt(������������ / 5);
	return ǥ������;
}

int main(void) {
	int arr[5];
	printf("Enter 5 real numbers: ");
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &arr[i]);
	}
	double result = SD(arr);
	printf("Standard Deviation = %.3f\n", result);
	return 0;
}
