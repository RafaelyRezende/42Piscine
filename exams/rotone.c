/*
 * =====================================================================================
 *
 *       Filename:  rotone.c
 *
 *    Description: 
 *    Assignment name  : rotone
Expected files   : rotone.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the next one in alphabetical order.

'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.

The output will be followed by a \n.

If the number of arguments is not 1, the program displays \n.

Example:

    $>./rotone "abc"
    bcd
    $>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
    Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
    $>./rotone "AkjhZ zLKIJz , 23y " | cat -e
    BlkiA aMLJKa , 23z $
    $>./rotone | cat -e
    $
    $>
    $>./rotone "" | cat -e
 *
 *        Version:  1.0
 *        Created:  03/11/25 22:49:15
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  RAFAEL LUIS YANASE DE REZENDE (), RAFAEL.YANASE@GMAIL.COM
 *   Organization:  
 *
 * =====================================================================================
 */

#include <unistd.h>
int main(int argc, char **argv)
{
    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    char    *c;

    c = &argv[1][0];
    while (*c != '\0')
    {

        if (*c == 'z')
        {
            *c = 'a';
            write(1, c, 1);
        }
        else
        {
            *c += 1;
            write(1, c, 1);
        }
        c++;
    }
    write(1, "\n", 1);
    return (0);
}


















