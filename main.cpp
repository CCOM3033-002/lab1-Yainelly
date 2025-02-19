//Yainelly Ortiz Serrano, @Yainelly
// 801-23-1813

#include <iostream>
#include <string>
#include <iomanip>

using namespace std; 

int main () {

    // le ponemos valor a cada variable 

    string movieName; 

    int ticketAdulto, ticketChild;
    double priceAdulto = 10.00, priceChild = 6.00, theaterProfit = 0.20;

    // pedimos el nombre de la pelicula y la cantidad de tickets  vendidos (de adulto y de niño)
    
    cout << "Enter the movie's name: ";
    getline(cin, movieName); 
    
    cout << "Adult tickets sold: ";
    cin >> ticketAdulto;
    
    cout << "Child tickets sold: ";
    cin >> ticketChild;

    // hacemos el calulo del grossprofit, del netprofit y del sobrante 

    double grossProfit = (ticketAdulto * priceAdulto) + (ticketChild * priceChild);
    double netProfit = grossProfit * theaterProfit;
    double remainder = grossProfit - netProfit;

    // se hace el cout del calculo con toda la informacion dada
    
    cout << fixed << setprecision(2);
    cout << "Movie's name: " << movieName << endl;
    cout << "Adult tickets sold: " << ticketAdulto << endl; 
    cout << "Child tickets sold: " << ticketChild << endl;
    cout << "Gross box office profit: $" << grossProfit << endl; 
    cout << "net box office profit: $" << netProfit << endl; 
    cout << "Amount paid to distributor $" << remainder << endl;

return 0;

}
