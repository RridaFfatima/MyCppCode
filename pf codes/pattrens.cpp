#include<iostream>
#include<string>
using namespace std;
void star(int n){
    for(int i=0;i<n; i++){
        cout<<'*';

    }
    return;
}
void linesofstars (int K, int M){
    for(int i=0; i<K; i++){
        for(int j=0; j<M; j++)
    {
        cout<<'*';
        
    }
    cout<<endl;
    }
    return;
}
void stars(int K, int M){
    int i=1;
    while(i<=K){
        star(M);
        cout<<endl;
        i++;
    }
    return;
}
void numbers(int n){
    for( int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
        cout<<j;
    }
    cout<<endl;
}
}
    
    
    void rpattern(int n){
        for(int i=1;i<=n;i++){
            for(int s=0; s<n-i; s++){
                cout<<" ";
            }
            for(int j=1; j<=i; j++){
                cout<<j;
            }
        cout<<endl;
        }
        return;
    }
    void same(int N){
        for(int i=1; i<=N; i++){
            for(int j=1; j<=N;j++){
                cout<<j;
            }
            cout<<endl;
        }
    }
    void loop(int n){
    for(int i=1; i<=n;i++){
        
        for(int j=i; j<n+i;j++){
cout<<j;
        
        
        }
        cout<<endl;
    }
    return;
}
void diamond(int n){
    for(int i=1; i<=n; i++){
    
        for(int s=1; s<=n-i; s++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        for(int j=i-1; j>=1; j--){
            cout<<j;
        }
        cout<<endl;
    }
    return ;
}
void fulldaimond(int n){
     for(int i=1; i<=n; i++){
    
        for(int s=1; s<=n-i; s++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        for(int j=i-1; j>=1; j--){
            cout<<j;
        }
        cout<<endl;
    }
    for(int i=n-1; i>=1;i--){
        for(int s=1; s<=n-i; s++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        for(int j=i-1; j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
return ;
}

int main(){
    int N;
    cout<<"enter an integer ";
    cin>>N;
    star(N);
    cout<<endl;
    int k;
    cout<<"enter no. of lines ";
    cin>>k;
    int m;
    cout<<"enter no. of stars ";
    cin>>m;
    linesofstars(k,m);
    cout<<endl;

    stars(k,m);

int l;
cout<<"enter no. of lines ";
cin>>l;
numbers(l);
cout <<endl;
rpattern(l);
cout<<endl;
same(l);
cout<<endl;
loop(l);
diamond(l);
fulldaimond(l);
        return 0;
}