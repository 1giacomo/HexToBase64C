#include "hexToBase64Converter.h"

int main() {
    char **hex = malloc(sizeof(char**));
    hex[1] = "4a1b48d7322394a78326cd283f0834093e65421a7e98e90e5b452d160b5d07d8";
    char *risultato = hexToBase64Converter(0, hex);
    printf("%s", risultato);
}