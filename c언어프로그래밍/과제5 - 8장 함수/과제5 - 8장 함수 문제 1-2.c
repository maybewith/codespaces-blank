// Online C compiler to run C program online
#include <stdio.h>
// 함수 미리 선언
char decrypt(char ch,int M);
char encrypt(char ch,int M);

int main() {
    // 입력을 받을 배열을 선언을 한다
    char a[100];
    
    // 인덱스를 기억할 변수를 선언한다
    int j=0;
    
    // 반복문으로 입력을 받는다
    while(1){
        // 입력을 받을 변수를 선언한다
        char n;
        
        // 입력을 받는다
        scanf("%c",&n);
        
        // 만약 종료조건이면
        if(n=='*')
            break;
            
        // 입력을 저장한다
        a[j]=n;
        
        // 인덱스를 늘린다
        j++;
    }
        
    // 암호의 정도를 의미하는 정수를 선언한다
    int M1,M2;
    
    // 입력을 받는다
    scanf("%d %d",&M1,&M2);
    
    // 반복문을 통해서 0에서 9까지 함수에 돌려준다
    // 그리고 그것을 출력을 해준다
    for(int i=0;i<j;i++){
        // 함수를 통해서 변환을 하고 
        a[i]=decrypt(a[i],M1);
        
        // 결과를 출력해준다
        printf("%c",a[i]);
    }
    printf("\n");
    // 함수를 통해서 암호화시킨 것도 
    // 출력을 해준다
    for(int i=0;i<j;i++){
        // 함수를 통해서 변환을 하고 
        a[i]=encrypt(a[i],M2);
        
        // 결과를 출력해준다
        printf("%c",a[i]);
    }
        

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

// 암호화를 해주는 함수를 만든다
char encrypt(char ch,int M){
    // 조건문으로 ch를 나눠준다
    if(('A'<=ch)&&(ch<='Z')){
        // 대문자이면
        int tmp; // 임시 저장 변수
        tmp=ch+M%('Z'-'A'+1);
        if('A'>tmp){
            // 만약 범위를 넘었다면
            tmp=tmp+'Z'-'A'+1;
            ch=tmp;
        } else if(tmp>'Z'){
            // 만약 범위를 넘었다면
            tmp=tmp+'A'-'Z'-1;
            ch=tmp;
        } else {
            // 범위 내에 속하므로 
            ch=tmp;
        }
    } else if(('a'<=ch)&&(ch<='z')){
        // 소문자이면
        int tmp; // 임시 저장 변수
        tmp=ch+M%('Z'-'A'+1);
        if('a'>tmp){
            // 만약 범위를 넘었다면
            tmp=tmp+'z'-'a'+1;
            ch=tmp;
        } else if(tmp>'z'){
            // 만약 범위를 넘었다면
            tmp=tmp+'a'-'z'-1;
            ch=tmp;
        } else {
            // 범위 내에 속하므로 
            ch=tmp;
        }
    } else {
        // 대문자 혹은 소문자가 아니라면
        return ch;
    }
    
    // 결과값을 다시 돌려준다
    return ch;
}
