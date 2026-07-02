

#include <stdio.h>
#include <string.h>

void swap(char *point, char *point2)
{
    char temp;
    temp = *point;
    *point = *point2;
    *point2 = temp;
}

int main()
{
    char mystr[20];
    printf("enter a desired string you want to reverse\n");
    scanf("%s", mystr);
   
    char original_str[20];
    strcpy(original_str, mystr);
    char *point;     
    char *point2;
    int len = strlen(mystr); 

    point = mystr;  
    point2 = mystr + len - 1; 

    while (point < point2)
    {
        swap(point, point2);
        point++; 
        point2--;  
    };
    printf("the reverse string is   "); 
    printf("%s\n", mystr);

    if( strcmp(original_str , mystr) == 0)
    {
     printf("the string entered by the user is pallyndrome");
    }
    else{
     printf("the string entered by the user is NOT a pallyndrome");
    };
    
    return 0;
}
