#include<icms.h>
/**
 * @brief function to add new books to library
 * @return test_values 
 */
test_values add(int id,char bname[],char aname[])
{ 
    FILE *fp=NULL;
    fp=fopen("bookLibrary.dat","ab+");
    if(fp == NULL)
    {
        printf("\nError: while opening file\n");
        return f;
    }
    else
    {
        book *newBook = NULL;
        newBook = malloc(sizeof(book));
		newBook->t = id;
        strcpy(newBook->q,bname);
        strcpy(newBook->r,aname);
        fwrite(newBook,sizeof(book),1,fp);
        fclose(fp);
        free(newBook);
        return p;
    }
}