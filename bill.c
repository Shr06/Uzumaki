/*
EXPERIMENT NO -3
NAME: SHRUTHI A
ROLL NO-63
DATE-18/1/22
*/


# include <stdio.h>
# define METERCHARGE 100 

int main()
{
    char name[20];
    float units;
    float charge;
    float total;

    printf("Enter your name:\n");
    fgets(name,20,stdin);
    printf("Enter units:\n");
    scanf("%f",&units);
    if(units < 0)
    {
        printf("INVALID INPUT\n");
        return 1;
    }
    else if(units <= 200)
    {
        charge = units * 0.80;
    }
    else if(units <= 300)
    {
        charge = 200 * 0.80 + (units-200) * 0.90;
    }
    else(units > 300);
    {
        charge = 200 * 0.80 + 100 * 0.90 + (units-300) * 1;
    }
    total = charge + METERCHARGE;
    if(total > 400)
    {
        total = total + 0.15 * total;
    }
    printf("name\tunits\ttotal\n");
    printf("%s\t%f\t%f\t\n",name,units,total);
    return 0;
}
