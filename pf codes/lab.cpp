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
    fstream file("pakcities.txt", ios::in | ios::out | ios::binary);
    if (!file) {
        cout << "file not open"<<endl;
        return 0;
    }
    file.seekg(0, ios::end);
    long size = file.tellg();
    cout << " size is : " << size << endl;
    file.clear();
    int recordSize = sizeof(city);
    int totalRecords = size / recordSize;
    cout << "Record is : " << totalRecords << endl;

    if (totalRecords < 3) {
        cout << "Insufficient records" << endl;
    } 
    
	else
	 {
        cout << "Last 3 records are : "<<endl;
        city abc;
        file.seekg((totalRecords - 3) * recordSize, ios::beg);
        for (int i = 0; i < 3; i++) {
            file.read((char*)&abc, recordSize);
            cout.write(abc.name, 21);
            cout << endl << abc.lat << endl << abc.lon << endl;
        }
    }

    file.seekg(0, ios::beg);
    city prev, curr;
    bool first = true;

    while (file.read((char*)&curr, sizeof(city))) {
        if (strcmp(curr.name, "Mingora") == 0) {
            if (!first) {
                strcpy(prev.name, "jalal abad");
                prev.lat = 34.501341;
                prev.lon = 73.0143306;

                file.seekp(-2L * sizeof(city), ios::cur); 
                file.write((char*)&prev, sizeof(city));
                file.flush();

        
            } 
			else 
			{
                cout << "No record found befor mingora" << endl;
            }
            break;
        }
        prev = curr;
        first = false;
    }
    file.close();
    return 0;
}