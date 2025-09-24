/**
 * @brief 포인터!!
 * - 포인터란 ??
 * -> 메모리의 주소 값을 저장하는 변수임!!
 * -> 포인터변수라고도 함
 * -> 포인터는 주소값만 저장할 수 있음
 * - 메모리 상에 위치한 특정한 데이터의 시작주소값을 보관하는 변수
 *
 * - 포인터와 연관된 연산자
 * -> & (주소연산자) : 변수의 이름 앞에 사용, 해당 변수의 주소값을 반환
 * -> * (참조연산자) : 포인터의 이름이나 주소 앞에 사용
 *                   -> 포인터가 가리키는 주소에 저장된 값을 반환
 * - 포인터의 크기는 일정하다.
 * -> 하지만 플랫폼에 따라서 달라짐...
 * -> 32bit -> 4byte | 64bit -> 8byte
 */

#include <stdio.h>

// int main()
// {
//     // int *ptr;      // int 타입의 포인터 선언!
//     // int *p = NULL; // 초기화 방법은 NULL로 초기화!!

//     // printf("%p", p);

//     // int *pi;
//     // double *pd;
//     // char *pc;

//     // printf("int형의 포인터 크기 : %d \n", sizeof(pi));
//     // printf("double형의 포인터 크기 : %d \n", sizeof(pd));
//     // printf("char형의 포인터 크기 : %d \n", sizeof(pc));

//     // int *p;
//     // int a;
//     // p = &a;
//     // *p = 3;

//     // printf("포인터 변수 p에 들어있는 값 : %p \n", p);
//     // printf("변수 a의 주소 값 : %p \n", &a);

//     // printf("p의 값 : %d \n", *p);
//     // printf("a의 값 : %d \n", a);
// }

// int main()
// {
//     // ptr = &a;
//     // *ptr = 2;

//     // printf("ptr의 주소값 : %p, 저장된 값: %d \n", ptr, *ptr);

//     // ptr = &b;
//     // *ptr = 3;

//     // printf("a의 주소 값: %p, 저장된 값: %d \n", &a, a);
//     // printf("b의 주소 값: %p, 저장된 값: %d \n", &b, b);

//     // printf("ptr의 주소값 : %p, 저장된 값: %d \n", ptr, *ptr);

//     // int a;
//     // int *pa;
//     // pa = &a;

//     // int a_1;
//     // int *pa_1;
//     // pa_1 = &a_1;

//     // *pa = 3;
//     // pa_1 = pa;

//     // printf("pa 값-> %d \n", *pa);
//     // printf("pa_1 값-> %d \n", *pa_1);
//     // printf("pa 주소 값-> %p \n", pa);
//     // printf("pa_1 주소 값-> %p \n", pa_1);
//     // printf("a의 주소 값 -> %p \n", &a);
//     // printf("a_1의 주소 값 -> %p \n", &a_1);
//     // printf("a_1 값 -> %d \n", a_1);

//     // char b;
//     // char *pb;
//     // pb = &b;

//     // double c;
//     // double *pc;
//     // pc = &c;

//     // printf("pa의 값 : %p \n", pa);
//     // printf("pa + 1의 값: %p \n", pa + 1); // 4바이트 올라감

//     // printf("pb의 값 : %p \n", pb);
//     // printf("pb + 1의 값: %p \n", pb + 1); // 1바이트 올라감

//     // printf("pc의 값 : %p \n", pc);
//     // printf("pc + 1의 값: %p \n", pc + 1); // 8바이트 올라감

//}

// int main()
// {
//     int a;
//     int *pa = &a;
//     int **ppa = &pa;
//     // **ppa = *pa = a
//     // *ppa = pa = &a
//     // ppa = &pa

//     a = 3;

//     printf("a : %d | *pa : %d | **ppa : %d \n", a, *pa, **ppa);
//     printf("a주소 : %p | pa가리키는 : %p | *ppa저장값 : %p \n", &a, pa, *ppa);
//     printf("pa주소 : %p | ppa가리키는 : %p \n", &pa, ppa);

//     int arr[10] = {100, 90, 82, 74, 67, 58, 42, 38, 29, 12};
//     int *parr = arr;
//     int sum = 0;

