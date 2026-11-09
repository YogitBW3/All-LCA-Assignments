#include<stdio.h>
#include<string.h>

void main()
{
    char str1[100], str2[100], str3[200], ch;
    int choice, result;

    while(1)
    {
        printf("\n\n----- STRING OPERATIONS -----");
        printf("\n1. Length of String");
        printf("\n2. Copy String");
        printf("\n3. Concatenate Strings");
        printf("\n4. Compare Strings");
        printf("\n5. Reverse String");
        printf("\n6. Uppercase String");
        printf("\n7. Lowercase String");
        printf("\n8. Search Character");
        printf("\n9. Search Substring");
        printf("\n10. Exit");

        printf("\nEnter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter string: ");
                scanf(" %[^\n]",str1);

                printf("Length = %d",strlen(str1));
                break;

            case 2:
                printf("Enter string: ");
                scanf(" %[^\n]",str1);

                strcpy(str2,str1);

                printf("Copied string = %s",str2);
                break;

            case 3:
                printf("Enter first string: ");
                scanf(" %[^\n]",str1);

                printf("Enter second string: ");
                scanf(" %[^\n]",str2);

                strcpy(str3,str1);
                strcat(str3,str2);

                printf("Concatenated string = %s",str3);
                break;

            case 4:
                printf("Enter first string: ");
                scanf(" %[^\n]",str1);

                printf("Enter second string: ");
                scanf(" %[^\n]",str2);

                result=strcmp(str1,str2);

                if(result==0)
                    printf("Strings are equal");
                else
                    printf("Strings are not equal");
                break;

            case 5:
                printf("Enter string: ");
                scanf(" %[^\n]",str1);

                printf("Original string = %s",str1);

                {
                    int i,j;
                    char temp;

                    i=0;
                    j=strlen(str1)-1;

                    while(i<j)
                    {
                        temp=str1[i];
                        str1[i]=str1[j];
                        str1[j]=temp;
                        i++;
                        j--;
                    }
                }

                printf("\nReversed string = %s",str1);
                break;

            case 6:
                printf("Enter string: ");
                scanf(" %[^\n]",str1);

                {
                    int i;
                    for(i=0;str1[i]!='\0';i++)
                    {
                        if(str1[i]>='a' && str1[i]<='z')
                            str1[i]=str1[i]-32;
                    }
                }

                printf("Uppercase = %s",str1);
                break;

            case 7:
                printf("Enter string: ");
                scanf(" %[^\n]",str1);

                {
                    int i;
                    for(i=0;str1[i]!='\0';i++)
                    {
                        if(str1[i]>='A' && str1[i]<='Z')
                            str1[i]=str1[i]+32;
                    }
                }

                printf("Lowercase = %s",str1);
                break;

            case 8:
                printf("Enter string: ");
                scanf(" %[^\n]",str1);

                printf("Enter character: ");
                scanf(" %c",&ch);

                if(strchr(str1,ch)!=NULL)
                    printf("Character found");
                else
                    printf("Character not found");
                break;

            case 9:
                printf("Enter main string: ");
                scanf(" %[^\n]",str1);

                printf("Enter substring: ");
                scanf(" %[^\n]",str2);

                if(strstr(str1,str2)!=NULL)
                    printf("Substring found");
                else
                    printf("Substring not found");
                break;

            case 10:
                printf("Exiting program...");
                return;

            default:
                printf("Invalid choice!");
        }
    }
}
