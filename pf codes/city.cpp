#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct city {
    char name[21];
    double lat;
    double lon;
};

int main() {
    ofstream out("pakcities.txt", ios::binary);

    city cc;
    memset(&cc, 0, sizeof(cc));

    // Example record 1
    strncpy(cc.name, "Islamabad", 20);
    cc.lat = 33.6844;
    cc.lon = 73.0479;
    out.write((char*)&c, sizeof(c));

    // Example record 2
    memset(&c, 0, sizeof(c));
    strncpy(c.name, "Mingora", 20);
    c.lat = 34.7717;
    c.lon = 72.3600;
    out.write((char*)&c, sizeof(c));

    // Example record 3
    memset(&c, 0, sizeof(c));
    strncpy(c.name, "Peshawar", 20);
    c.lat = 34.0151;
    c.lon = 71.5249;
    out.write((char*)&c, sizeof(c));

    out.close();
    return 0;
}