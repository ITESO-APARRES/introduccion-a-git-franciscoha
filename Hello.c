//Modificacion hecha desde la plataforma de github
#include <stdio.h>

int main(void){
    print("diciendo hola",decirHola("francisco"));
    
    return 0;
} 

}
char* decirHola(char *nombre){
    printf("hola %s como estas?",nombre);
    return nombre;
}
