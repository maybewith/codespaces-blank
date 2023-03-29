// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // 입력을 받을 변수를 선언을 한다
    char a;
    
    // 문자를 입력을 받는다
    scanf("%c",&a);
    
    // 다음과 같이 한다
    if(('A'<=a)&&(a<='Z')){
        // 대문자는 소문자로 
        printf("%c",a-'A'+'a');
    } else if(('a'<=a)&&(a<='z')){
        // 소문자는 대문자로
        printf("%c",a-'a'+'A');
    } else {
        // 문자가 아니면 이거 출력
        printf("none");
    }
    // 코드가 성공적이게 끝났다는 것
    return 0;
}