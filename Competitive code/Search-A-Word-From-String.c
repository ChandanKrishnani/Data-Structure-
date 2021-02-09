#include<stdio.h>
#include<string.h>
char arr1[50],arr2[10];
int check(int i)
{
    int k=0,a,b,c;
    c=strlen(arr2)+i;
    for(int j=i;j<c;j++)
    {
        a=arr1[j];
        b=arr2[k];
        if(a!=b)
        {
            return 0;
        }
         k++;

    }
    return 1;

}
int main()
{

    fgets(arr1,sizeof(arr1),stdin);
    scanf("%s",&arr2);
    int a=arr2[0],b,flag=0;
    for(int i=0;i<sizeof(arr1);i++)
    {
        b=arr1[i];
        if(a==b)
        {
            flag=check(i);
            if(flag==1)
            {
                break;
            }
        }

    }
    if(flag==1)
    {
        printf("We have the string");
        return 0;
    }
    printf("We dont have it");
 


}
