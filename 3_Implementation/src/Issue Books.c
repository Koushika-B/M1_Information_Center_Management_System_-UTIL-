#include<icms.h>
/**
 * @brief function to issue the book
 * @return test_values 
 */
test_values issue(int id)
{
    char v[20];
    FILE *fp=NULL;
    fp = fopen("bookLibrary.dat","rb");
    if(fp==NULL)
    {
        printf("\nError while opening file in issuing book\\n");
        return f;
    }
    else{
    scanf("%19s student name",v);
    book *book_to_find=(book*)malloc(sizeof(book));
    while(fread(book_to_find,sizeof(book),1,fp))
    {
        if(book_to_find->t==id)
        {
            printf("\nBook_Id: %d\t\tBook_name: %s\t\tBook_Author: %s",book_to_find->t,book_to_find->q,book_to_find->r);
            printf("\n Book is issued to %s",v);
            fclose(fp);
            free(book_to_find);
            return p;
        }
    }
    fclose(fp);
    free(book_to_find);
    printf("\nSpecified book is not present\n");
    return f;
    }
}