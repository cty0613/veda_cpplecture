#include <stdio.h>


int main() {
    char* mystr = "Hello World";
    char mystr2[] = "Bye World";

    puts(mystr);
    puts(mystr2);

    mystr = mystr2; // 둘다 주소임 (mystr : 리터럴의 주소), (mystr2: 배열의 주소)
   // mystr2 = mystr; // Error 식에 수정할 수 있는 lvalue가 필요합니다. 배열명은 상수
    return 0;
}