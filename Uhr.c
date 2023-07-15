#include <stdio.h>
#include <time.h>

int main(){
    time_t jetzt = time(NULL); //aktuelle zeit abfrage
    struct tm * Zeit = localtime(&jetzt);


    printf("Sekunden: %d\n", (*Zeit).tm_sec);
    printf("Minuten: %d\n", (*Zeit).tm_min);
    return 0;
}