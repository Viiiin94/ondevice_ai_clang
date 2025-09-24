/**
 * @brief 문자열
 * 문자열 : 연속된 문자들의 집합/모임 (string)
 * 문자 : 하나의 문자 ('a')
 */

#include <stdio.h>

// int main()
// {
//     // NULL로 동일
//     char null_1 = '\0';
//     char null_2 = 0;
//     char null_3 = (char)NULL;

//     // 이건 문자 0 임
//     char not_null = '0';

//     printf("null의 아스키값 : %d \n", null_3);
//     printf("0의 아스키값 : %d \n", not_null);
// }

// int main()
// {
//     char str[] = {"good"}; // 자동으로 크기 5인 배열로 나옴
//     char str0[10] = "";    // 초기화 방법

//     char sentence_1[5] = {'G', 'o', 'o', 'd', '\0'};
//     char sentence_2[5] = {'G', 'o', 'o', 'd'};
//     char sentence_3[5] = {'G', 'o', 'o', 'd', NULL};
//     char sentence_4[5] = {"Good"}; // 문자 갯수보다 반드시 1개가 많아야함!!!!

//     printf("sentence_1 : %s \n", sentence_1);
//     printf("sentence_2 : %s \n", sentence_2);
//     printf("sentence_3 : %s \n", sentence_3);
//     printf("sentence_4 : %s \n", sentence_4);
// }

// int main()
// {
//     char word[] = {"long sentence"};
//     printf("조작 이전 : %s \n", word);

//     word[0] = 'w';
//     word[1] = 'o';
//     word[2] = 'r';
//     word[3] = 'd';

//     printf("조작 이후 : %s \n", word);
// }

int str_length(char *str)
{
    int i = 0;
    while (str[i])
    {
        i++;
    }
    return i;
}

int main()
{
    char str[] = {"Good Morning!!"};
    printf("문자열의 길이는? : %d \n", str_length(str));
}