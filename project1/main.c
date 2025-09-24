#include <stdio.h>

// /**
//  * @brief 산술 연산자 연습
//  * @version 1.0
//  * (+, -, *, /, %)
//  * @return int
//  */
// int main()
// {
//     // 정수 타입 a, b 선언과 동시에 초기값 입력
//     int a = 30;
//     int b = 17;
//     int result; // 정수 타입 result 변수를 선언 초기값은 없음 !!

//     result = a + b; // a, b를 더해서 result로 대입
//     printf(" a + b = %d 입니다...\n", result);

//     result = a - b; // a, b를 빼서 result로 대입
//     printf(" a - b = %d 입니다...\n", result);

//     result = a * b; // a, b를 곱해서 result로 대입
//     printf(" a * b = %d 입니다...\n", result);

//     result = a / b; // a, b를 나눠서 result로 대입
//     printf(" a / b = %d 입니다...\n", result);

//     result = a % b; // a, b의 나머지 result로 대입
//     printf(" a %% b = %d 입니다...\n", result);
// }

// /**
//  * @brief 대입 연산자 연습
//  *
//  * @return int
//  */
// int main()
// {
//     int a = 34;
//     int c;

//     c = a;
//     printf("c = a 는 %d 입니다...\n", c);

//     c += a; // 복합 연산자 뜻은 c = c + a
//     printf("c += a 는 %d 입니다...\n", c);

//     c -= a; // c = c - a
//     printf("c -= a 는 %d 입니다...\n", c);

//     c *= a; // c = c * a
//     printf("c *= a 는 %d 입니다...\n", c);

//     c /= a; // c = c / a
//     printf("c /= a 는 %d 입니다...\n", c);

//     c %= a; // c = c % a
//     printf("c %%= a 는 %d 입니다...\n", c);
// }

// /**
//  * @brief 관계 연산자 연습
//  * (<, >, <=, >=, ==, !=)
//  *
//  * @return int
//  */
// int main()
// {
//     int a = 0, b = 0;

//     printf("두 개의 정수를 입력하세요 \n");

//     scanf("%d %d", &a, &b);

//     // true 1, false 0
//     printf("%d > %d : %d\n", a, b, a > b); // 마지막 항인 a > b가 참이면 1, 거짓이면 0
//     printf("%d < %d : %d\n", a, b, a < b);
//     printf("%d >= %d : %d\n", a, b, a >= b);
//     printf("%d <= %d : %d\n", a, b, a <= b);
//     printf("%d == %d : %d\n", a, b, a == b);
//     printf("%d != %d : %d\n", a, b, a != b);
// }

// /**
//  * @brief 관계 연산자 연습
//  * (&&, ||, !)
//  *
//  * @return int
//  */
// int main()
// {
//     int month;

//     printf("몇 월? \n");
//     scanf("%d", &month);

//     if (month >= 6 && month <= 8) // AND : &&
//     {
//         printf("성수기 요금 적용 \n");
//     }

//     if (month < 6 || month > 8) // OR : ||
//     {
//         printf("일반 요금 적용 \n");
//     }
// }

// /**
//  * @brief 삼항 연산자 연습
//  * (관계 연산자 ? True : False) 관계 연산자가 True면 True반환 아니면 False 반환
//  *
//  * @return int
//  */
// int main()
// {
//     int a = 1, b = 0;
//     int t, f;

//     // expression 1 ? epression 2 : operation 3
//     // 1이 True이면 2가 수행 아니면 3이 수행
//     t = a || b ? 1 : 2;
//     f = a && b ? 1 : 2;
//     printf("True : %d \n", t);
//     printf("False : %d \n", f);
// }

// /**
//  * @brief 비트 연산자, 쉬프트 연산자 연습
//  * 비트값이 적용됨
//  * (&, |, ^, ~, <<, >>)
//  *
//  * @return int
//  */
// int main()
// {
//     비트 연산
//     int n1 = 15;              // 00000000 00000000 00000000 00001111
//     int n2 = 20;              // 00000000 00000000 00000000 00010100
//     int and_result = n1 & n2; // 00000000 00000000 00000000 00000100
//     int or_result = n1 | n2;  // 00000000 00000000 00000000 00011111
//     int ex_result = n1 ^ n2;  // 00000000 00000000 00000000 00011011
//     int not_result = ~n1;     // 11111111 11111111 11111111 11110000

