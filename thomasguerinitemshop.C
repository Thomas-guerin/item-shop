#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//struct declaration
struct Item
{
    char Name[64];
    int Price;
    int Empty;
};
typedef struct Item Item;

int i=0;
int BuyID=0;

int FreeSlot=0;

//Int Main__________________________________________
int main(){

    //item declaration guitare , médiator, microphones >Inventaire
    Item guitare = {"guitare", 2000, 1};
    Item mediator= {"mediator", 2, 1};
    Item microphones = {"microphones", 150, 1};

    //item declaration Bassiste, Ingé, Bières >Inventaire
    Item bassiste = {"Bassiste", 3000, 1};
    Item inge = {"Inge", 1, 1};
    Item biere = {"Bieres", 10, 1};

    Item Espacevide = {"Espacevide !", 0, 0};

    //INVENTAIRE PERSONNEL 
    Item a_inv[5];
    a_inv[0]= guitare;
    a_inv[1]= mediator;
    a_inv[2]= microphones;
    a_inv[3]= Espacevide;
    a_inv[4]= Espacevide;

    //VENDEUR INVENTAIRE
    Item a_merch[5];
    a_merch[0]= bassiste;
    a_merch[1]= inge;
    a_merch[2]= biere;
    a_merch[3]= Espacevide;
    a_merch[4]= Espacevide;

    void tri_iteratif(char *a_inv[], int taille)
 {
   char *temp; 
   int i, j;

   for (i = 0; i < taille; i++) 
    for (j = 0; j < taille; j++)
      if (strcmp(a_inv[i], a_inv[j]) < 0)
        {
          temp = a_inv[i];
          a_inv[i] = a_inv[j];
          a_inv[j] = temp;
        }
  }

void main(void)
 {
   char *valeurs[] = {"AAA", "CCC", "BBB", "EEE", "DDD"};
   int i;

   tri_iteratif(valeurs, 5);
   for (i = 0; i < 5; i++)
     printf("%s ", valeurs[i]);
 }
	
	//_________________________________________________________________________//
    //AFFICHAGE DE TON INVENTAIRE
    for (i=0; i<5; i++)
    {
        if (a_inv[i].Empty = 1)
        {
            printf("=> Inv(%d) : %s \n", i+1, a_inv[i].Name);
        }
        else 
        {

            printf("Empty Slot");
        }
    }

    printf("---\n");

    //AFFICHAGE DE L'INVENTAIRE DU MARCHAND
    for (i=0; i<5; i++)
    {
        if (a_merch[i].Empty = 1)
        {
            printf("=> Merch(%d) : %s (%d gold)\n", i+1, a_merch[i].Name, a_merch[i].Price);
        }
        else 
        {
            printf("Empty Slot");
        }
    }
	
	};