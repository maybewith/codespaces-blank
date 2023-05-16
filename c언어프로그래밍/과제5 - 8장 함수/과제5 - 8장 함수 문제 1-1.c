// Online C compiler to run C program online
#include <stdio.h>
// 함수 미리 선언
char decrypt(char ch,int M);
int main() {
    // 입력을 받을 배열을 선언을 한다
    char a[10];
    
    // 반복문으로 입력을 받는다
    for(int i=0; i<10;i++)
        scanf("%c",&a[i]);
        
    // 암호의 정도를 의미하는 정수를 선언한다
    int M;
    
    // 입력을 받는다
    scanf("%d",&M);
    
    // 반복문을 통해서 0에서 9까지 함수에 돌려준다
    // 그리고 그것을 출력을 해준다
    for(int i=0;i<10;i++)
        printf("%c",decrypt(a[i],M));

    return 0;
}

// 암호화를 풀어주는 함수를 만든다
char decrypt(char ch,int M){
    // 조건문으로 ch를 나눠준다
    if(('A'<=ch)&&(ch<='Z')){
        // 대문자이면
        ch=ch-M%('Z'-'A'+1);
        if('A'>ch){
            // 만약 범위를 넘었다면
            ch=ch+'Z'-'A'+1;
        } else if(ch>'Z'){
            // 만약 범위를 넘었다면
            ch=ch+'A'-'Z'-1;
        } else {
            // 범위 내에 속하므로 
            ch=ch;
        }
    } else if(('a'<=ch)&&(ch<='z')){
        // 소문자이면
        ch=ch-M%('Z'-'A'+1);
        if('a'>ch){
            // 만약 범위를 넘었다면
            ch=ch+'z'-'a'+1;
        } else if(ch>'z'){
            // 만약 범위를 넘었다면
            ch=ch+'a'-'z'-1;
        } else {
            // 범위 내에 속하므로 
            ch=ch;
        }
    } else {
        // 대문자 혹은 소문자가 아니라면
        return ch;
    }
    
    // 결과값을 다시 돌려준다
    return ch;
}
