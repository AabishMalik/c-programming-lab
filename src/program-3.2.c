// Pragoram 3.2
//
// Check whether a character is a vowel or a consonant


#include <stdio.h>
#include <math.h>

int main(){
    char inp;
    printf("Enter character: ");
    scanf("\n%c", &inp);

    if (inp == 'a' || inp == 'A' || inp == 'e' || inp == 'E' ||inp == 'i' || inp == 'I' ||inp == 'o' || inp == 'O' ||inp == 'U' || inp == 'U' ){
        printf("character %c is a vowel\n",inp);
    }else{
        printf("character %c is a consonant\n",inp);
    }
    
    return 0;
}
