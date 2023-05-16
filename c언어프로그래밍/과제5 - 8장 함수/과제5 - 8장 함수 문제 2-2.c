// Online C compiler to run C program online
#include <stdio.h>

// 입력을 저장할 변수를 선언한다
int a[100];

// max_num 함수를 만들어 최대의 숫자를 찾는다
int max_num(int N1,int N2){
    // 최대인 변수를 설정해준다
    int max=0;
    
    // 기존의 최대는 max이므로 이보다 크면
    // max를 그것으로 설정해준다
    for(int i=N1;i<=N2;i++){
        if(a[i]>max)
            max=a[i];
    }
    return max;
}

// min_num 함수를 만들어 최대의 숫자를 찾는다
int min_num(int N1,int N2){
    // 최소인 변수를 설정해준다
    int min=1000;
    
    // 기존의 최소는 min이므로 이보다 작으면
    // min을 그것으로 설정해준다
    for(int i=N1;i<=N2;i++){
        if(a[i]<min)
            min=a[i];
    }
    return min;
}
    
int main() {
    // 인덱스를 표시하기 위한 변수를 만든다
    int i=0;
    
    // 반복문으로 돌린다
    while(1){
        // 입력을 받을 변수를 선언하고,
        int n;
        
        // 입력을 받는다
        scanf("%d",&n);
        
        // 만약 종료조건에 속한다면 종료시켜버린다
        if(n==0){
            break;
        }
        
        // 배열에다가 값을 저장시킨다
        a[i]=n;
        
        // 인덱스를 늘려준다
        i++;
    }
    
    // 입력을 받을 변수를 선언하고
    int t=0;
    
    // 입력을 받는다
    scanf("%d",&t);
    
    while(t--){
        // 입력을 받을 변수를 선언한다
        int S,E;
        
        // 입력을 받는다
        scanf("%d %d",&S,&E);
        
        // 반복문을 통해서 위치들을 바꿔준다
        for(int j=0;S+j<E-j;j++){
            // 임시적으로 값을 기억해줄 변수
            int tmp=a[S+j];
            
            // 값들을 바꿔주자
            a[S+j]=a[E-j];
            a[E-j]=tmp;
        }
        
        // 결과값을 반복문으로 출력을 해준다
        for(int j=0;j<i;j++)
            printf("%d ",a[j]);
        printf("\n");
        
        // 함수를 통해서 최대를 구하고 출력하고
        printf("%d ",max_num(S,E));
        
        // 함수를 통해서 최소를 구하고 출력을 한다
        printf("%d ",min_num(S,E));
    }
    
    return 0;
}