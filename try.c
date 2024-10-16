#include <stdio.h>
int main (){
int qgrade1, qgrade2, qgrade3; // quiz grade// 
int pgrade1, pgrade2, pgrade3 = 0; // project grade
int egrade1, egrade2, egrade3 = 0; // major exam grade
int agrade1, agrade2, agrade3 = 0; // assignment grade

printf("Enter 1st score: %d");
scanf("%d", &qgrade1);

printf("Enter 2nd score: %d");
scanf("%d", &qgrade2);

printf("Enter 3rd score: %d");
scanf("%d", &qgrade3);

double totalqgrade = qgrade1 + qgrade2 + qgrade3 / 0.30 * 100;
}