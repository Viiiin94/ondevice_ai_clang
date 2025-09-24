/**
 * @brief
 * - 프로그래밍에서 함수란 하나의 특별한 목적을 수행하기 위해서
 *   독립적으로 설계된 프로그램 코드의 집합.
 * - C 언어에서는 표준함수와 사용자정의함수로 구분할 수 있다.
 * - 함수의 이름을 지을때는 기본적으로 함수가 갖고 있는 기능을 이름으로 표현합니다.
 * @copyright Copyright (c) 2025
 *
 */

#include <stdio.h>

// int print_hello(void); // 내가 만든 함수의 이름만 가져오는 것
// void print_hello1();   // 이 것을 함수의 원형 선언 이라고 한다.

// int main()
// {
//     printf("사용자 정의 함수를 불러 봅시다.\n");
//     print_hello();

//     printf("사용자 정의 함수를 또 불러 봅시다.\n");
//     print_hello1();
// }

// int print_hello(void) // 함수명 앞에 데이터형이 있으면 반환값이 있어야함.
// {
//     printf("사용자 정의 함수\n");
//     return 0;
// }

// void print_hello1() // 함수명 앞에 void가 있으면 반환값이 없음.
// {
//     printf("사용자 정의 함수1\n");
// }

// int add(int x, int y) // x, y는 파라미터(매개변수)
// {
//     return x + y;
// }

// int main()
// {
//     int a, b, sum = 0;
//     printf("2개의 정수 입력: \n");
//     scanf("%d %d", &a, &b);

//     sum = add(a, b);
//     printf("a + b = %d \n", sum);
// }

// #define add(x, y) (x + y)

// /**
//  * @brief 매크로 상수를 이용한 함수 선언
//  *
//  * @return int
//  */
// int main()
// {
//     int sum;
//     sum = add(5, 8);
//     printf("5 + 8 = %d\n", sum);
// }

/**
 * @brief 변수의 유효범위!!
 * 지역변수, 전역변수, 정적변수, 레지스터변수(C언어 X)
 */

/**
 * @brief 지역변수(local variable)
 * - 지역변수란 "블록" 내에서 선언된 변수를 의미
 * - 변수가 선언된 "블록" 내에서만 유효
 * - "블록"이 종료되면 메모리에서 삭제됨
 * - 메모리 상에서 슽택영역에 저장됨
 * - 초기화 하지 않으면 가비지 값임
 * - 함수의 매개변수도 함수내에서 정의된 지역변수로 취급함
 *
 * @return int
 */

// void local()
// {
//     int var = 20;
//     printf("local 함수내의 지역변수 var의 값은: %d\n", var); // 20
// }

// int main()
// {
//     int i = 5;
//     int var = 10;

//     printf("main 함수내의 지역변수 var의 값은 : %d\n", var); // 10

//     if (i < 10)
//     {
//         local();
//         int var = 30;
//         printf("if문 내의 지역변수 var의 값은: %d\n", var); // 30
//     }

//     printf("현재 지역변수 var의 값은: %d\n", var); // 10
// }

/**
 * @brief 전역변수(global variable)
 * - 전역변수란 (메인)함수의 외부에서 선언된 변수를 의미함
 * - 전역변수는 프로그램의 어디에서나 접근이 가능
 * - 프로그램이 종료되어야 메모리에서 삭제
 * - 메모리의 데이터(data)영역에 저장
 * - 컴파일시 메모리 공간을 확보
 * - 초기화 하지 않아도 0으로 자동 초기화 됨
 */

// void local();

// int var; // 전역변수 할당

// int main()
// {
//     printf("전역변수 var의 초기값은 : %d\n", var); // 전역변수
//     int i = 5;
//     int var = 10; // 지역변수 / 여기서 부터 전역변수 접근 불가능 다만, 재선언이 아닌 할당 var = 10으로 하면 전역변수 접근 가능

//     printf("main 함수내의 지역변수 var의 값은 : %d\n", var); // 지역변수

//     if (i < 10)
//     {
//         local();
//         printf("if문 내의 전역변수 var의 값은: %d\n", var); // main 함수의 지역변수
//         int var = 30;
//         printf("if문 내의 지역변수 var의 값은: %d\n", var); // if문 내의 지역변수
//     }

//     printf("더 이상 main 함수내의 전역변수 var에 접근이 불가 : %d\n", var); // main 함수의 지역변수
// }

// void local()
// {
//     var = 20;                                                // 전역변수를 20으로 할당
//     printf("local 함수내의 지역변수 var의 값은: %d\n", var); // 전역변수
// }

/**
 * @brief 정적변수 (static variable)
 * - static 키워드로 선언된 변수
 * - 정적변수는 지역변수와 전역변수의 특징을 모두 가진다.
 * - 함수 내에서 선언된 정적변수는 단 한번만 전역변수처럼 초기화 됨
 * - 프로그램이 종료되어야 메모리에서 삭제
 * - 정적변수는 지역변수처럼 해당 함수내에서만 접근가능
 */

void local();
void staticVar();

int main()
{
    for (int i = 0; i < 3; i++)
    {
        local();
        staticVar();
    }
}

void local()
{
    int count = 1;
    printf("local() 함수가 %d 번째 호출되었음. \n", count);
    count++;
}

void staticVar()
{
    static int static_count = 1; // 정적변수를 초기화
    printf("staticVar() 함수가 %d 번째 호출되었음. \n", static_count);
    static_count++;
}