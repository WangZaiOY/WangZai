//
// Created by Jiang on 2023/4/11.
//
#include <stdio.h>
#include "hsb.h"

void sr(double (*a)[EW],int n)
{
    for(int b=0;b<n;b++)
    {
        printf("�����%d������",b+1);
        for(int c=0;c<EW;c++)
        {
            scanf_s("%lf",&(a[b][c]));
            printf("��%d����¼��ɹ�\n",c+1);
        }
    }
    printf("�Ѿ�ȫ���ɹ�¼��\n");
}

double fzd(double *a)
{
    double c=0,d;
    for(int b=0;b<EW;b++)
    {
        printf("\n��ǰ��%6.2f |**|",a[b]);
        c+=a[b];
    }
    d=c/EW;
    printf("\n��ǰƽ��ֵ��%6.2f",d);
    return d;
}

double fz(double (*a)[EW],int n)
{
    double e=0,f;
    for(int b=0;b<n;b++)
    {
        for(int c=0;c<EW;c++)
        {
            e+=a[b][c];
        }
    }
    f=e/(EW*n);
    printf("\n��ǰ����ƽ��ֵ��%6.2f",f);
    return f;
}

double bdx(double (*a)[EW],int n,char b)
{
    double e=0.00;
    for(int c=0;c<n;c++)
    {
        for(int d=0;d<EW;d++)
        {
            if(b=='>')
                e=e>a[c][d]?e:a[c][d];
            else if(b=='<')
            {
                while (c==0&&d==0)
                {
                    e = a[c][d];
                    break;
                }
                e = e < a[c][d] ? e : a[c][d];
            }
            else
                printf("��ġ�<��,��>���������");
        }
    }
    return e;
}