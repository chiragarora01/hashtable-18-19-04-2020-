#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME 256
#define TABLE_SIZE 10

// storing name
typedef struct{
    char name[MAX_NAME];
    int age;
}person;

//hast function which will return 5 and other too
 int hash(char *name)
{
    int length=strlen(name,MAX_NAME);
    int hash_value=0;
    for(int i=0;i<length;i++)
    {
        hash_value+=name[i];
    }
    return hash_value;
   //smallest hash function return 5;
}

int main()
{
    printf("jacob = %u",hash("jacob"));
    printf("chirag = %u",hash("chirag"));
    printf("kashish = %u",hash("kashish"));
    printf("kul = %u",hash("kul"));
    printf("amb = %u",hash("amb"));
    printf("puru = %u",hash("puru"));

    return 0;
}
