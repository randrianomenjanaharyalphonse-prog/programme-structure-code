#include<stdio.h>
typedef struct{
  char nom[10];
  int age;
  int contact;
}Info;
void tst(Info *cont)
{
  for(int i=0;i<3;i++)
  {
    printf("\n Personne N° %d \n",i+1);
    printf("saisir votre nom:");
    scanf("%s",cont[i].nom);
    
    printf("entrer votre âge : ");
    scanf("%d",&cont[i].age);
    
    printf("entrer votre contact : ");
    scanf("%d",&cont[i].contact);
  }
}
void info( Info *cont)
{
  printf("\n=======liste des info =======\n");
  for(int i=0;i<3;i++)
  {
    printf("\ninfo de %d personne :\n",i+1);
    printf("Nom :%s \n ",cont[i].nom);
    printf("Age :%dans \n ",cont[i].age);
    printf("Contact :%d \n",cont[i].contact);
  }
}
int main(void)
{
  Info cont[3]; 
  tst(cont);
  info(cont);
  return 0;
  }
    
