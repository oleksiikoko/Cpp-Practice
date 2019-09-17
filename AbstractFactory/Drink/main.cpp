#include "Client.hpp"
#include "Factory/CocaColaFactory.hpp"
#include "Factory/PepsiColaFactory.hpp"
#include "Factory/SchweppesFactory.hpp"


int main() {
    Client* colaClient = new Client(new CocaColaFactory);
    colaClient->Run();
    std::cout << '\n';
    Client* pepsiClient = new Client(new PepsiColaFactory);
    pepsiClient->Run();
    std::cout << '\n';
    Client* schweppesClient = new Client(new SchweppesFactory);
    schweppesClient->Run();
    std::cout << '\n';
}