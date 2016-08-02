//
//  main.c
//  SortArray
//
//  Created by Dominic Liebel on 30.07.16.
//  Copyright © 2016 Dominic Liebel. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    
    
    
    int geflohen = 0;
    int erGreiftAn = 0;
    int gegnerLeben = 42;
    int sieGreifenAn = 0;
    srand(time(NULL));
    int r = rand() % 10;
    char* gegner = "\"Ich bin der Fette Troll. Ich mach dich kaputt.\"\n";
    
    char KampfenOderRennen;
    
    int leben = 100;
    printf("Sie haben noch %i Leben.\n", leben);
    
    printf("Vor ihnen taucht ein Gegner auf.\n\n");
    printf("%s", gegner);
    
    
    printf("Wollen Sie wegrennen oder direkt kämpfen gegen den Gegner.");
    scanf("%c", &KampfenOderRennen);
    if(KampfenOderRennen == 'f' && r < 5) {
        printf("Sie sind erfolgreich geflohen!\n");
        geflohen +=1;
    } else if (KampfenOderRennen == 'k'){
        printf("Sie sind nicht geflohen, Sie greifen den Troll an!\n");
        printf("Der Gegner (Troll) get %i Leben.\n", gegnerLeben);
        sieGreifenAn = 1;
        
    } else {
                printf("Sie sind nicht geflohen, der Troll greift Sie an!\n");
                printf("Der Gegner (Troll) get %i Leben.\n", gegnerLeben);
        erGreiftAn = 1;
    }
    

    
    
    
    srand(time(NULL));
        while(leben > 0 && gegnerLeben > 0) {
    while(leben > 0 && gegnerLeben > 0 && erGreiftAn == 1) {
        int randomNumber = rand() % 12;
        printf("\nDer Gegner hat ihnen %i Leben abgezogen!",randomNumber);
                       leben -= randomNumber;
        printf("\nSie haben noch %i Leben!\n", leben);
            
            erGreiftAn -= 1;
            sieGreifenAn += 1;
    }
            while(leben > 0 && gegnerLeben > 0 && sieGreifenAn == 1) {
                    int randomNumber2 = rand() % 5;
            printf("\nSie haben dem Gegner %i Leben abgezogen!", randomNumber2);
                        gegnerLeben -= randomNumber2;
                
            printf("\nDer Gegner hat noch %i Leben!\n", gegnerLeben);
           
            erGreiftAn += 1;
            sieGreifenAn -= 1;
            }
    
        }
    if(leben > 0 && geflohen == 0) {
        printf("\nSie haben den Kampf gewonnen! \n Sie haben noch %i Leben\n", leben);
    }
    
    
    
    return 0;
}
