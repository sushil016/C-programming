#include <stdio.h>

struct address
{
    int flat_no;
    char bldg_name[20];
    char area[20];
    char city[20];
};
struct student
{
    char name[20];
    int roll_no;
    float ptr;
    struct address res_add;
} s1[3];
void main()
{
    int i;

    for (i = 0; i <= 2; i++)
    {
        printf("ENTER NAME:");
        gets(s1[i].name);
        printf("ENTER ROLL NO:");
        scanf("%d", &s1[i].roll_no);
        printf("ENTER POINTER:");
        scanf("%f", &s1[i].ptr);
        printf("ENTER FLAT NO:");
        scanf("%d", &s1[i].res_add.flat_no);
        printf("ENTER BLDG NAME:");
        gets(s1[i].res_add.bldg_name);

        printf("ENTER AREA:");
        gets(s1[i].res_add.area);

        printf("ENTER CITY:");
        gets(s1[i].res_add.city);
    }
    printf("\n-----DETAILS-----\n");
    for (i = 0; i <= 2; i++)
    {
        printf("\nNAME: %s", s1[i].name);
        printf("\nROLL NO: %d", s1[i].roll_no);
        printf("\nPOINTER: %0.2f", s1[i].ptr);
        printf("\nFLAT NO: %d", s1[i].res_add.flat_no);
        printf("\nBUILDING NAME: %s", s1[i].res_add.bldg_name);
        printf("\nAREA: %s", s1[i].res_add.area);
        printf("\nCITY: %s", s1[i].res_add.city);
    }
}
