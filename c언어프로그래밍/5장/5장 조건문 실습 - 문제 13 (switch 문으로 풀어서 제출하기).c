#include <stdio.h>

int main() {
    // 점수를 입력 받을 변수를 선언을 한다
	int kor, eng, math,sum = 0;

    //실수형 평균, 정수형 평균을 선언한다
	double average; 
	int inta; 

    // switch문을 위한 변수를 선언한다
	int C; 

    // 입력을 받는다
	scanf("%d %d %d", &kor, &eng, &math);
	
    // 평균들을 구해준다
    sum = kor + eng + math;
	average = sum / 3.0; 
	inta = (int)average; 
	C = inta / 25;

    // 평균값을 출력을 한다
	printf("%.2f\n", average); 

	switch (C) {
		case 3: 
        // 75이상일때
			printf("A\n");
			break;
		case 2:
        // 50이상 75미만 일때
			printf("B\n");
			break;
		default: 
        // 50.0미만 일때
			printf("F\n");
			break;
	}

	return 0;
}