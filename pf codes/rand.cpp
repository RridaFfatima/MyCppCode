#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // seed random

    const int OriginCountry = 12;
    const int DestinationCountry = 12;
    const int ProductCategory = 5; 
    const int TransportMode = 3;
    const int TariffRateApplied = 5; // 5 slabs
    const int MonthofShipment = 12;

    // --- Step 1: Read country names ---
    string countriesname[OriginCountry];
    ifstream ifile("countries of the world.csv");
    if (!ifile) {
        cout << "File not open!" << endl;
        return 1;
    }

    string readline;
    getline(ifile, readline); // skip header

    for (int i = 0; i < OriginCountry && getline(ifile, readline); i++) {
        countriesname[i] = readline.substr(0, readline.find(','));
    }
    ifile.close();

    // --- Step 2: Create 6D array of trade values ---
    int trade[OriginCountry][DestinationCountry][ProductCategory][TransportMode][TariffRateApplied][MonthofShipment];

    for (int i = 0; i < OriginCountry; i++)
        for (int j = 0; j < DestinationCountry; j++)
            for (int k = 0; k < ProductCategory; k++)
                for (int l = 0; l < TransportMode; l++)
                    for (int m = 0; m < TariffRateApplied; m++)
                        for (int n = 0; n < MonthofShipment; n++)
                            trade[i][j][k][l][m][n] = (rand() % 90000 + 1) + 30000; // 30000–120000

    // --- Step 3: Compute country-wise slab counts ---
    int count[OriginCountry][TariffRateApplied] = {0};

    for (int i = 0; i < OriginCountry; i++)
        for (int j = 0; j < DestinationCountry; j++)
            for (int k = 0; k < ProductCategory; k++)
                for (int l = 0; l < TransportMode; l++)
                    for (int m = 0; m < TariffRateApplied; m++)
                        for (int n = 0; n < MonthofShipment; n++) {
                            int tariffRate = rand() % 101; // 0–100%
                            int slab = tariffRate / 20;     // 0–5
                            if (slab > 4) slab = 4;        // cap at 4
                            count[i][slab]++;
                        }

    // --- Step 4: Display results ---
    cout << "Origin Country wise trade counts per Tariff Slab:" << endl;
    cout << "-------------------------------------------------" << endl;

    for (int i = 0; i < OriginCountry; i++) {
        cout << "Country: " << countriesname[i] << endl;
        cout << " Slab 1 (0-20%): " << count[i][0] << endl;
        cout << " Slab 2 (21-40%): " << count[i][1] << endl;
        cout << " Slab 3 (41-60%): " << count[i][2] << endl;
        cout << " Slab 4 (61-80%): " << count[i][3] << endl;
        cout << " Slab 5 (81-100%): " << count[i][4] << endl;
        cout << "-------------------------------------------------" << endl;
    }

    return 0;
}
