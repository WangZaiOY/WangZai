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
#define YY 2.05
#define TC 1.15
#define HLB 1.09
#define ZK 0.95
#define SW 6.5
#define SE 14
#define XY 0.5
                  //C Primer Plus 7.12 编程练习 23/1/12 输入验证修改版
int main()
{
    char xx;
    float yyb, tcb, hlbb;
    float yyq = 0, tcq = 0, hlbq = 0, zq = 0, zqz = 0, zqzz = 0;
    float yybz = 0.00f, tcbz = 0.00f, hlbbz = 0.00f, zljb = 0.00f;
    int yys = 0, tcs = 0, hlbs = 0;
    float zk, yf;
    printf("请输入商品代号（a.洋芋 b.甜菜 c.胡萝卜）：");
    do
    {
        if ((xx=getchar()) != '\n')
        {
            switch (xx)
            {
                case 'a':
                    printf("请输入洋芋磅数：");
                    scanf_s("%f", &yyb);
                    yybz += yyb;
                    yyq = yybz * YY;
                    yys++;
                    printf("请输入商品代号（a.洋芋 b.甜菜 c.胡萝卜）：");
                    continue;
                case 'b':
                    printf("请输入甜菜磅数：");
                    scanf_s("%f", &tcb);
                    tcbz += tcb;
                    tcq = tcbz * TC;
                    tcs++;
                    printf("请输入商品代号（a.洋芋 b.甜菜 c.胡萝卜）：");
                    continue;
                case 'c':
                    printf("请输入胡萝卜磅数：");
                    scanf_s("%f", &hlbb);
                    hlbbz += hlbb;
                    hlbq = hlbbz * HLB;
                    hlbs++;
                    printf("请输入商品代号（a.洋芋 b.甜菜 c.胡萝卜）：");
                    continue;
                default:
                    break;
            }
        }
    } while (xx != 'q');
    zljb = yybz + tcbz + hlbbz;
    if (zljb <= 5)
    {
        yf = SW;
    }
    else if (zljb > 5 && zljb <= 20)
    {
        yf = SE;
    }
    else if (zljb > 20)
    {
        yf = SE + (zljb - 20) * XY;
    }
    zq = yyq + tcq + hlbq;
    if (zq >= 100)
    {
        zqz = zq * ZK;
        zk = ZK * 10;
    }
    else
        zk = 0;
    zqzz = zqz + yf;
    printf("退出成功,已经为你计算总结果：\n");
    printf("商品售价 商品名 商品总重 商品总价 你的折扣 包装费与运费\n");
    printf("  YY     洋芋    %0.2f     %0.2f            \n", yybz, yyq);
    printf("  TC     甜菜    %0.2f     %0.2f    %0.2f    %0.2f\n", tcbz, tcq, zk, yf);
    printf("  HLB   胡萝卜  %0.2f     %0.2f            \n", hlbbz, hlbq);
    printf("你的总商品价格为：%f\n", zqzz);
    return 0;
}



#include <stdio.h>
                   //C Primer Plus 8.11 编程练习 23/1/14
float szy,sze;
char xzx;
int cd(void);
void sz_yz(_Bool o,_Bool t,char yxx);
float js(float szo,float szt,char ysf);
int main()
{
    _Bool o,t;
    float zzz;
    while (1)
    {
        printf("********************\n");
        printf("* a.加法    b.减法  *\n");
        printf("* c.乘法    b.除法  *\n");
        printf("********************\n");
        printf("请选择运算法并输入前面字母选项：");
        xzx = (char)cd();
        if (xzx == 'q')
            break;
        else {
            printf("请输入一个数：");
            o = scanf_s("%f", &szy);
            printf("再输入一个数：");
            t = scanf_s("%f", &sze);
            sz_yz(o, t,xzx);
            printf("正在为你计算结果......\n");
            zzz = js(szy, sze, xzx);
            printf("结果为：%0.2f\n", zzz);
        }
    }
    return 0;
}

int cd(void)
{
    int xx;
    while ((xx=getchar())!='\n')
    {
        if (xx=='a'||xx=='b'||xx=='c'||xx=='d'||xx=='q')
            ;
        else
        {
            printf("\nsorry，你的输入有误，请重新输入：");
            continue;
        }
        while (getchar()=='\n')
            break;
        break;
    }
    return xx;
}

void sz_yz(_Bool o,_Bool t,char yxx)
{
    while (o&&t)
    {
        if(sze==0&&yxx=='d')
        {
            printf("\nsorry，你输入的除数为%f，不用计算。请重新输入：",sze);
            t=scanf_s("%f",&sze);
        }
        else
            break;
    }
    while (!o)
    {
        printf("\n你输入的第一个数有误，请重新输入：");
        o= scanf_s("%f",&szy);
    }
    while (!t)
    {
        printf("\n你输入的第二个数有误，请重新输入：");
        t= scanf_s("%f",&sze);
    }
}

float js(float szo,float szt,char ysf)
{
    float jg;
    switch(ysf)
    {
        case 'a':
            jg=szo+szt;
            break;
        case 'b':
            jg=szo-szt;
            break;
        case 'c':
            jg=szo*szt;
            break;
        case 'd':
            jg=szo/szt;
            break;
        default:
            jg=0;
            break;
    }
    return jg;
}



#include <stdio.h>
                        // C Primer Plus 9.11 编程练习 23/1/15
void jz_zh(int c,int d);
int main()
{
    int a;
    int b;
    _Bool x=1;
    while (x)
    {
        printf("请输入你要转换进制的数(a)和要转换为什么进制(b)（例：a b）：");
        x=scanf_s("%d %d", &a, &b);
        printf("得：");
        jz_zh(a, b);
        printf("\n");
    }
        return 0;
}

void jz_zh(int c,int d)
{
    int ys;
    ys=c%d;
    if(c>=d)
        jz_zh(c/d,d);
    printf("%d",ys);
}



#include <stdio.h>
#define SZ 10
                     //C Primer plus 10.4 编程学习 23/1/16
void px(int*a,int*b);
int main()
{
    int sy=0;
    int yz;
    int csz[SZ];
    printf("请依次输入0~10个数，系统将自动为你排序(至少输入2个数，不守规矩默认退出)：\n请输入：");
    yz=scanf_s("%d",&csz[sy]);
    for(sy=1;yz==1&&sy<=SZ-1;sy++)
    {
        printf("继续输入（结束请按q）：");
        yz=scanf_s("%d", &csz[sy]);
    }
    sy-=1;
    printf("\n你输入了%d个数字，如果有漏的，那就是你的问题，与程序无关.",sy);
    px(csz,csz+(sy-1));
    return 0;
}

void px(int*a,int*b)
{
    if(a<b)
    {
        px(a+1, b - 1);
        printf("b=%d",*b);
    }
}
