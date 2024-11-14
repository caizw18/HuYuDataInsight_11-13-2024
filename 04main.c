#include <stdio.h>

void main()
{
    float f1 = 3.14f;
    printf("f = %f\n",f1);
    printf("f = %.2f\n",f1);

    double d1 = 3.14159;
    printf("f = %lf\n",d1);
    printf("f = %.2lf\n",d1);

    printf("%d\n",sizeof(float));
    printf("%d\n",sizeof(double));
}