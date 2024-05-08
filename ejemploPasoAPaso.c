#include "libreriaPasoAPaso.h"
#include "MKL2574.h"
#include "Ctype.h"

char A;
int num;
    int main() {
        printf("Ingresar el modo de pasos y numero de pasos"\n);
        scanf("%c", &A);
        scanf("%d", &num);    
        if(tolower(A) == 'n'){
            pasoNormal(num);
        } else if(tolower(A) == 'c'){
            pasoCompleto(num);
        } else if(tolower(A) == 'm') {
            pasoMedio(num);
        }
    return 0;
}