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
    
    int erGreiftAn = 0;
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
    if(KampfenOderRennen == 'r' && r < 5) {
        printf("Sie sind erfolgreich geflohen!\n");
    } else if (KampfenOderRennen == 'k'){
        printf("Sie sind nicht geflohen, Sie greifen den Troll an!\n");
        int sieGreifenAn = 1;
    } else {
                printf("Sie sind nicht geflohen, der Troll greift Sie an!\n");
        int erGreiftAn = 1;
    }
    
    
    
    
    
    
    return 0;
}
