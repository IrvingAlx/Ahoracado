#include <stdio.h>
#include <string.h>

void evaluarPalabra(char palabra[], char letra, char nuevaPalabra[]);

int main(void) {
  char palabra[20];
  char r;
  strcpy(palabra, "iberoamericana");
  int tamPalabra, i;
  int posIntento[10];
  tamPalabra = strlen(palabra) - 1;
  char palabraIntento[tamPalabra];
  char temp;

  for (i = 0; i <= tamPalabra; i++) {
    palabraIntento[i] = '_';
  }

  printf("Presione enter\n");

  for (i = 0; i <= 8; i++) {

    //__fpurge(stdin);
    r = getchar();
    printf("%s\n", palabraIntento);
    printf("Dame una letra\n");
    scanf("%c", &temp);

    evaluarPalabra(palabra, temp, palabraIntento);
  }

  if (strcmp(palabra, palabraIntento) == 0) {
    printf("%s\n", palabraIntento);
    printf("Lo lograste %c\n", r);
  } else {
    printf("Perdiste :C %c\n", r);
  }

  return 0;
}

void evaluarPalabra(char palabra[], char letra, char nuevaPalabra[]) {
  int tamPalabra = strlen(palabra);
  int i;

  for (i = 0; i <= tamPalabra; i++) {
    if (letra == palabra[i]) {
      nuevaPalabra[i] = letra;
    }
  }
}