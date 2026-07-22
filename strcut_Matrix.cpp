//bsdsf25m050
#include<iostream>
#include<string>
using namespace std;
struct Matrix{
    int rows;
    int cols;
    int **data;
};
void createMatrix(Matrix &m, const int row=1, const int col=1){
     m.cols=col;
    m.rows=row;
   
    m.data=new int* [m.rows];
    for(int i=0; i<m.rows; i++){
        m.data[i]=new int [m.cols];
    }
    
}
int& at(Matrix &m, const int r, const int c) {
    return m.data[r][c];
}

void PrintMatrix(const Matrix m){
    for(int i=0; i<m.rows; i++){
        for(int j=0; j<m.cols; j++){
            cout<<m.data[i][j]<<" ";
        }
        cout<<endl;
    }
}
int isIdentity (const Matrix m){
    if(m.rows!=m.cols){
        return 0;
    }
     for(int i=0; i<m.rows; i++){
        for(int j=0; j<m.cols; j++){
            if(i!=j && m.data[i][j]!=0 )
            return 0;
                if(i==j && m.data[i][j]!=1){
            return 0;
            }
           
        }
    }
    return 1;
}
bool isRectangular (const Matrix m){
    if (m.rows==m.cols){
        return false;
    }
    return true;

}
bool isDiagonal (const Matrix m){
    if(m.rows!=m.cols){
        return false;
    }

    bool isdiagonal =true;
    for(int i=0; i<m.rows; i++){
        for(int j=0; j<m.cols; j++){
            if(i!=j && m.data[i][j]!=0){
                isdiagonal=false;
            }
        }
    }

    return isdiagonal;
}
bool isNullMatrix (const Matrix m){
    bool isnull=true;
    for(int i=0; i<m.rows; i++){
        for(int j=0; j<m.cols; j++){
            if(m.data[i][j]!=0){
                isnull=false;
            }
}
    }
    return isnull;
}
bool isEqual(const Matrix m1 , const Matrix m2){
    if(m1.rows!=m2.rows || m1.cols!=m2.cols){
        return false;
    }
     for(int i=0; i<m1.rows; i++){
        for(int j=0; j<m1.cols; j++){
            if(m1.data[i][j]!= m2.data[i][j]){
                 return false;
            }
        }
    }
    return true;

}
void freeMatrix (Matrix & m){
    for (int i=0 ;i<m.rows; i++){
        delete [] m.data[i];
    }
    delete [] m.data;
}
Matrix Transpose (const Matrix m){
    Matrix t;
    createMatrix(t, m.cols,m.rows);
    for(int i=0; i<m.rows; i++){
        for(int j=0; j<m.cols; j++){
            t.data[j][i]=m.data[i][j];
        }
        cout<<endl;
    }
    return t;

}
Matrix Minus (const Matrix m1, const Matrix m2){
    Matrix m;

if(m1.rows!=m2.rows || m1.cols!=m2.cols){
    m.rows=m.cols=0;
    m.data=nullptr;
    return m;
    
}
createMatrix(m, m1.rows,m2.cols);
for(int i=0; i<m1.rows; i++){
        for(int j=0; j<m1.cols; j++){
            m.data[i][j]=m1.data[i][j]- m2.data[i][j];
            
        }
    }
    return m;

}
void reSize (Matrix & m, const int newrow, const int newcol ){
    int** newdata=new int*[newrow];
    for(int i=0; i<newrow; i++){
        newdata[i]=new int [newcol];
        for(int j=0; j<newcol; j++){
            if(i< m.rows && j<m.cols){
            newdata[i][j]=m.data[i][j];
            }
            else{
             newdata[i][j]=0;
            }

        }

    }
    delete[] m.data;
    m.data=newdata;
    m.rows=newrow;
    m.cols=newcol;
}
bool isSymmetric (const Matrix m){
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

bool isSkewSymmetric (const Matrix m){
if(m.rows!=m.cols){
        return false;
    }
    for(int i=0; i<m.rows; i++){
        for(int j=0; j<m.cols; j++){
            if(m.data[i][j]!=-(m.data[j][i])){
                return false;
            }
        }
    }
    return true;
}
Matrix add (const Matrix m1, const Matrix m2){
    Matrix m;
   if(m1.rows!=m2.rows || m1.cols!=m2.cols){
    m.rows=m.cols=0;
    m.data=nullptr;
     
    return m;
    
}

createMatrix(m, m1.rows,m2.cols);
for(int i=0; i<m1.rows; i++){
        for(int j=0; j<m1.cols; j++){
            m.data[i][j]=m1.data[i][j]+ m2.data[i][j];
            
        }
    }
    return m;

}
Matrix multiply(const Matrix m1, const Matrix m2){
    Matrix m;
createMatrix(m, m1.rows,m2.cols);
if(m1.cols!=m2.rows)
{
    cout<<"no multiplicaton"<<endl;
    m.rows=m.cols=0;
    m.data=nullptr;
    return m;
}
for(int i=0; i<m1.rows; i++){
        for(int j=0; j<m2.cols; j++){
               m.data[i][j] = 0;  

            for(int k=0; k<m1.cols; k++){
                m.data[i][j]+=m1.data[i][k]*m2.data[k][j];
            }
        }
    }
    return m;

} 
bool isLowerTriangular (const Matrix m ){
     for(int i=0; i<m.rows; i++){
        for(int j=0; j<m.cols; j++){
            if(i<j && m.data[i][j]!=0){
                return false;
            }
        }
    }
    return true;
}
bool isUpperTriangular (const Matrix m ){
     for(int i=0; i<m.rows; i++){
        for(int j=0; j<m.cols; j++){
            if(i>j && m.data[i][j]!=0){
                return false;
            }
        }
    }
    return true;
}
bool isTriangular (const Matrix m){
    return isLowerTriangular(m) || isUpperTriangular(m);
}
    
Matrix getMatrixCopy (const Matrix m ){
    Matrix c;
    createMatrix(c, m.rows, m.cols);
    for(int i=0; i<m.rows; i++){
        for(int j=0; j<m.cols; j++){
            c.data[i][j]=m.data[i][j];
        }
    }
    
return c;
}



int main(){
    
    Matrix m1;
    createMatrix(m1,3,3);

    cout<<"enter elements of first matrix:" <<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
        cin>>at(m1,i,j);
    }
}
    PrintMatrix(m1);

    Matrix m2;
     createMatrix(m2,3,3);

    cout<<"enter elements of second  matrix:" <<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
        cin>>at(m2,i,j);
    }
}
    PrintMatrix(m2);



   int i= isIdentity(m1);
   cout<<"m1 is identity?"<<i<<endl;

   if(!(isDiagonal(m1))){
    cout<<" m1 is not diagonal"<<endl;

   }
   else{
    cout<<"m1 is diagonal"<<endl;
   }


   if(!(isEqual(m1,m2))){
    cout<<" m1 is not equal to m2"<<endl;

   }
   else{
    cout<<"m1 is equal to m2"<<endl;
   }

   if(!(isNullMatrix(m1))){
    cout<<" m1 is not null"<<endl;

   }
   else{
    cout<<"m1 is null"<<endl;
   }

   if(!(isRectangular(m1))){
    cout<<"m1 is not rectangular"<<endl;

   }
   else{
    cout<<"m1 is rectangular"<<endl;
   }

   Matrix t=Transpose(m1);
   cout<<" trasnpose of matrix m1"<<endl;
   PrintMatrix(t);

    Matrix a =add(m1,m2);
    cout<<" addition of m1 and m2"<<endl;
    PrintMatrix(a);

