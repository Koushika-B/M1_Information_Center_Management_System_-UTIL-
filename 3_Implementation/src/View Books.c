#include<icms.h>
/**
 * @brief function to view all the books
 * @return test_values 
 */
test_values view()
{
    FILE *fp=NULL;
    fp=fopen("bookLibrary.dat","rb");
    if(fp==NULL)
    {
        printf("\nERROR:\n");
        return f;
    }
    else{
        book *book_to_find=(book*)malloc(sizeof(book));
    while(fread(book_to_find,sizeof(book),1,fp)==1)
    {
        printf("\n%d\t\t\t%s\t\t\t%s",book_to_find->t,book_to_find->q,book_to_find->r);
    }
    fclose(fp);
    free(book_to_find);
    return p;
    }
}