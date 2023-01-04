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