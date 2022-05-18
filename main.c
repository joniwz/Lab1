#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Questao 53
int main(){
    float c,l,p;

    printf("digite o comprimento e a largura do terreno, depois o preco por metro de tela\n");
    scanf("%f%f%f",&c,&l,&p);
    printf("para cercar o terreno voce gastara %f\n",(c * l * p));
    return 0;
}
*/

/* Questao 52
int main (){
    float ami1,ami2,ami3,total,premio,p1,p2,p3;

    printf("digite quanto cada amigo investiu\n");
    scanf("%f%f%f",&ami1,&ami2,&ami3);
    total = ami1 + ami2 + ami3;
    printf("digite o valor do premio\n");
    scanf("%f",&premio);
    p1 = (ami1 * 100) / total;
    p2 = (ami2 * 100) / total;
    p3 = (ami3 * 100) / total;
    printf("amigo 1 apostou %f porcento do total arrecadado\n", p1);
    printf("amigo 2 apostou %f porcento do total arrecadado\n", p2);
    printf("amigo 3 apostou %f porcento do total arrecadado\n", p3);
    printf("amigo 1 recebera %f\n", premio * p1/100);
    printf("amigo 2 recebera %f\n", premio * p2/100);
    printf("amigo 3 recebera %f\n", premio * p3/100);
    return 0;
}
*/

/* Questao 51
int main() {
    float x,y,R;
    printf ("digite a coordenada x e y\n");
    scanf ("%f%f", &x,&y);
    R=sqrt(pow(x,2)+pow(y,2));
    printf("A distancia e: %f \n", R);
    return 0;
}
*/

/* Questao 50
int main(){
    int idade,ano,nasc;
  
    printf("digite sua idade e o ano atual\n");
    scanf("%d%d",&idade,&ano);
    nasc = ano - idade;
    printf("o ano de seu nascimento eh %d",nasc);
    return 0;
}
*/

/* Questao 48
int main(){
    int total,seg,min,hor;
    
    printf("escreva o valor em segundos\n");
    scanf("%d",&total);
    hor = total / 3600;
    min = (total - (hor * 3600)) / 60;
    seg = total - (hor * 3600) - (min * 60);
    printf("seu valor eh %d horas, %d minutos e %d segundos",hor,min,seg);
    return 0;
}
*/

/* Questao 47
int main(){
    int num,dig1,dig2,dig3,dig4;

    printf("escreva um numero inteiro de quatro digitos\n");
    scanf("%d",&num);
    dig1 = num % 10;
    num = num / 10;
    dig2 = num % 10;
    num = num / 10;
    dig3 = num % 10;  
    num = num / 10;
    dig4 = num % 10;
    printf("%d\n%d\n%d\n%d\n",dig4,dig3,dig2,dig1);
    return 0;
}
*/

/* Questao 46
int main (){
    int num, dig1, dig2, dig3;

    printf("digite um numero inteiro de tres digitos\n");
    scanf("%d",&num);
    dig1 = num % 10;
    num = num / 10;
    dig2 = num % 10;
    num = num / 10;
    dig3 = num % 10;    
    printf("o seu valor invertido eh %d%d%d", dig1, dig2, dig3);
    return 0;
}
*/

/* Questao 44
int main(){
    float x,y,z;

    printf("escreva a altura do degrau e a altura que deseja alcancar, ambos em metros\n");
    scanf("%f%f",&x,&y);
    z = y / x;
    printf("a escada tera %f degraus",z);
    return 0;
}
*/

/* Questao 43
int main (){
    float a,b,c,d,e;

    printf("insira o valor\n");
    scanf("%f",&a);
    b = a * 0.9;
    c = a / 3;
    d = b * 0.05;
    e = a * 0.05;
    printf("o total a pagar com desconto de 10 porcento eh %f\n",b);
    printf("o valor de cada parcela no parcelamento em 3 vezes eh %f\n",c);
    printf("a comissao do vendedor na venda a vista eh %f\n",d);
    printf("a comissao do vendedor na venda parcelada eh %f\n",e);
    return 0;
}
*/

/* Questao 42
int main (){
    float x,y;

    printf("insira o salario\n");
    scanf("%f",&x);
    y = x * 0.98;
    printf("o salario liquido eh %f",y);
    return 0;

}
*/

/* Questao 41
int main (){
    float x,y,z;
    printf("escreva o valor da hora de trabalho\n");
    scanf("%f",&x);
    printf("escreva o total de horas trabalhadas\n");
    scanf("%f",&y);
    z = x * y * 1.1;
    printf("o valor a ser recebido eh de %f",z);
    return 0;
}
*/

