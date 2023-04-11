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
    printf("\n数值中最大值为：%6.2f",e);
    e=bdx(sz,YW,'<');
    printf("\n数值中最小值为：%6.2f",e);
    return 0;
}
