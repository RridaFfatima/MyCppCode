#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<fstream>
using namespace std;
int randdom(){
    int rv=rand()%70+40;
    return rv>100?100-rand()%5:rv;
}
void subaverage(int marks[4][8][6][50]){
            int subsum[6];

    for(int sub=0; sub<6; sub++){
        subsum[sub]=0;
        for(int dep=0; dep<4; dep++){
            for(int sem=0; sem<8; sem++){
                for(int stud=0; stud<50; stud++){
                    subsum[sub]+=marks[dep][sem][sub][stud];
                }
            }
        }
    }
    cout<<"subject wise average"<<endl;
    for(int subb=0; subb<6;subb++){
    cout<<"sub "<<subb<<" "<<double(subsum[subb])/4.0/8.0/50.0<<endl;
}
cout<<endl;
}
void semaverage(int marks[4][8][6][50]){
            int semsum[8];

    for(int sem=0; sem<8; sem++){
        semsum[sem]=0;
                        for(int dep=0; dep<4; dep++){
            for(int sub=0; sub<6; sub++){
                for(int stud=0; stud<50; stud++){
                    semsum[sem]+=marks[dep][sem][sub][stud];
                }
            }
        }
    }
    cout<<"semester wise average"<<endl;
    for(int sem=0; sem<8;sem++){
    cout<<"sem "<<sem<<" "<<double(semsum[sem])/4.0/6.0/50.0<<endl;
}
}
void depaverage(int marks[4][8][6][50]){
            int depsum[4];
            
            for(int dep=0; dep<4; dep++){

        depsum[dep]=0;

             for(int sem=0; sem<8; sem++){
            for(int sub=0; sub<6; sub++){
                for(int stud=0; stud<50; stud++){
                    depsum[dep]+=marks[dep][sem][sub][stud];
                }
            }
        }
    }
    cout<<"department wise average"<<endl;
    for(int dep=0; dep<4;dep++){
    cout<<"dep "<<dep<<" "<<double(depsum[dep])/8.0/6.0/50.0<<endl;
}
cout<<endl;
}
void semaverage4dep(int marks[4][8][6][50],int dep){
            int semsum[8];

    for(int sem=0; sem<8; sem++){
        semsum[sem]=0;
            for(int sub=0; sub<6; sub++){
                for(int stud=0; stud<50; stud++){
                    semsum[sem]+=marks[dep][sem][sub][stud];
                }
            }
        }
    
    cout<<"semester wise average"<<endl;
    for(int sem=0; sem<8;sem++){
    cout<<"sem "<<sem<<" "<<double(semsum[sem])/(6.0*50.0)<<endl;
}
}
void result(int marks[4][8][6][50],int dep,int stud){
    int total=0;

    for(int sem=0; sem<8; sem++){
                    for(int sub=0;sub<6; sub++){

        total+=marks[dep][sem][sub][stud];
    }
}
cout<<" reult of student no. "<<stud<<" of dep "<<dep<<" is "<<fixed<<setprecision(2)<<total<<endl;
}
int main(){
    srand(time(0));
    int marks[4][8][6][50];
    for(int i=0; i<4; i++){
        for(int j=0; j<8;j++){
            for(int k=0; k<6; k++){
                for(int l=0; l<50; l++){

                    marks[i][j][k][l]=randdom();
                }
            }
        }
    }
    ofstream ofl;
    ofl.open("marks.txt");
    for(int i=0; i<4; i++){
        ofl<<"departments"<<i<<endl;
        for(int j=0; j<8;j++){
            ofl<<"semesters"<<j<<endl;
            for(int k=0; k<6; k++){
                            ofl<<"subjects"<<j<<endl;

                for(int l=0; l<50; l++){
                                ofl<<"students"<<j<<endl;
                                ofl<<"marks"<<marks[i][j][k][l]<<endl;
                }
            }
        }
    }
    ofl.close();



    subaverage(marks);
    semaverage(marks);
    depaverage(marks);
    semaverage4dep(marks,3);
    result(marks,2,49);
    return 0;
}
