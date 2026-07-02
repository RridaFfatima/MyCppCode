#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
const int OriginCountry = 12;
const int DestinationCountry = 12;
 const int ProductCategory = 5; 
const int TransportMode = 3;
 const int TariffRateApplied = 5;
 const int MonthofShipment = 12;
 srand(time(0));
string countriesname[OriginCountry];
string path= "/Users/nadeem/Documents/Mycode/countries of the world.csv";
 ifstream ifile(path);
 if(!ifile){
    cout<<" file not open"<<endl;
    return 0;
 }
string readline;
    getline(ifile,readline);
    for(int i=0; i<OriginCountry && getline(ifile,readline); i++){
        countriesname[i]=readline.substr(0, readline.find(','));

}
ifile.close();


 int trade[OriginCountry][DestinationCountry][ProductCategory][TransportMode][TariffRateApplied][MonthofShipment];

 for(int i=0; i<OriginCountry; i++){

     for(int j=0; j<DestinationCountry; j++){

         for(int k=0; k<ProductCategory; k++){

             for(int l=0; l<TransportMode; l++){

                 for(int m=0; m<TariffRateApplied; m++){

                     for(int n=0; n<MonthofShipment; n++){

                        trade[i][j][k][l][m][n]=(rand()%90000 + 1)+30000;

                     }
                    }
                }
            }
        }
    }
    int count[OriginCountry][TariffRateApplied]={0};

 for(int i=0; i<OriginCountry; i++){

     for(int j=0; j<DestinationCountry; j++){

         for(int k=0; k<ProductCategory; k++){

             for(int l=0; l<TransportMode; l++){

                 for(int m=0; m<TariffRateApplied; m++){

                     for(int n=0; n<MonthofShipment; n++){
                        int tarrifrate=rand()%(100-0+1)+0;
                        int slab=tarrifrate/20;

                        count[i][slab]++;
                     }
                    }
                }
            }
        }
    }
cout<<"origin. country wisw etrade(count)"<<endl;
for(int i=0; i<OriginCountry; i++){
    cout<<"country: "<<countriesname[i]<<endl;
    cout<<" slab 1 (0-20%): "<<count[i][0]<<endl;
     cout<<" slab 2 (21-40%): "<<count[i][1]<<endl;
    cout<<" slab 3 (41-60%): "<<count[i][2]<<endl;
    cout<<" slab 4 (61-80%): "<<count[i][3]<<endl;
    cout<<" slab 5 (81-100%): "<<count[i][4]<<endl;

}
return 0;
}
