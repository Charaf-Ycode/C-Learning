    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #define mxcontact 100
    #define name 50
    #define phone 50
    #define email 50
    typedef struct{
        char Nom[name];
        char tel[phone];
        char mail[email];
    }contact;
    contact contacts[mxcontact];
    int contactcmp=0;
   
     int choix;

    int main(){
        do{
            printf("\n=============Menu============\n");
            printf("1. Ajouter un Contact\n");
            printf("2. Modifier un Contact\n");
            printf("3. Supprimer un Contact\n");
            printf("4. Afficher les Contact\n");
            printf("5. Rechercher un Contact\n");
            printf("0. Quitter\n");
            scanf("%d",&choix);
            getchar();
         if(choix ==1){
                    printf("Nom Complet:");
                    fgets(contacts[contactcmp].Nom,name,stdin);
                    printf("Telephone:");
                    fgets(contacts[contactcmp].tel,phone,stdin);
                    printf("Email:");
                    fgets(contacts[contactcmp].mail,email,stdin);
                    contactcmp++;
                }
            else if (choix== 2){
                    if(contactcmp==0)
                    printf("Aucun Contact disponible");
                    else{
                        char search[name];
                        printf("Saisie Le Nom:");
                        fgets(search,name,stdin);
                          int f=0;
                        for(int i=0;i<contactcmp;i++){
                            if(strcmp(contacts[i].Nom,search)==0){
                                printf("\ncontact: %s\n",contacts[i].Nom);
                                printf("Nouveau Tel:\n");
                                fgets(contacts[i].tel,phone,stdin);
                                printf("Nouveau Email:\n");
                                fgets(contacts[i].mail,email,stdin);
                                printf("Contact modifier\n");
                                f=1;
                                break;

                            }
                     
                        }
                    if (!f){
                        printf("contact introubvalble\n");
                    }
                   
                
                    
                    }

                }
            else if(choix==3){
                    if(contactcmp==0){
                    printf("Aucun Contact disponible");
                }else {
                    char search[name];
                    printf("Saisie le nom a supprimer");
                    fgets(search,name,stdin);

                    int f=0;
                    for (int i = 0; i < contactcmp; i++){
                       if (strcmp(contacts[i].Nom,search)==0){
                        for (int j=i;j<contactcmp-1;j++){
                            strcpy(contacts[j].Nom,contacts[j+1].Nom);
                            strcpy(contacts[j].tel,contacts[j+1].tel);
                            strcpy(contacts[j].mail,contacts[j+1].mail);
                        }
                        
                        contactcmp--;
                        printf("contact supprimer");
                        f=1;
                        break;
                      }
                    }
                  }
                } 
     else if (choix == 4) {
            if (contactcmp == 0){ 
                printf("Aucun Contact .\n");
            }
            for (int i = 0; i < contactcmp; i++) {
                printf("\n====Liste Des Contacts: %d\n", i+1);
                printf("Nom Complet: %s\n", contacts[i].Nom);
                printf("Phone: %s\n", contacts[i].tel);
                printf("Email: %s\n", contacts[i].mail);
             }
            }
     else if(choix==5){
        if (contactcmp == 0){ 
                printf("Aucun livre disponible.\n");
            }
        else{
            char search[name];
            printf("Saisie le nom a rechercher");
            fgets(search,name,stdin);
              int f=0;
            for (int i = 0; i < contactcmp; i++){
                if (strcmp(contacts[i].Nom,search)==0){
                    printf("\nContact available\n");
                    printf("Nom Complet:%s\n",contacts[i].Nom);
                    printf("Telephone:%s\n",contacts[i].tel);
                    printf("Adresse Email:%s\n",contacts[i].mail);
                    f=1;
                    break;
                }

            }


                }

     }
    }while (choix !=0);
                printf("Au revoir");
                return 0;
             }

    
