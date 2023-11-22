#include <stdarg.h>
#include <stdlib.h>

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


int count_specifiers(char *restrict format) {
    int index = 0;
    int count = 0;

    while (format[index] != '\0') {
        if (format[index] == '%') {
            if (index == 0 || (index > 0 && format[index - 1] != '%')) {
                count++;
            }
        }
        index++;
    }
    return count;
}

int clean_up() {
    return 0;
}

int int_to_string(char *dst, int *len, int variable, char specifier) {


    return 0;
}


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


    int index_format= 0;
    int index_variables = 0;
    int len = 0;
    int specifier = 0;
    int num_specifier = 0;
    char **var_strs;
    int *str_lens;
    char *output_str;
    
    num_specifier = count_specifiers(format);
    var_strs = malloc(sizeof(*var_strs) * num_specifier);
    str_lens = malloc(sizeof(*str_lens) * num_specifier);
    
    if (var_strs == NULL || str_lens == NULL) {
        return clean_up();
    }

    while (format[index_format] != '\0') {
        if (specifier && format[index_format] != '%') {
            // handle specifier
            switch (format[index_format]) {
                case 'd':
                    int_to_string(var_strs[index_variables], &str_lens[index_variables], va_arg(args, int), 'd');
                    break;
                case 'o':

                    break;
                case 'u':

                    break;
                case 'x':

                    break;
                case 'c':
                    
                    break;
                case 's':

                    break;
                case 'p':

                    break;
            }


            specifier = 0;
        }
        else if (!specifier && format[index_format] == '%') {
            specifier = 1;
        }
        else {
            // normal character
            len++;
        }
        index_format++;
    }


    return 0;
}

int main(void) {

    return 0;
}