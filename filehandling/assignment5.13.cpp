#include<iostream>
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

     for(int n=0; n<MonthofShipment; n++){
        long sum=0;

for(int i=0; i<OriginCountry; i++){
    for(int j=0; j<DestinationCountry; j++){

         for(int k=0; k<ProductCategory; k++){

             for(int l=0; l<TransportMode; l++){

                 for(int m=0; m<TariffRateApplied; m++){

                        sum+=trade[i][j][k][l][m][n];
                     }
                    }
                }
            }
        }
        double average=0.0;
        average=sum/OriginCountry/DestinationCountry/ProductCategory/TransportMode/TariffRateApplied;
        cout<<"average for month "<< n+1 << " is : "<<average<<endl;

    
    }
   
    return 0; 
}
                    


                    

                    


                    


 