#include <stdio.h>

// /**
//  * @brief if, else if, else
//  *
//  * @return int
//  */
// int main()
// {
//     int num = 0;

//     printf("숫자를 입력하세요. \n");
//     scanf("%d", &num);

//     if (num < 5)
//     {
//         printf("입력하신 숫자는 5보다 작습니다. \n");
//     }
//     else if (num == 5)
//     {
//         printf("입력하신 숫자는 5입니다. \n");
//     }
//     else
//     {
//         printf("입력하신 숫자는 5보다 큽니다. \n");
//     }

//     int pm;
//     printf("미세먼지 농도를 입력하세요.\n");
//     scanf("%d", &pm);

//     // 중첩 if 시작
//     if (pm > 0)
//     {
//         if (pm <= 30)
//         {
//             printf("미세먼지 농도가 낮습니다.\n");
//         }
//         else
//         {
//             if (pm <= 80)
//             {
//                 printf("미세먼지 농도가 보통입니다.\n");
//             }
//             else
//             {
//                 printf("미세먼지 농도가 높습니다.\n");
//             }
//         }
//     }
//     else
//     {
//         printf("숫자를 0보단 크게 작성해주세요.\n");
//     }
// }

// /**
//  * @brief switch
//  * - switch(정수 or 정수식)
//  * @return int
//  */
// int main()
// {
//     int num;
//     printf("미세먼지 농도를 입력하세요.\n");
//     printf("1 : 좋음 \n");
//     printf("2 : 보통 \n");
//     printf("3 : 나쁨 \n");
//     printf("4 : 죽음 \n");
//     scanf("%d", &num);

//     switch (num)
//     {
//     case 1:
//         printf("미세먼지 농도가 좋음\n");
//         break;

//     case 2:
//         printf("미세먼지 농도가 보통\n");
//         break;

//     case 3:
//         printf("미세먼지 농도가 나쁨\n");
//         break;

//     case 4:
//         printf("미세먼지 농도가 죽음\n");
//         break;

//     default:
//         printf("1 ~ 4번만 눌러주세요 \n");
//         break;
//     }
// }

// /**
//  * @brief while 문
//  *
//  * @return int
//  */
// int main()
// {
//     int weight = 80;
//     int count = 0;

//     while (weight > 70)
//     {
//         printf("빡시게 운동해서 1kg 살빼자 \n");
//         weight--;
//         count++;
//     }

//     printf("운동 끝~ \n");
//     printf("%d 일 운동함. \n", count);
// }

// /**
//  * @brief do while 문
//  *
//  * @return int
//  */
// int main()
// {
//     int weight = 80;
//     int count = 0;
//     int select;

//     do
//     {
//         printf("빡시게 운동해서 1kg 살빼자 \n");
//         weight--;
//         count++;

//         printf("운 동 더 할꺼임?\n");
//         printf("1. Yes, 2. No (숫자를 입력하세요.)\n");
//         scanf("%d", &select);

//         if (select == 2)
//             break;
//     } while (weight > 70);

//     printf("운동 끝~ \n");
//     printf("%d 일 운동함. \n", count);
// }

// /**
//  * @brief for !!!!!!
//  *
//  * @return int
//  */
// int main()
// {
//     int weight;
//     int count = 0;

//     for (weight = 80; weight > 70; weight--)
//     {
//         printf("빡시게 운동해서 1kg 살빼자 \n");
//         count++;
//     }
//     printf("운동 끝~ \n");
//     printf("%d 일 운동함. \n", count);

//     // 무한루프
//     while (1)
//     {
//     }
//     for (;;)
//     {
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         printf("i 시작: %d \n", i);
//         for (int j = 0; j <= i; j++)
//         {
//             printf("j: %d\n", j);
//         }
//         printf("i 끝: %d \n", i);
//     }
// }

int main()
{
    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 4; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

// int main()
// {
//     int n;
//     int i = 1;
//     int j;

//     printf("출력하고 싶은 구구단수는? : ");
//     scanf("%d", &n);

//     while (i <= 9)
//     {
//         printf("%d * %d = %d \n", n, i, n * i);
//         i++;
//     }

//     for (i = 1; i <= 9; i++)
//     {
//         for (j = 1; j <= 9; j++)
//         {
//             printf("%d * %d = %d \t", i, j, i * j);
//         }
//         printf("\n");
//     }
// }