// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // 입력을 받을 변수를 3개를 선언한다
    int n1,n2,n3;
    
    // 입력을 받는다
    scanf("%d",&n1);
    scanf("%d",&n2);
    
    if(n1!=n2){
        // 같지 않을 때에 더 큰지 작은지를 확인을 한다
        if(n1>n2){
            // 더 커야한다고 말을 해주고
            printf("UP\n");
            // 입력을 다시 받는다
            scanf("%d",&n3);
            
            // 입력을 다시 받은 후에 
            if(n1!=n3){
                // 두 수가 같지가 않으면 더 큰지 작은 말을 한다
                if(n1>n3){
                    // 더 커야하므로 UP 한다
                    printf("UP");
                } else {
                    // 더 작아야하므로 DOWN
                    printf("DOWN");
                }
                
            } else {
                // 숫자 맞기에 맞다고 출력을 한다
                printf("RIGHT");
            }
        } else {
            // 더 작마야하므로 다운을 출력한다
            printf("DOWN\n");
            // 입력을 받는다
            scanf("%d",&n3);
            // 입력을 다시 받은 후에 
            if(n1!=n3){
                // 두 수가 같지가 않으면 더 큰지 작은 말을 한다
                if(n1>n3){
                    // 더 커야하므로 UP 한다
                    printf("UP");
                } else {
                    // 더 작아야하므로 DOWN
                    printf("DOWN");
                }
            } else {
                // 숫자가 맞기에 맞다고 출력을 한다
                printf("RIGHT");
            }
        }
    }else {
        // 숫자가 같으면 맞는것이기 때문에 맞다고 출력을 한다
        printf("RIGHT");
    }
    

    return 0;
}