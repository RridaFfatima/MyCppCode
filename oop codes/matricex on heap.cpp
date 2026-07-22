/*create , input, display,  add, delete, subtract, multiply,transpose,resize,  symmetric,diagonal,remove value, add value  ,summof row/col,identity,min,max,pattern print, searcg,boundary 0, replace with zeros*/
#include<iostream>
#include<string>
using namespace std;
struct matrix{
    int ** data;
    int rows; 
    int cols;
};
void creatematrix(matrix &m, int r, int c){
    m.data= new int *[r];
    for(int i=0; i<r; i++){
        m.data[i]=new int[c];
    }
    m.rows=r;
    m.cols=c;
}
void inputmatrix(matrix &m){
    for(int i=0; i<m.rows; i++){
        for(int j=0; j<m.cols; j++){
            cin>>m.data[i][j];
        }
    }
}
void displaymatrix(matrix &m){
    for(int i=0; i<m.rows; i++){
        for(int j=0; j<m.cols; j++){
            cout<<m.data[i][j]<<" ";
        }
        cout<<endl;
    }
}
matrix addmatrix(matrix &a, matrix &b){
    matrix m;
    creatematrix(m,a.rows,a.cols);
    if(!(a.rows==b.rows && a.cols == b.cols)){
        cout<<"addition not comparable."<<endl;
    }
    
    for(int i=0; i<a.rows; i++){
        for(int j=0; j<a.cols; j++){
            m.data[i][j]=a.data[i][j] + b.data[i][j];
        }
    }
    return m;
}
void deletematrix(matrix &m){
    for(int i=0; i<m.rows; i++){
        delete [] m.data[i];
    }
    delete [] m.data;

}
matrix subtractmatrix(matrix &a, matrix &b){
    matrix m;
    creatematrix(m,a.rows,a.cols);
    if(!(a.rows==b.rows && a.cols == b.cols)){
        cout<<"addition not comparable."<<endl;
    }
    
    for(int i=0; i<a.rows; i++){
        for(int j=0; j<a.cols; j++){
            m.data[i][j]=a.data[i][j] - b.data[i][j];
        }
    }
    return m;
}
matrix transposematrix(matrix &m ){
    matrix t;
    creatematrix(t, m.cols,m.rows);
    for(int i=0; i<m.rows; i++){
        for(int j=0;j<m.cols; j++){
            t.data[j][i]=m.data[i][j];
        }
    }
    return t;
}
matrix multiplymatrix(matrix &a, matrix &b){
    matrix m;
    creatematrix(m,a.rows,b.cols);
    if(a.rows!= b.cols){
        cout<<"multiplication not comparable."<<endl;
    }
    for(int i=0; i<a.rows; i++){
        for(int j=0; j<b.cols; j++){
            m.data[i][j]=0;
            for(int k=0; k<a.cols; k++){
                m.data[i][j]+=a.data[i][k]*b.data[k][j];
            }
        }
    }
    return m;
}
void resize(matrix &m, int nrows, int ncols){
    int ** newdata=new int *[nrows];
    for(int i=0 ;i<nrows; i++){
        newdata[i]=new int[ncols];
        for(int j=0; j<ncols; j++){
            if(i<m.rows && j<m.cols){
            newdata[i][j]=m.data[i][j];
            }
            else{
                newdata[i][j]=0;
            }
        }

    }
    for(int i=0; i<m.rows; i++){
        delete [] m.data[i];
    }
    delete [] m.data;
    m.rows=nrows;
    m.cols=ncols;
    m.data=newdata;

}
bool issymmetric(matrix &m){
    if(m.rows!=m.cols){
        return false;
    }
    for(int i=0; i<m.rows; i++){
        for(int j=0; j<m.cols; j++){
            if(m.data[i][j]!=m.data[j][i]){
                return false;
            }
            
        }
    }
    return true;
}
bool isdiagonal(matrix &m){
    for(int i=0; i<m.rows; i++){
        for(int j=0;j<m.cols; j++){
            if(i!=j && m.data[i][j]!=0){
                return false;
            }
        }

    }
    return true;
}
void addvalue(matrix &m, int rows, int col, int value){
    if(rows<0 || col<0){
        return;
    }
    int newrows=m.rows;
    int newcol=m.cols;

    if(rows>m.rows){
        newrows=m.rows+1;
        
    }
    if(col>m.cols){
        newcol=m.cols+1;
    }
    resize(m,newrows,newcol);
    m.data[rows][col]=value;
}
void removevalue(matrix &m, int value){
    for(int i=0; i<m.rows; i++){
        for(int j=0; j<m.cols; j++){
            if(m.data[i][j]==value){
                for(int k=i; k<m.rows; k++){
                    int starting_column;
                    if(k==i){
                        starting_column=j;
                    }
                    else{
                        starting_column=0;
                    }
                    for(int l=starting_column;l<m.cols; l++){
                        if(k==m.rows-1 && l==m.cols-1){
                            m.data[k][l]=0;
                        }
                        else if(l==m.cols-1){
                            m.data[k][l]=m.data[k+1][0];
                        }
                        else {
                            m.data[k][l]=m.data[0][l+1];
                        }
                    }
                }
return ;
            }
        }
    }

}
int main(){
    matrix m1;
    creatematrix(m1,3,3);
    cout<<"enter first matrix"<<endl;
    inputmatrix(m1);
    displaymatrix(m1);

    matrix m2;
    creatematrix(m2,3,3);
        cout<<"enter 2nd matrix"<<endl;

    inputmatrix(m2);
    displaymatrix(m2);

    matrix result =addmatrix(m1,m2);
    displaymatrix(result);

    matrix rresult=subtractmatrix(m1,m2);
    displaymatrix(rresult);
    
    matrix rrresult=transposematrix(m1);
    displaymatrix(rrresult);

    matrix ans=multiplymatrix(m1,m2);
    displaymatrix(ans);

    if(!(issymmetric(m1))){
        cout<<"no"<<endl;
    }
    else{
        cout<<"yes"<<endl;
    }

    if(!(isdiagonal(m2))){
        cout<<"no"<<endl;
    }
    else{
        cout<<"yes"<<endl;
    }

    resize(m1,4,4);
    deletematrix(m1);
    deletematrix(m2);
    deletematrix(result);
    deletematrix(rresult);
    deletematrix(rrresult);
    deletematrix(ans);
    addvalue(m1,4,4,7);
    displaymatrix(m1);
    removevalue(m1,4);
    displaymatrix(m1);



    

    return 0;
}