//     // parr과 arr이 떨어져있는 칸 arr은 첫 번째 배열의 포인터 처럼 사용 가능
//     while (parr - arr <= 9)
//     {
//         sum += (*parr);
//         parr++;
//     }
//     printf("점수 평균 : %d \n", sum / 10);

//     // 배열[0]과 주소의 관계
//     int arr[3] = {1, 2, 3};
//     // 포인터는 아니나 포인터 처럼 행동 (byte가 다르게 나옴)
//     // arr에서만 묵시적으로 사용 가능
//     int *parr = arr;

//     printf("arr : %d \n", sizeof(arr));
//     printf("parr : %d \n", sizeof(parr));

//     printf("arr의 ?? : %p \n", arr);
//     printf("arr[0]의 주소 : %p \n", &arr[0]);

//     int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int *parr;

//     parr = &arr[0];

//     printf("arr[3] = %d\n *(parr+3) = %d \n", arr[3], *(parr + 3));

//     for (int i = 0; i < 10; i++)
//     {
//         printf("arr[%d]의 주소값: %p ", i, &arr[i]);
//         printf("(parr + %d)의 값: %p ", i, (parr + i));

//         if (&arr[i] == (parr + i))
//         {
//             printf("---> 일치 \n");
//         }
//         else
//         {
//             printf("---> 불일치 \n");
//         }
//     }

//     for (int i = 0; i < 10; i++)
//     {
//         printf("arr[%d]의 주소 값 : %p\n", i, &arr[i]);
//     }
// }

// int main()
// {
//     int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

//     printf("전체 크기: %d \n", sizeof(arr));
//     printf("총 열의 갯수: %d \n", sizeof(arr[0]) / sizeof(arr[0][0])); // 12 / 4
//     printf("총 행의 갯수: %d \n", sizeof(arr) / sizeof(arr[0]));       // 24 / 12

//     printf("arr : %p \n", arr);
//     printf("arr[0] : %p \n", arr[0]);
//     printf("arr[0][0] : %p \n", &arr[0][0]);

//     printf("arr[1] : %p \n", arr[1]);
//     printf("arr[1][0] : %p \n", &arr[1][0]);
// }

// int main()
// {
//     int *arr[3];             // 포인터 배열
//     int a = 1, b = 2, c = 3; // 선언과 동시에 초기화
//     arr[0] = &a;
//     arr[1] = &b;
//     arr[2] = &c;

//     printf("a : %d\t *arr[0] : %d\t &a : %p\t arr[0] : %p \n", a, *arr[0], &a, arr[0]);
//     printf("b : %d\t *arr[1] : %d\t &b : %p\t arr[1] : %p \n", b, *arr[1], &b, arr[1]);
//     printf("c : %d\t *arr[2] : %d\t &c : %p\t arr[2] : %p \n", c, *arr[2], &c, arr[2]);
// }

// int main()
// {
//     int arr[5] = {1, 2, 8, 4, 5};
//     int *p = &arr[0]; // int *p = arr; 이랑 같음

//     for (int i = 0; i < 5; i++)
//     {
//         printf("p = %p ", p);
//         printf("*p = %d \n", *p); // 가르키는 주소의 값이 ++ 됨 즉, 가르키는 방향이 달라짐
//         // printf("*p = %d \n", (*p)++); // 가르키는 주소 안의 값을 올림 즉, 가르키는 방향은 안 바뀜
//         p++; // 이게 제일 편할듯 ㅋㅋ
//     }
// }

// int swap_value(int i)
// {
//     i = 3;
//     return 0;
// }
// int swap_value(int *ptr_i)
// {
//     *ptr_i = 3;
//     return 0;
// }

// int main()
// {
//     int i = 0;
//     printf("호출 이전 i : %d \n", i);

//     swap_value(&i);
//     printf("호출 이후 i : %d \n", i);
// }

// int swap_value(int a, int b)
// {
//     int temp = a;

//     a = b;
//     b = temp;

//     return 0;
// }
int swap_value(int *a, int *b)
{
    int temp = *a;

    *a = *b;
    *b = temp;

    return 0;
}

int main()
{
    int i, j;
    i = 3;
    j = 5;
    printf("스왑 이전의 i : %d\t j : %d \n\n", i, j);
    swap_value(&i, &j);
    printf("스왑 이후의 i : %d\t j : %d \n\n", i, j);
}