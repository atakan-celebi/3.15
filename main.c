#include <stdio.h>

int main(void) {
    char a;
    float c;
    printf("sei pensionato studente o disoccupato?");
    scanf("%s",a);
    c = 4;
    if (a = "p") {
        c = c-(c*0.10);
    } else if (a = "s") {
        c = c-(c*0.15);
    } else if (a = "d") {
        c = c-(c*0.25);
    }
    printf("il prezzo e' di: %f", c);
 }
