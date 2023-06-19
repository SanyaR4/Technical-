#include<stdio.h>
enum days{ Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};
int main()
{
    int day;
    scanf("%d",&day);
    if(day == Sunday|| day == Saturday)
    {
        printf("Enjoy weekends!");
    }
    else
    {
        printf("Concentrate on your studies");
    }
    return 0;
}