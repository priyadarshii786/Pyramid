/*  To print 
               aaaaaaaaa
               aaaa aaaa
               aaa   aaa
               aa     aa
               a       a      
               
earlier v iss tarah ka shape print karwa chuke hai with * but this time we are printing this shape with a character */



#include<stdio.h>
int main()
{
    int rows,columns;
    char k;   /*----k ko character ke roop me initialise kiye hai----*/
    for(rows=1;rows<=5;rows++)
    {
        k='a';/*----again character ka declaration v yahi hoga means pahle waale for loop ke andar and not in the above----*/
        /*------------hmlog isko upar initialise nahi kiye hai blki yaha pe hi initialise isliye kiye hai because new line jaise hi aaye waise hi hm chahte hai ki hr baar a print ho. And isko sirf first for loop ke andar rkhe hai--------------*/


        for(columns=1;columns<=9;columns++)
        {
            if(columns<=6-rows || columns>=4+rows)
            {
                printf("%c",k);

            }
            else
            {
                printf(" ");

            }
        }
        printf("\n");
    }
    return 0;
}