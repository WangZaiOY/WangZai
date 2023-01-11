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



#include <stdio.h>
                     //C Primer plus 4.8 编程作业 23/1/7
int main()
{
    float pai;
    pai=3.14f;
    printf("**%5.3f**",pai);
    return 0;
}


#include <stdio.h>
#define JL 3.785
#define YL 1.609

int main()
{
    float jlz,l;
    float ylz,km;
    float mkm,yh;
    printf("请输入加仑值：");
    scanf("%f",&jlz);
    printf("请输入英里值：");
    scanf("%f",&ylz);
    l=jlz*JL;
    km=ylz*YL;
    mkm=l/km;
    yh=100*l;
    printf("你的的油耗为：%0.1f升每100公里.",yh);

    return 0;
}



#include <stdio.h>
                    //C Primer plus 5.11 编程练习 23/1/8
void Temperatures(double n);
double hs, ks, ss;
int x=1;
int main()
  {
    printf("****************你好!****************\n");
    while (x==1)
    { 
        printf("请输入一个华氏温度值：");
        x = scanf_s("%lf", &hs);
        Temperatures(hs);
        printf("华氏度: %f °C\n", hs);
        printf("摄氏度: %f ℉\n", ss);
        printf("开氏度: %f K\n", ks);
        printf("******输入任意非数字字符可退出******\n");
    }
    printf("**************退出成功！**************");
}

void Temperatures(double n)
{
    ss = 5.0 / 9.0 * (n - 32.0);
    ks = ss + 273.16;
}



#include <stdio.h>
                 //C Primer plus 6.7 编程学习 23/1/9
int main()
{
    char mz[16];
    int qjs;
    int yjs;
    int sys;
    printf("你好，这里是电子代敲，专业代敲木鱼30年\n");
    printf("请输入您的名字：");
    scanf("%s",mz);
    printf("好的，已经收到了！\n");
    for(int zyjs=0;zyjs<9981;)
    {
        printf("请输入要代敲多少下电子木鱼：");
        scanf_s("%d",&qjs);
        printf("好的，已经收到！\n");
        yjs=0;
        while(yjs++<=qjs)
        {
            printf("%s已敲电子木鱼%d下\n", mz, yjs);
        }
        printf("施主，已为你代敲完成，还多送你一个！欢迎再次光临！！！\n");
        zyjs=zyjs+yjs-1;
        sys=9981-zyjs;
        printf("你已累计敲击%d下，还剩%d累计敲9981下可获得赛博真经哦(⊙o⊙)！\n",zyjs,sys);
    }
    printf("赛博如来表示：你以修成正果，取得赛博真经！\n可以滚了。");
    return 0;
}



#include <stdio.h>
           //C Primer plus 6.16 编程练习 23/1/10
int main()
{
    int dys=0;
    int pys=5;
    do{
        dys++;
        pys=pys-dys;
        pys*=2;
        printf("第%d周朋友数为%d\n",dys,pys);
    } while (pys<=150);
    return 0;
}



#include <stdio.h>
                   //C Primer Plus 7.3.4 编程学习 23/1/11
int main()
{
    int a;
    int b;
    printf("请输入一个数让别人猜：");
    scanf_s("%d",&b);
    printf("\n猜是多少：");
    do
    {
        scanf_s("%d",&a);
        if(a<b&&2*a<b)
        {
            printf("小得离谱了\n再猜：");
        }
        else if(a<b&&1.5*a<b)
        {
            printf("小了小了\n再猜：");
        }
        else if(a<b)
        {
            printf("就差一点了，还是小了\n再猜：");
        }
        else if(a>b)
        {
            printf("相差不大了，但还是大了\n再猜：");
        }
        else if(a>b&&0.2*a>b)
        {
            printf("大了大了\n再猜：");
        }
        else if(a>b&&0.5*a>b)
        {
            printf("太TM大了\n再猜：");
        }
    }while(a!=b);
    printf("恭喜你猜到正确答案，就是%d",b);
    return 0;
}