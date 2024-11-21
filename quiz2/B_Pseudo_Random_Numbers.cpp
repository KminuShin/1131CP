#include <stdio.h>

int main()
{
    // L -> seed; (Z*L+I)%M -> next num
    int z, i, m, l;
    int next;
    int count, casecount;
    casecount = 0;
    while (true)
    {
        casecount += 1;
        scanf("%d%d%d%d", &z, &i, &m, &l);
        if ((z == 0) && (i == 0) && (m == 0) && (l == 0))
        {
            break;
        }
        // if ((z==9111)&&(i==5309)&&(m==6000)&&(l==1234)) {continue;} // 9111 5309 6000 1234
        count = 0;
        next = l;
        do
        {
            count += 1;
            next = (z * next + i) % m;
            /*
            printf("@%d next = %d\n", count, next);
            if (count > 500) {break;}
            */
            
        } while (next != l);
        printf("Case %d: %d\n", casecount, count);
    }
}