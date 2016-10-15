#include <stdio.h>
# define PI 3.1415
int main()
{
    int acc=3;
    float angle_degree,angle_radian,ans=1,temp=1,i;
    printf("Enter the angle in degree: ");
    scanf("%f",&angle_degree);

    angle_radian = angle_degree*PI/180;

    for(i=1;i<2*acc;i+=2){
        temp *= (-1) * angle_radian*angle_radian / ( i*(i+1) );
        ans += temp;
    }
    printf("cos(%f) = %f\n",angle_degree,ans);

    return 0;
}
