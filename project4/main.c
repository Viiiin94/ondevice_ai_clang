/**
 * @brief 배열 (Array)
 * - 같은 데이터형의 변수들로 이루어진 유한 집합
 * - 배열의 모든 요소는 연속된 메모리에 저장됨
 *
 */

#include <stdio.h>

// int main()
// {
//     int arr[5]; // 크기가 5개인 배열 선언
//     // 아직 배열을 초기화 하지 않았음 !!
//     // 배열은 딱 한번만 초기화 가능

//     int byteSize = 0; // 배열의 바이트 크기를 저장할 변수 선언, 초기화
//     int size = 0;     // 배열의 크기를 저장할 변수 선언, 초기화

//     byteSize = sizeof(arr);                        // 배열의 바이트 크기확인 및 반환
//     printf("배열의 바이트 크기: %d \n", byteSize); // 4 * 5 = 20

//     size = sizeof(arr) / sizeof(arr[0]);     // 배열의 갯수?
//     printf("배열의 배열 크기: %d \n", size); // 20 / 4 = 5
// }

#define ARR_SIZE 5 // 매크로 상수!!

int add(int a, int b) { return a + b; }

int main()
{
    // int arr[ARR_SIZE]; // 배열의 크기를 매크로 상수로 지정 가능!

    // for (int i = 0; i < ARR_SIZE; i++)
    // {
    //     arr[i] = i;
    // }

    // printf("arr 배열의 원소 :");
    // for (int i = 0; i < ARR_SIZE; i++)
    // {
    //     printf("%d\t", arr[i]);
    // }
    // printf("\n");

    // int arr[5] = {1, 2, 3, 4, 5}; // 배열의 선언과 각 요소의 초기화
    // int arr0[5] = {0};            // 모든 배열 값이 0으로 초기화 됨

    // int arr[5];
    // arr[0] = 1;
    // arr[1] = 2;
    // arr[2] = 3;
    // arr[3] = 4;
    // arr[4] = 5;

    // int arr[10];
    // int i = 5;

    // arr[i] = 3;     // arr[5] -> 6번째 값이 3
    // arr[i + 1] = 4; // arr[6] -> 7번째 값이 4
    // arr[i + 3] = 5; // arr[8] -> 9번째 값이 5

    // printf("ARR의 4번째 요소는? : %d \n", arr[3]);

    // int arr[ARR_SIZE] = {0};
    // arr[0] = 5;
    // arr[1] = arr[0] + 10;
    // arr[2] = add(arr[0], arr[1]);

    // printf("정수 값 2개를 입력하세요 \n");
    // scanf("%d %d", &arr[3], &arr[4]);

    // for (int i = 0; i < ARR_SIZE; i++)
    // {
    //     printf("%d\t", arr[i]);
    // }

    // printf("\n");

    // int i = 5;
    // char c = "a";

    // printf("변수 i의 주소값 : %p\t 변수 i의 값 : %d\n", &i, i);
    // printf("변수 c의 주소값 : %p\t 변수 c의 값 : %c\n", &c, c);

    // int arr[3];
    // arr[0] = 'a';
    // arr[1] = 'b';
    // arr[2] = 'c';

    // printf("arr[0] 주소값: %p\t요소값: %d \n", &arr[0], arr[0]);
    // printf("arr[1] 주소값: %p\t요소값: %d \n", &arr[1], arr[1]);
    // printf("arr[2] 주소값: %p\t요소값: %d \n", &arr[2], arr[2]);

    // int arr[5] = {1, 2, 3};

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d\t", arr[i]);
    // }

    // int decimal;
    // int binary[20] = {
    //     0,
    // };

    // int position = 0;

    // printf("2진수로 변환할 10진수를 입력하세요 : ");
    // scanf("%d", &decimal); // 14

    // while (1)
    // {
    //     binary[position] = decimal % 2; // 2로 나누었을 때 나머지를 배열에 저장 0 1 1 1
    //     decimal = decimal / 2;          // 2로 나눈 몫을 저장 7 3 1 0

    //     position++; // 자릿수 변경 1 2 3 4

    //     if (decimal == 0) // 몫이 0이 되면 반복을 끝냄
    //         break;
    // }

    // // 배열의 요소를 역순으로 출력
    // for (int i = position - 1; i >= 0; i--)
    // {
    //     printf("%d", binary[i]);
    // }

    // printf("\n");

    // 2차원 배열
    int arr_2[][3] = // 행의 크기는 생략 가능 열은 불가!!
        {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}};

    int arr_22[3][3] =
        {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int arr_00[3][3] = {0};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d행 %d열 : %d | 주소 : %p \n", i, j, arr_2[i][j], &arr_2[i][j]);
        }
    }
}