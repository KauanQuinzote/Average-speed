#include <stdio.h>

float velocidade(float distancia, float tempo);

int main(void) {

  float d,t,velocidade_media;
  
  printf("Insira a distância e o tempo, respectivamente\n");
  scanf("%f %f", &d, &t);

  velocidade_media = velocidade(d,t);

  printf("%2.f", velocidade_media);
  
  
  return 0;
}
float velocidade(float d, float t)
{
  float v = d/t;

  return v;
}
