#include<icms.h>
/**
 * @brief function to find the details about a book
 * @return test_values 
 */
test_values search(int id)
{
    FILE *fp=NULL;
    fp = fopen("bookLibrary.dat","rb");
    if(fp==NULL)
    {
        printf("\nError while opening file in search area\n");
        return f;
    }
    else{
    book *book_to_find=(book*)malloc(sizeof(book));
    while(fread(book_to_find,sizeof(book),1,fp))
    {
        if(book_to_find->t==id)
        {
            printf("\nBook_Id: %d\t\tBook_name: %s\t\tBook_Author: %s",book_to_find->t,book_to_find->q,book_to_find->r);
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