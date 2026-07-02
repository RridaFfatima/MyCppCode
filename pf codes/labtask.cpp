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
    fstream oof("pakcities.bin", ios::in | ios::out | ios::binary);
    if (!oof) {
        cout << "error!!!!!";
        return 0;
    }
    oof.seekg(0, ios::end);
    long size = oof.tellg();
    cout << "File size: " << size << endl;
    oof.clear();
    int recordSize = sizeof(city);
    int totalRecords = size / recordSize;
    cout << "Record count: " << totalRecords << endl;

    if (totalRecords < 3) {
        cout << "Insufficient records" << endl;
    } 
    
	else
	 {
        cout << "Last 3 records: "<<endl;
        city abc;
        oof.seekg((totalRecords - 3) * recordSize, ios::beg);
        for (int i = 0; i < 3; i++) {
            oof.read((char*)&abc, recordSize);
            cout.write(abc.name, 21);
            cout << endl << abc.lat << endl << abc.lon << endl;
        }
    }

    oof.seekg(0, ios::beg);
    city prev, curr;
    bool first = true;

    while (oof.read((char*)&curr, sizeof(city))) {
        if (strcmp(curr.name, "Mingora") == 0) {
            if (!first) {
                strcpy(prev.name, "jalal abad");
                prev.lat = 34.501341;
                prev.lon = 73.0143306;

                oof.seekp(-2L * sizeof(city), ios::cur); 
                oof.write((char*)&prev, sizeof(city));
                oof.flush();

                cout << "Record before Mingora updated: ";
                cout.write(prev.name, 21);
                cout << endl << prev.lat << endl << prev.lon << endl;
            } 
			else 
			{
                cout << "No record" << endl;
            }
            break;
        }
        prev = curr;
        first = false;
    }
    oof.close();
    return 0;
}