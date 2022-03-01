#include<icms.h>
/**
 * @brief function to remove the records of a book
 * @return test_values 
 */
test_values remove(int id)
{
    FILE *fp=NULL;
    FILE *ft=NULL;
    fp = fopen("bookLibrary.dat","rb");
    ft = fopen("temp.dat","wb");
    if(fp==NULL || ft==NULL)
        {
            printf("\nError: While opening file:\n");
            return f;
        }
    else{
        rewind(fp);
        book *discarded_book = (book*)malloc(sizeof(book));
    while(fread(discarded_book,sizeof(book),1,fp)==1)
    {
        if(id != discarded_book->id)
        {
            fwrite(discarded_book,sizeof(book),1,ft);   
        }
    }
    fclose(fp);
    fclose(ft);
    free(discarded_book);
    remove("bookLibrary.dat");
    rename("temp.dat","bookLibrary.dat");
    return p;
    }
}