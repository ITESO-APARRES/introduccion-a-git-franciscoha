//Modificacion hecha desde la plataforma de github
#include <stdio.h>

int main(void){
    decirHola("francisco");
    decirAdios("francisco");
    return 0;
} 

}
void decirHola(char *nombre){
    printf("hola %s como estas?",nombre);
}
void decirAdios(char *nombre){
    printf("Adios %s",nombre);
}