//     printf("%d \n", and_result); // 4
//     printf("%d \n", or_result);  // 31
//     printf("%d \n", ex_result);  // 27
//     printf("%d \n", not_result); // -16

//     // 쉬프트 연산
//     int n1 = 1;       // 00000000 00000000 00000000 00000001
//     int s1 = n1 << 1; // 00000000 00000000 00000000 00000010
//     int s2 = n1 << 2; // 00000000 00000000 00000000 00000100
//     int s3 = n1 << 3; // 00000000 00000000 00000000 00001000
//     int s4 = n1 << 4; // 00000000 00000000 00000000 00010000

//     printf("1을 왼쪽으로 한 번 쉬프트 %d\n", s1); // 2
//     printf("1을 왼쪽으로 두 번 쉬프트 %d\n", s2); // 4
//     printf("1을 왼쪽으로 세 번 쉬프트 %d\n", s3); // 8
//     printf("1을 왼쪽으로 네 번 쉬프트 %d\n", s4); // 16

//     unsigned char a;
//     a = 255;
//     printf("%d \n", a);

//     a = -1;
//     printf("%d \n", a); // overflow가 일어나서 -128이 나옴 127 + 1을 해도 동일하게 -128이 나옴
// }

// /**
//  * @brief 비트 마스크
//  * - 비트 논리 연산에 사용되어 특정 비트값을 조작하기 위한 목적
//  * - AND, OR 연산을 이용해서 특정비트의 이진비트를 처리함
//  * - 장점: 메모리 적게 사용, 빠르게 동작, 소스코드가 직관적
//  *
//  * @return int
//  */
// int main()
// {
//     unsigned short data = 0x5678; // 0101 0110 0111 1000

//     unsigned short mask1 = 0xf000; // 1111 0000 0000 0000
//     unsigned short mask2 = 0x0f00; // 0000 1111 0000 0000
//     unsigned short mask3 = 0x00f0; // 0000 0000 1111 0000
//     unsigned short mask4 = 0x000f; // 0000 0000 0000 1111

//     printf("결과 값 1 = %#.4x \n", data & mask1);
//     printf("결과 값 2 = %#.4x \n", data & mask2);
//     printf("결과 값 3 = %#.4x \n", data & mask3);
//     printf("결과 값 4 = %#.4x \n", data & mask4);
//     // 초기값 5678이 결과값 5000, 600, 70, 8로 분리가능
//     // 마스크를 잘 정의하면 특정비트열을 뽑아낼 수 있다

//     unsigned short data = 0x0000; // 0000 0000 0000 0000

//     unsigned short mask1 = 0xf000; // 1111 0000 0000 0000
//     unsigned short mask2 = 0x0f00; // 0000 1111 0000 0000
//     unsigned short mask3 = 0x00f0; // 0000 0000 1111 0000
//     unsigned short mask4 = 0x000f; // 0000 0000 0000 1111

//     printf("결과 값 1 = %#.4x \n", data | mask1);
//     printf("결과 값 2 = %#.4x \n", data | mask2);
//     printf("결과 값 3 = %#.4x \n", data | mask3);
//     printf("결과 값 4 = %#.4x \n", data | mask4);
//     // | 연산은 특정비트열을 내가 원하는 것으로 변경할 수 있음

//     // & 연산자는 특정비트를 0으로
//     // | 연산자는 특정비트를 1로
//     // ^ 연산자는 특정비트를 반전
// }

/**
 * @brief 묵시적 형변환 (type casting)
 *
 * @return int
 */
int main()
{
    int a, b, c;
    double average;

    printf("정수 3개를 입력하세요. \n");
    scanf("%d %d %d", &a, &b, &c);

    // a, b, c 정수를 double 타입으로 묵시적 형 변환
    average = (double)(a + b + c) / 3;
    printf("평균은 %f \n", average);
}