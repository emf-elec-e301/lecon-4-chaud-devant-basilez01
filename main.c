 /*
 * MAIN Application File
 * @file main.c
 * @defgroup main MAIN
 * @brief Application MAIN file to test the buzzer
*/

//----------------------------------------------------------
// INCLUDE FILES
//----------------------------------------------------------
#include "mcc_generated_files/system/system.h"
#include "mcc_generated_files/timer/delay.h"
#include "junoke_song_commande.h"
#include "junoke_eye_commande.h"

//----------------------------------------------------------
// MAIN APPLICATION
//----------------------------------------------------------

int main(void)
{
    //----------------------------------------------------------
    // initialisation du microcontroleur
    SYSTEM_Initialize(); // NE PAS SUPPIRMER CETTE LIGNE DE CODE
    //----------------------------------------------------------
    // VOTRE CODE CI-DESSOUS
    // INSTRUCTIONS EXECUTEES UNE SEULE FOIS AU DEMARRAGE
    //----------------------------------------------------------
    int x;
    float yeux;
    x = 1;
    
    while(x = 1) {
        yeux = ultrason_distance();
        if (yeux < 10) {
            buzzer_tone(NOTE_C3,100,0); 
        }
        else if (yeux < 15 ) {
            buzzer_sing(SING_OHOOH);
        }
        else if (yeux < 20) {
            buzzer_sing(SING_HAPPY);
        }
        else if (yeux >= 20){
            buzzer_tone(NOTE_C7,50,0);
        }
        }
    }
//----------------------------------------------------------
// FIN DU CODE
//----------------------------------------------------------
