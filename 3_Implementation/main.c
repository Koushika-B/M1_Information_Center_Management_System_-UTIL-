/**
 * @file main.c
 * @author Koushika B 
 * @brief 
 * @version 0.1
 * @date 2021-07-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include"icms.h"
/**
 * @brief main function of the project
 * @return int 
 */
int main()
{
    int id,ch,s; 
    char bname[20],aname[20];
    printf("\n\t\t\t\t\t\t*************** MAIN MENU ***************\n");
    printf("\n\t\t\t\t\t\t1. Add Books");
    printf("\n\t\t\t\t\t\t2. Delete books");
    printf("\n\t\t\t\t\t\t3. View Books");
    printf("\n\t\t\t\t\t\t4. Search book");
    printf("\n\t\t\t\t\t\t5. Issue books");
    printf("\n\t\t\t\t\t\t6. Close Application");
    printf("\n\t\t\t\t\t\t******************************************\n");
    printf("\n\t\t\t\t\t\tEnter your choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("\nBookId: ");
        scanf("%d",&id);
        fflush(stdin);
        printf("\nBook name:");
        //gets(name);
	scanf("%19s",bname);
       printf("Authorname: ");
        fflush(stdin);
        //gets(author);
	scanf("%19s",aname);
        s=add(id,bname,aname);
        break;
        case 2:
        printf("\nBookId: ");
        scanf("%d",&id);
        s=remove(id);
        break;
        case 3:
        s=view();
        break;
        case 4:
        printf("\nBookId:");
        scanf("%d",&id);
        s=search(id);
        break;
        case 5:
        printf("\nBookId: ");
        scanf("%d",&id);
        s=issue(id);
        break;
        case 6:
        printf("\n\n\n");
        exit(1);
        default:
        printf("\n\t\t\t\t\t\tInvalid input");
        break;
     }
    if(s==p)
    {
        printf("Successful\n");
    }
    else if(success==fail)
    {
        printf("Unsuccessful\n");
    }
    else{
        printf("Error\n");
    }
return 0;
}