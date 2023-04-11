#include"Part1.h"

/*test */
int main() {

    //Partie 1 , Question 2

    nbr_sommets = 8;

    // Coloration des sommets du graphe
    // la fonction si dessous s'occupe de la coloration de graphe
    color_graph();
    int  n= nbr_color();

    // Affichage des couleurs attribuées à chaque sommet
    printf("Couleurs attribuees aux sommets :\n");
    for (int i = 0; i < nbr_sommets; i++) {
        printf("Sommet %d : couleur %d\n", i+1, colors[i]);
    }
    
    printf("\n");
    printf("le nombre de couleurs utilises est %d \n", n);

    printf("\n");
    printf("\n");


    //Partie 1 , Question 4
        
    
    if (is_planar()) {
        printf("Le graphe est planaire.\n");
    } else {
        printf("Le graphe n'est pas planaire.\n");
    }

    printf("\n");
    printf("\n");
 
    return 0;
}
