#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))

int i;
float n;
float a[10010];


float fangcha(float *a,float a1)
{
    float temp=0;
    for(i=1;i<=n;i++)
    {
        temp+=pow(a[i]-a1,2);
    }    
    
    
    return temp/n;

}



int main()
{
    scanf("%f",&n);
    for(i=1;i<=n;i++)scanf("%f",&a[i]);
    
    float a1=0;
    float sum=0;
    for(i=1;i<=n;i++)sum+=a[i];
    a1=sum/n;
    float fan=fangcha(a,a1);
    float temp=0;
    for(i=1;i<=n;i++)
    {
        temp=(a[i]-a1)/pow(fan,0.5);
        printf("%f\n",temp);
    }

    return 0;
        
}

