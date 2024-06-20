#include <iostream>
#include <list>

int main() {
    // Créez une liste d'articles achetés
    std::list<double> articles = { 12.5, 5.0, 10.0, 9.75 };

    // Calculez le total des articles
    double total = 0.0;
    for (double article : articles) {
        total += article;
    }

    // Affichez le total
    std::cout << "Total des articles : fcfa" << total << std::endl;

    // Demandez le montant à rembourser
    double montantRemboursement;
    std::cout << "Entrez le montant à rembourser : fcfa";
    std::cin >> montantRemboursement;

    // Calculez la différence entre le total et le montant remboursé
    double difference = total - montantRemboursement;

    // Affichez le résultat
    if (difference > 0) {
        std::cout << "Il vous reste à payer : fcfa" << difference << std::endl;
    } else if (difference < 0) {
        std::cout << "Vous avez trop payé ! Remboursement de : fcfa" << -difference << std::endl;
    } else {
        std::cout << "Le montant est exact. Pas de remboursement nécessaire." << std::endl;
    }

    return 0;
}