/* Questao 40
int main(){
    int x = 30,y;
    float z;

    printf("escreva o numero de dias trabalhado\n");
    scanf("%d",&y);
    z = x * y * 0.92;
    printf("o valor total a ser pago eh %f",z);
    return 0;
}
*/

/* Questao 39
int main(){
    float x,y,z,total;

    total = 780000;
    x = total * 0.46;
    y = total * 0.32;
    z = total * 0.22;
    printf ("o primeiro vencedor ganhara %f, o segundo %f e o terceiro %f",x,y,z);
    return 0;
}
*/

/* Questao 38
int main(){
    float x,y;

    printf("escreva o salario atual\n");
    scanf("%f",&x);
    y = x * 1.25;
    printf("o novo salario eh %f",y);
    return 0;
}
*/

/* Questao 37
int main(){
    float x,y;

    printf("escreva o preco do produto\n");
    scanf("%f",&x);
    y = x * 0.88;
    printf("o novo preco do produto com desconto eh %f",y);
    return 0;
}
*/

/* Questao 36
int main(){
    float x,y,z,PI = 3.141592;

    printf("escreva a altura e o raio do cilindro circular\n");
    scanf("%f%f",&x,&y);
    z = PI * (y * y) * x;
    printf("o volume do cilindro eh %f",z);
    return 0;
}
*/

/* Questao 35
int main (){
    float a,b,hip;

    printf("escreva os catetos do triangulo\n");
    scanf("%f%f",&a,&b);
    hip = sqrt((a * a) + (b * b));
    printf("o valor da hipotenusa eh %f",hip);
    return 0;
}
*/

/* Questao 34
int main (){
    float x, y, PI = 3.141592;

    printf("escreva raio do circulo\n");
    scanf ("%f",&x);
    y = x * x * PI;
    printf ("a area do circulo eh %f",y);
    return 0;
}
*/

/* Questao 33
int main(){
    float x,y;

    printf("escreva o tamanho do lado do quadrado\n");
    scanf("%f",&x);
    y = x * x;
    printf ("sua area eh %f",y);
    return 0;

}
*/

/* Questao 32
int main (){
    int x,y,z;
    printf ("Escreva um numero inteiro\n");
    scanf ("%d",&x);
    y = 3 * x + 1;
    z = 2 * x - 1;
    printf ("a soma do sucessor de seu triplo com o antecessor de seu dobro eh %d",y + z);
    return 0;
}
*/

/* Questao 31
int main (){
    int x,y,z;
    printf ("Escreva um numero inteiro\n");
    scanf ("%d",&x);
    y = x - 1;
    z = x + 1;
    printf ("o antecessor eh %d e o sucessor eh %d",y, z);
    return 0;
}
*/

/* Questao 30
int main (){
    float x,y;

    scanf("%f",&x);
    y = x / 4.94;
    printf ("seu valor em dolares eh %f",y);
    return 0;
}
*/

/* Questao 29
int main(){
    float x,y,z,a;

    printf("escreva tres notas\n");
    scanf("%f%f%f",&x,&y,&z);
    a = (x + y + z) / 3;
    printf ("a media entre as notas eh %f",a);
    return 0;
}
*/

/* Questao 28
int main (){
    float x,y,z,a;

    printf("Escreva tres valores\n");
    scanf("%f%f%f",&x,&y,&z);
    a = x * x + y * y + z * z;
    printf("o soma dos quadrados dos tres valores eh %f",a);
    return 0;
}
*/

/* Questao 27
int main (){
    float x,y;

    scanf("%f",&x);
    y = x * 10000;
    printf ("sua area em metros quadrados eh %f",y);
    return 0;
}
*/

/* Questao 26
int main (){
    float x,y;

    scanf("%f",&x);
    y = x * 0.0001;
    printf ("sua area em hectares eh %f",y);
    return 0;
}
*/

/* Questao 25
int main (){
    float x,y;

    scanf("%f",&x);
    y = x * 4048.58;
    printf ("sua area em metros quadrados eh %f",y);
    return 0;
}
*/

/* Questao 24
int main (){
    float x,y;

    scanf("%f",&x);
    y = x * 0.000247;
    printf ("sua area em acres eh %f",y);
    return 0;
}
*/

/* Questao 23
int main (){
    float x,y;

    scanf("%f",&x);
    y = x / 0.91;
    printf ("seu comprimento em jardas eh %f",y);
    return 0;
}
*/