if(!(isSymmetric(m1))){
    cout<<" m1 is not symmetric"<<endl;

   }
   else{
    cout<<"m1 is symemetric"<<endl;
   }
   if(!(isSkewSymmetric(m2))){
    cout<<" m1 is not skewsymmetric"<<endl;

   }
   else{
    cout<< "m1 is skew symmetric"<<endl;
   }




   if(!(isUpperTriangular(m1))){
    cout<<" m1 is not  upper triangular"<<endl;

   }
   else{
    cout<<"m1 is upper triangular"<<endl;
   }
   if(!(isLowerTriangular(m2))){
    cout<<" m2 is not lower triangular"<<endl;

   }
   else{
    cout<<"m2 is lower triangular"<<endl;
   }
   if(!(isTriangular(m2))){
    cout<<" m2 is not triangular"<<endl;

   }
   else{
    cout<<" m2 is  triangular"<<endl;
   }


Matrix m= multiply(m1,m2);
cout<<" multipliication m1 x m2"<<endl;
PrintMatrix(m);
Matrix e=Minus(m1,m2);
cout<<" subtraction m1-m2"<<endl;
PrintMatrix(e);
Matrix copy=getMatrixCopy(m1);
cout <<" copy matrix "<<endl;
PrintMatrix(copy);

freeMatrix(m1);
freeMatrix(m2);
freeMatrix(a);
freeMatrix(t);
freeMatrix(m);
freeMatrix(e);
freeMatrix(copy);



return 0;
}