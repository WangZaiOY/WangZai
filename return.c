#include <stdio.h>

int main()
{
	printf("Hello Word");
	return 0;
}



#include <stdio.h>
void one(void);

int main()
{
	printf("Hello Word\n");
	one();
	return 0;
}

void one(void)
{
	printf("翻译：你好\n");
}



#include <stdio.h>

void jolly();
void deny();
void br();
void ic();
void smile();
void one_three();
void two();
/*C primer plus 2.12编程练习*/
int main()
{
	int nl, ts;
	int toes, toes2, toesp2;

	toes = 10;
	toes2 = 2 * toes;
	toesp2 = toes * toes;
	nl = 18;
	ts = 365 * nl;
	printf("你的姓名\n地址\n\n");
	printf("天数=%d\n\n", ts);
	printf("Jiang C\n");
	printf("Jiang\nC\n");
	printf("Jiang ");
	printf("C\n\n");
	jolly();
	jolly();
	jolly();
	deny();
	printf("\n");
	br();
	printf(", ");
	ic();
	printf("\n");
	br();
	printf("\n");
	ic();
	printf("\n\n");
	printf("toes=%d, toes两倍=%d, toes平方=%d\n\n", toes, toes2, toesp2);
	smile();
	smile();
	smile();
	printf("\n");
	smile();
	smile();
	printf("\n");
	smile();
	printf("\n\n");
	printf("starting now:\n");
	one_three();
	printf("done!");

	return 0;
}

void jolly()
{
	printf("For he's a jolly good fellow\n");
}

void deny()
{
	printf("Which nobody can deny\n");
}

void br()
{
	printf("Brazil, Russia");
}

void ic()
{
	printf("India, China");
}

void smile()
{
	printf("Smile!");
}

void one_three()
{
	printf("one\n");
	two();
	printf("three\n");
}

void two()
{
	printf("two\n");
}



#include <stdio.h>

                  /*C Primer plus 3.4.5 练习*/
int main(void)
{
	float weight;
	float value;

	printf("Are you worth your weight in platinum?\n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds:");

	scanf_s("%f", &weight);

	value = 1700.0 * weight * 14.5833;

	printf("Your weight in platinum is worth $%.2f.\n", value);
	printf("You are easily worth that! If platinum prices drop,\n");
	printf("eat more to maintain your value.\n");

	return 0;
}



#include <stdio.h>
            /*C Primer plus 3.11 编程练习 23/1/6 */
int main()
{
    printf("%d\n", sizeof(short));
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(long));
    printf("%d\n", sizeof(long long));
    /*整数上溢*/
    int a = 2147483647;
    int b;
    b = a + 1;
    printf("%d\n%d", a, b);
    /*ASCII码转换*/
    char ASC;
    int ASCII;
    printf("\n\n请输入一个ASCII码值：");
    scanf_s("%d", &ASCII);
    ASC = ASCII;
    printf("该输入值代表字符为%c", ASC);
    printf("\a");
    printf("\nStartled by the  sudden sound, Sally shouted,");
    printf("By the great Pumpkin ,what was that!");

    return 0;
}