/* Questao 22
int main (){
    float x,y;

    scanf("%f",&x);
    y = 0.91 * x;
    printf ("seu comprimento em metros eh %f",y);
    return 0;
}
*/

/* Questao 21
int main ()
{
    float x,y;

    scanf ("%f",&x);
    y = x * 0.45;
    printf ("seu peso em quilos eh %f",y);
    return 0;

}
*/

/* Questao 20
int main ()
{
    float x,y;

    scanf ("%f",&x);
    y = x / 0.45;
    printf ("seu peso em libras eh %f",y);
    return 0;

}
*/

/* Questao 19
int main ()
{
    float x,y;

    scanf ("%f",&x);
    y = x / 1000;
    printf ("seu volume em metros cubicos eh %f",y);
    return 0;

}
*/

/* Questao 18
int main ()
{
    float x,y;

    scanf ("%f",&x);
    y = x * 1000;
    printf ("seu volume em litros eh %f",y);
    return 0;

}
*/

/* Questao 17
int main()
{
    float x,y;

    scanf ("%f",&x);
    y = x / 2.54;
    printf ("seu comprimento em polegadas eh %f",y);
    return 0;
}
*/

/* Questao 16
int main()
{
    float x,y;

    scanf ("%f",&x);
    y = x * 2.54;
    printf ("seu comprimento em cm eh %f",y);
    return 0;
}
*/

/* Qustao 15
int main()
{
   float x,y;
   float PI = 3.141592;

   scanf ("%f",&x);
   y = x * 180 / PI;
   printf ("seu angulo em graus eh %f",y);
   return 0;
}
*/

/* Questao 14
int main()
{
   float x,y;
   float PI = 3.141592;

   scanf ("%f",&x);
   y = x * PI / 180;
   printf ("seu angulo em radianos eh %f",y);
   return 0;

}
*/

/* Questao 13
int main()
{
    float x,y;

    scanf ("%f",&x);
    y = x / 1.61;
    printf ("sua distancia em milhas eh %f",y);
    return 0;
}
*/

/* Questao 12
int main()
{
    float x,y;

    scanf ("%f",&x);
    y = x * 1.61;
    printf ("sua distancia em km eh %f",y);
    return 0;
}
*/

/* Questao 11
int main()
{
   float x,y;

    scanf ("%f",&x);
    y = x * 3.6;
    printf ("sua velocidade em quilometros por hora eh %f",y);
    return 0;
}
*/

/* Questao 10
int main()
{
    float x,y;

    scanf ("%f",&x);
    y = x / 3.6;
    printf ("sua velocidade em metros por segundo eh %f",y);
    return 0;
}
*/

/* Questao 9
int main()
{
   float x,y;

   scanf ("%f",&x);
   y = x + 273.15;
   printf ("sua temperatura em Kelvin eh %f",y);
   return 0;
}
*/

/* Questao 8
int main()
{
    float x,y;

    scanf ("%f",&x);
    y = x - 273.15;
    printf ("sua temperatura em Celsius eh %f",y);
    return 0;
}
*/

/* Questao 7
int main()
{
    float x,y;
    scanf ("%f",&x);
    y = 5.0 * (x - 32.0) / 9.0;
    printf ("Sua temperatura em Celsius eh %f",y);
    return 0;

}
*/

/* Questao 6
int main()
{
    float x,y;
    scanf ("%f",&x);
    y = x * (9.0 / 5) + 32.0;
    printf ("Sua temperatura em Fahrenheit eh %f",y);
    return 0;



}
*/

/* Questao 5
int main()
{
    float x,y;

    scanf ("%f",&x);
    y = x / 5;
    printf ("A quinta parte do seu numero eh %f",y);
    return 0;
}
*/

/* Questao 4
int main()
{
    float x;

    scanf ("%f",&x);
    printf ("O quadrado do seu numero eh %f",x * x);
    return 0;
}
*/

/* Questao 3
int main()
{
    int x,y,z;
    int a;

    scanf ("%d%d%d",&x,&y,&z);
    a = x + y + z;
    printf ("A soma dos numeros eh %d",a);
    return 0;
}
*/

/* Questao 2
int main()
{
    float x;
    scanf ("%f",&x);
    printf ("Seu numero eh %f",x);
    return 0;
}
*/

/* Questao 1
int main()
{
    int x;
    scanf ("%d",&x);
    printf ("Seu numero eh %d\n",x);
    return 0;
}
*/
