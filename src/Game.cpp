#include <iostream>
#include <string>
#include <algorithm>
#include "Game.h"
#include "HighScores.h"
#include "Bakery.h"
#include "Customer.h"
#include "BakeryItem.h"
#include "Bread.h"
#include "CarrotCake.h"
#include "ChocolateCake.h"
#include "Order.h"

// Read a quantity that the player inputs 
int inputQuantity()
{
    std::string quantityString;
    int quantity;
    for (int i = 0; i < 5; i++) {
        try {
            std::cin >> std::ws;
            std::getline(std::cin, quantityString);

            quantity = std::stoi(quantityString);

            if (quantity < 0) {
                std::cout << "Please enter a non-negative quantity\n";
                continue;
            }

            return quantity;
        }
        catch (const std::exception &exc)
        {
            if (i == 3) {
                std::cout << "Oh, come on ...\n";
            }
            std::cout << "Please enter a proper quantity\n";
        }
    }
    
    std::cout << "OK, that's enough. I'll assume you mean zero\n";
    return 0;
}

// Read a yes/no answer that the player inputs
// Returns true if the player inputs yes, false if the player inputs no
bool inputYesNo()
{
    std::string answer;
    for (int i = 0; i < 5; i++) {
        std::cin >> std::ws;
        std::getline(std::cin, answer);

        // We don't care about the case of the answer, so we convert it to lower case
        std::transform(answer.begin(), answer.end(), answer.begin(), tolower);
        if ((answer == "y") or (answer == "yes")) {
            return true;
        }
        else if ((answer == "n") or (answer == "no")) {
            return false;
        }
        else {
            if (i == 3) {
                std::cout << "Oh, come on ...\n";
            }
            std::cout << "Please just answer y or n\n";
        }
    }
    
    std::cout << "OK, that's enough. I'll assume you mean yes\n";
    return true;
}

Game::Game()
{
}

void Game::run()
{
    // Initialize random seed
    srand(time(nullptr));

    HighScores scores("ScoresBakery-31.txt");
    scores.readScores();
    scores.displayLeaderboard(5);

    std::cout << "\n";
    std::cout << "Welcome to Bakery-31!\n";
    std::cout << "The game where you try to maximize your bakery's profits in a limited time.\n";
    std::cout << "First, you'll have to buy ingredients. If you buy too little, you'll run out of stock, ";
    std::cout << "but if you buy too much, you'll waste your money because it won't all be sold.\n";
    std::cout << "\n";

    std::cout << "How many bags of flour would you like to buy? 50 cents a bag.\n";
    int flourQuantity = inputQuantity();

    std::cout << "How many eggs would you like to buy? 1 dollar an egg.\n";
    int eggQuantity = inputQuantity();

    std::cout << "How many bags of sugar would you like to buy? 75 cents a bag.\n";
    int sugarQuantity = inputQuantity();

    std::cout << "How much yeast would you like to buy? 2 dollars a packet.\n";
    int yeastQuantity = inputQuantity();

    std::cout << "How many carrots would you like to buy? 2 dollars a carrot.\n";
    int carrotQuantity = inputQuantity();

    std::cout << "How much chocolate would you like to buy? 3 dollars a bar.\n";
    int chocolateQuantity = inputQuantity();

    std::cout << "\n";
    std::cout << "Well done! Here is your inventory:\n";
    std::cout << "Bags of flour: " << flourQuantity << std::endl;
    std::cout << "Eggs: " << eggQuantity << std::endl;
    std::cout << "Bags of sugar: " << sugarQuantity << std::endl;
    std::cout << "Yeast: " << yeastQuantity << std::endl;
    std::cout << "Carrots: " << carrotQuantity << std::endl;
    std::cout << "Chocolate bars: " << chocolateQuantity << std::endl;
    std::cout << "\n";

    Bakery bakery("Bakery-31", flourQuantity, eggQuantity, sugarQuantity, yeastQuantity, carrotQuantity, chocolateQuantity);
    
    std::cout << "Oh no, those ingredients were expensive! Here is your current profit: $" << bakery.getProfit() << std::endl;
    std::cout << "Good thing your first customer is about to arrive.\n";

    // std::cout << "They have ordered a (bakery item), make it for them now.\n";
    // /////Recipe GUI appears
    // std::cout << "U: (types out ingredients)\n";
    // std::cout << "Your customer was impressed (bool tip).\n";
    // std::cout << "You got this from here!\n";

    // Customer order loop
    for (int i = 0; i < 5; i++) {
        std::cout << "-----------------------------------------\n";

        Customer* customer = new Customer;
        std::cout << "A new customer has arrived.\n";

        BakeryItem* item = 0;
        int randomItem = rand() % 3;
        switch (randomItem) {
        case 0:
            item = new ChocolateCake;
            break;
        case 1:
            item = new CarrotCake;
            break;
        case 2:
            item = new Bread;
            break;
        default:
            std::cout << "Error: randomItem was " << randomItem << std::endl;
            return;
        }

        std::cout << "The customer orders " << item->getName() << "\n";
        std::cout << "Do you want to turn this customer away? (y/n)\n";

        if (inputYesNo()) {
            std::cout << "OK ... that's your choice\n";
            continue;
        }

        Order order(customer, item);

        std::cout << "The customer has ordered " << item->getName() << ", make it now.\n";
        bakery.processOrder(order);

        delete customer;
        delete item;
    }
    
    std::cout << "-----------------------------------------\n";
    std::cout << "Your final profit for today is $" << bakery.getProfit() << std::endl;
    
    std::cout << "\n";
    std::cout << "Great score! What's your name?\n";
    std::string name;
    std::cin >> std::ws;
    std::getline(std::cin, name);
    scores.updateScores(name, bakery.getProfit());

    std::cout << "\n";
    scores.displayLeaderboard(5);
    scores.writeScores();
}
