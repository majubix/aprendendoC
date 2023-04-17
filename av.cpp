#include <stdio.h>

 

typedef struct pessoa

 {

 char nome[40];

 int idade;

 float salario;

};

 

 void func3(struct pessoa f1, struct pessoa f2, struct pessoa f3)

 {

   printf("%s %d %.2f\n",f1.nome, f2.idade, f3.salario);

 }

 

 main()

 {

   struct pessoa p1 = {"Maria Estrela",50,10000.00};

   struct pessoa p2 = {"Alcogelson Medeiros",51,12000.00};

   struct pessoa p3 = {"Paulo Lokidown",60,12500.00};

   func3(p1,p2,p3);    }
