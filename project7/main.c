#include <stdio.h>
#include <string.h>

// struct human // human이라는 구조체
// {            // 사용자 데이터 형을 선언!!
//     int age;
//     int height;
//     int weight;
// };

// int main()
// {
//     struct human info; // info 라는 구조체 변수를 선언

//     info.age = 10;
//     info.height = 180;
//     info.weight = 80;

//     printf("나이 : %d \n", info.age);
//     printf("키 : %d \n", info.height);
//     printf("몸무게 : %d \n", info.weight);
// }

// struct contact
// {
//     char name[20];  // 이름
//     char phone[20]; // 번호
//     int ringtone;   // 벨소리 0~9
// };

// int main()
// {
//     struct contact ct = {"김석진", "01011112222", 0};
//     struct contact ct1 = {0}, ct2 = {0};
//     struct contact ct4 = ct;

//     ct.ringtone = 5;                 // 링톤 변경
//     strcpy(ct.phone, "01099998888"); // ct의 번호를 바꿈

//     printf("이  름 : %s \n", ct.name);
//     printf("번  호 : %s \n", ct.phone);
//     printf("벨소리 : %d \n", ct.ringtone);

//     strcpy(ct1.name, "전전국");
//     strcpy(ct1.phone, "01066665555");
//     ct1.ringtone = 3; // str이 아니기 때문에...

//     printf("이  름 : %s \n", ct1.name);
//     printf("번  호 : %s \n", ct1.phone);
//     printf("벨소리 : %d \n", ct1.ringtone);
//     printf("------------------------------\n");

//     strcpy(ct1.name, "전전국");
//     strcpy(ct1.phone, "01066665555");
//     ct1.ringtone = 3; // str이 아니기 때문에...

//     // printf("이  름 : ");
//     // scanf("%s", ct2.name); // 문자열 배열이라 & 필요 없음
//     // printf("번  호 : ");
//     // scanf("%s", ct2.phone);
//     // printf("벨소리 : ");
//     // scanf("%d", &ct2.ringtone);

//     // printf("이  름 : %s \n", ct2.name);
//     // printf("번  호 : %s \n", ct2.phone);
//     // printf("벨소리 : %d \n", ct2.ringtone);
//     printf("------------------------------\n");

//     printf("이  름 : %s \n", ct4.name);
//     printf("번  호 : %s \n", ct4.phone);
//     printf("벨소리 : %d \n", ct4.ringtone);
// }

// typedef unsigned int myUnsignedInteger; // 자료 재 정의, usigned => 부호가 없는 양의 정수만

// int main()
// {
//     // myUnsignedInteger num;
//     // num = 10;
//     // printf("Num : %d \n", num);
// }

// typedef struct food
// {
//     char name[20];
//     int price;
//     int cooktime;
//     int preferance;
// } FOOD_REFERENCE;

// int main()
// {
//     FOOD_REFERENCE testFood = {"라면", 4000, 3, 10};

//     printf("이  름 : %s \n", testFood.name);
//     printf("가  격 : %d \n", testFood.price);
//     printf("시  간 : %d \n", testFood.cooktime);
//     printf("별  점 : %d \n", testFood.preferance);
// }

// typedef struct test
// {
//     int a;
//     int b;
// } TEST;

// int main()
// {
//     TEST st;   // 일반 구조체 변수를 선언
//     TEST *ptr; // TEST 라는 구조체를 가리키는 포인터 변수 선언!

//     ptr = &st;

//     (*ptr).a = 1; // 연산자 우선순위 주의 !!!!!!!!!!!!!!!!!!!
//     (*ptr).b = 2;

//     printf("st의 a의 값 : %d \n", st.a);
//     printf("st의 b의 값 : %d \n", st.b);
//     printf("------------------------------\n");

//     ptr->a = 3;
//     ptr->b = 5;

//     printf("st의 a의 값 : %d \n", st.a);
//     printf("st의 b의 값 : %d \n", st.b);
// }

// typedef struct test
// {
//     int c;
//     int *pointer;
// } TEST;

// int main()
// {
//     TEST t;
//     TEST *pt = &t;
//     int i = 0;

//     t.pointer = &i; // t의 멤버인 pointer는 i를 가리킴
//     *t.pointer = 3; // t의 멤버인 pointer이 가르키는 곳에 값 3을 대입

//     printf("i : %d \n", i);

//     *pt->pointer = 4;
//     printf("i : %d \n", i);
// }

int add_one(int *a);

struct TEST
{
    int c;
};

int main()
{
    struct TEST t;
    struct TEST *pt = &t;

    // pt가 가리키는 구조체 변의 c 멤버의 값을 0으로 변경
    pt->c = 0; // 주소 안의 값 초기화
    printf("t.c : %d \n", t.c);

    // add_one 함수의 인자에 t 구조체 변수의 멤버인 c의 주소값을 전달
    add_one(&t.c);
    printf("t.c : %d \n", t.c);

    // add_one함수 인자에 pt가 가리키는 구조체 변수의 멤버인 c 주소값 전달
    add_one(&pt->c); // 주소의 값
    printf("t.c : %d \n", t.c);
}

int add_one(int *a)
{
    *a += 1;
    return 0;
}