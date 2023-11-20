#include <stdarg.h>

/*
Notes:

normal characters (unequal %) are copied to stdout
a conversion specification is introduced by % followed by a conversion specifier

parse format
    calculate output string size
        look for % and specifier
        convert type to max possible chars
build the entire string
    iterate format again
    copy chars
    if conversion specifier found -> convert to str
    copy to output str
write
    write output str in one go to stdout
*/

/*
*
* 
*
* @param char *restrict format
* @param ...
*
* @return: The number of printed characters exluding the NULL byte; if an error occurs a negative number is returned
*
*/
int my_printf(char *restrict format, ...) {
    va_list args;
    va_start(args, format);


    int index = 0;
    int max_size = 0;

    while (format[index] != '\0') {
        if (format[index] == '%') {

        }
        max_size++;
        index++;
    }


    return 0;
}

int main(void) {

    return 0;
}