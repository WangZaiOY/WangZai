#include <stdio.h>
#include "hsb.h"

int main(void)
{
    double sz[YW][EW];
    sr(sz,YW);
    for(int a=0;a<YW;a++)
        fzd(sz[a]);
    fz(sz,YW);
    double e;
    e=bdx(sz,YW,'>');
    printf("\n��ֵ�����ֵΪ��%6.2f",e);
    e=bdx(sz,YW,'<');
    printf("\n��ֵ����СֵΪ��%6.2f",e);
    return 0;
}
