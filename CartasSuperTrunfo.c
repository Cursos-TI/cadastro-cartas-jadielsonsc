#include <stdio.h>

int main() {
    // Carta 1
    char Estado1 = 'A';                  
    char CodigoCarta1[50] = "A03";        
    char NomeCidade1[50] = "Lazytown";   
    int Populacao1 = 369000;             
    float AreaKm21 = 1331.25;            
    float PIB1 = 936.22;                 
    int PontosTuristicos1 = 22;          

    // Carta 2
    char Estado2 = 'B';                  
    char CodigoCarta2[50] = "B07";       
    char NomeCidade2[50] = "Metropolis"; 
    int Populacao2 = 1250000;            
    float AreaKm22 = 2567.80;            
    float PIB2 = 1532.47;                
    int PontosTuristicos2 = 35;          

    // Exibir informações da carta 1
    printf("===== Carta 1 =====\n");
    printf("Estado: %c\n", Estado1);
    printf("Codigo: %s\n", CodigoCarta1);
    printf("Nome da Cidade: %s\n", NomeCidade1);
    printf("Populacao: %d\n", Populacao1);
    printf("Area: %.2f km2\n", AreaKm21);
    printf("PIB: %.2f bilhoes de reais\n", PIB1);
    printf("Pontos Turisticos: %d\n\n", PontosTuristicos1);

    // Exibir informações da carta 2
    printf("===== Carta 2 =====\n");
    printf("Estado: %c\n", Estado2);
    printf("Codigo: %s\n", CodigoCarta2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Area: %.2f km2\n", AreaKm22);
    printf("PIB: %.2f bilhoes de reais\n", PIB2);
    printf("Pontos Turisticos: %d\n", PontosTuristicos2);

    return 0;
}
