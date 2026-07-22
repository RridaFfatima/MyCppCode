#include<iostream>
#include<string>
using namespace std;
class Matrix{
    private:

    int row;
    int col;
    int ** data;


    public:

    Matrix();
    Matrix(const Matrix &);
    Matrix(int, int);
    void setRow(int);
    void setCol(int);
    int getRow() const;
    int getCol() const;
    int& at(const int r, const int c); 

    void printMatrix() const;
    int isIdentity() const;
    bool isRectangular()const ;
    bool isDiagonal()const ;
    bool isNullMatrix() const ;
    bool isLowerTriangular() const;
    bool isUpperTriangular() const;
    bool isTriangular()const ;
    Matrix getMatrixCopy()const;
    bool isEqual(const Matrix m2) const;
    void reSize(const int newrow, const int newcol);
    bool isSymmetric() const;
    bool isSkewSymmetric()const ;
    ~Matrix();
    Matrix Transpose() const;
     Matrix add(const Matrix ) const;
    Matrix minus(const Matrix ) const;
    Matrix multiply(const Matrix ) const;
};


   Matrix :: Matrix (){
        row=0; 
        col=0;
        data = new int *[row];
        for(int i=0; i<row; i++){
            data[i]=new int [col];
        }

    }
  Matrix ::  Matrix (const Matrix & ref){
        row =ref.row;
        col=ref.col;
        data =new int *[row];
        for(int i=0; i<row; i++){
            data[i]=new int [col];
            for(int j=0; j<col; j++){
            data [i][j]=ref.data[i][j];
        }

    }
        
    }
 Matrix ::   Matrix(int i, int j){
        row=i;
        col=j;
         data = new int *[row];
        for(int i=0; i<row; i++){
            data[i]=new int [col];
        }

    }
   void Matrix::  setRow(int i){
        row=i;

    }

    void Matrix::  setCol(int j){
        col=j;

    }
    int Matrix:: getRow()const{
        return row;

}
    int Matrix:: getCol()const{
        return col;
    }
    int &  Matrix:: at(const int r,  const int c){
        return data[r][c];
    }
    void  Matrix:: printMatrix()const{
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                cout<<data[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    
     int  Matrix:: isIdentity()const{
        if(row!=col){
            return 0;
        }
        for(int i=0 ;i< row; i++){
            for(int j=0; j<col; j++){
                if(i==j && data[i][j]!=1){
                    return 0;
                }
                if(i!=j && data[i][j] != 0){
                    return 0;
                }
            }
        }
        return 1;
     }
     bool Matrix:: isRectangular()const{
        if(row==col){
            return false;
        }
        return true;
     }
     bool Matrix:: isDiagonal()const{
         if(row!=col){
            return false;
        }
        for(int i=0 ;i< row; i++){
            for(int j=0; j<col; j++){
                if(i!=j && data[i][j] !=0){
                    return false;
                }

     }
    }
    return true;
}

bool Matrix:: isNullMatrix() const{
    for(int i=0 ;i< row; i++){
         for(int j=0; j<col; j++){
            if(data[i][j] !=0){
                return false;
            }
        }
    }
    return true;
}

bool Matrix:: isLowerTriangular()const {
     if(row!=col){
            return false;
        }
        for(int i=0 ;i< row; i++){
            for(int j=0; j<col; j++){
                if(i<j && data[i][j] != 0){
                    return false;

                }

}
        }
        return true;

    }
    bool Matrix::  isUpperTriangular()const {
     if(row!=col){
            return false;
        }
        for(int i=0 ;i< row; i++){
            for(int j=0; j<col; j++){
                if(i>j && data[i][j] != 0){
                    return false;

                }

}
        }
        return true;

    }
    bool Matrix:: isTriangular()const{
        return isLowerTriangular() || isUpperTriangular();
    }
    Matrix  Matrix::getMatrixCopy()const{
        Matrix c(row,col);
        for(int i=0 ;i< row; i++){
            for(int j=0; j<col; j++){
                c.data[i][j]=data[i][j];
            }
        }
        

        return c;
    }
    bool Matrix:: isEqual(const Matrix m2)const{
        if(row != m2.row || col!= m2.col){
            return false;
        }
        for(int i=0 ;i< row; i++){
            for(int j=0; j<col; j++){
                if(data[i][j] != m2.data[i][j]){
                    return false;
                }
            }
    }
    return true;
}
void Matrix:: reSize(const int newrow, const int newcol){
    int ** newdata= new int *[newrow];
    for(int i=0 ; i<newrow; i++){
        newdata[i] = new int[newcol];
        for(int j=0;j < newcol; j++){
            if(i<row && j <col){
            newdata[i][j] =data[i][j];
        }
        else{
            newdata[i][j]=0;
        }
    }
    delete[] data;
    row = newrow;
    col= newcol;
    data =newdata;
}
return ;
}
bool Matrix:: isSymmetric()const{
     if(row!=col){
            return false;
        }
    for(int i=0 ;i< row; i++){
            for(int j=0; j<col; j++){
                if(data[i][j]!=data[j][i]){
                    return false;
                }
}
    }
    return true;
}

bool Matrix:: isSkewSymmetric()const{
     if(row!=col){
            return false;
        }
    for(int i=0 ;i< row; i++){
            for(int j=0; j<col; j++){
                if(data[i][j]!=-data[j][i]){
                    return false;
                }
}
    }
    return true;
}
Matrix:: ~Matrix(){
    for(int i=0; i<row; i++){
        delete [] data[i];
    }
    delete [] data;

}

Matrix Matrix:: Transpose()const{
    Matrix t (col, row);
    for(int i=0 ;i< row; i++){
         for(int j=0; j<col; j++){
            t.data[j][i]=data[i][j];
         }
        }
        return t;
    }
    Matrix Matrix::  add(const Matrix m2)const{
        Matrix m(row,col);
        if(row!=m2.row || col!= m2.col){
            cout<<"not comparable for addition"<<endl;
            m.row=m.col=0;
            m.data=nullptr;
            return m;
        } 
         for(int i=0 ;i< row; i++){
         for(int j=0; j<col; j++){
            m.data[i][j]=data[i][j] + m2.data[i][j];

    }
    cout<<endl;
}
return m;
    }

 Matrix  Matrix:: minus(const Matrix m2)const{
        Matrix m(row,col);
        if(row!=m2.row || col!= m2.col){
            cout<<"not comparable for subtraction"<<endl;
            m.row=m.col=0;
            m.data=nullptr;
            return m;
        } 
         for(int i=0 ;i< row; i++){
         for(int j=0; j<col; j++){
            m.data[i][j]=data[i][j] - m2.data[i][j];

    }
    cout<<endl;
}
return m;
    }
 Matrix  Matrix:: multiply(const Matrix m2)const{
     Matrix m(row,m2.col);
        if(col!=m2.row ){
            cout<<"not comparable for multiplication"<<endl;
            m.row=m.col=0;
            m.data=nullptr;
            return m;
        } 
        for(int i=0 ;i< row; i++){
         for(int j=0; j<m2.col; j++){
            m.data[i][j] =0;
            for(int k=0; k<col; k++){
                m.data[i][j] += data[i][k] * m2.data[k][j];
            }

 }
}
return m;
 }











int main(){
     Matrix m1(3,3);
    cout<<"enter elements of first matrix:" <<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
       cin>> m1.at(i,j);
    }
}
    m1.printMatrix();

    Matrix m2(3,3);

    cout<<"enter elements of second  matrix:" <<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
        cin>>m2.at(i,j);
    }
}
    m2.printMatrix();



   int i= m1.isIdentity();
   cout<<"m1 is identity?"<<i<<endl;

   if(!(m1.isDiagonal())){
    cout<<" m1 is not diagonal"<<endl;

   }
   else{
    cout<<"m1 is diagonal"<<endl;
   }


   if(!(m1.isEqual(m2))){
    cout<<" m1 is not equal to m2"<<endl;

   }
   else{
    cout<<"m1 is equal to m2"<<endl;
   }

   if(!(m1.isNullMatrix())){
    cout<<" m1 is not null"<<endl;

   }
   else{
    cout<<"m1 is null"<<endl;
   }

   if(!(m1.isRectangular())){
    cout<<"m1 is not rectangular"<<endl;

   }
   else{
    cout<<"m1 is rectangular"<<endl;
   }

   Matrix t=m1.Transpose();
   cout<<" trasnpose of matrix m1"<<endl;
   t.printMatrix();

    Matrix a =m1.add(m2);
    cout<<" addition of m1 and m2"<<endl;
    a.printMatrix();

if(!(m1.isSymmetric())){
    cout<<" m1 is not symmetric"<<endl;

   }
   else{
    cout<<"m1 is symemetric"<<endl;
   }
   if(!(m2.isSkewSymmetric())){
    cout<<" m1 is not skewsymmetric"<<endl;

   }
   else{
    cout<< "m1 is skew symmetric"<<endl;
   }




   if(!(m1.isUpperTriangular())){
    cout<<" m1 is not  upper triangular"<<endl;

   }
   else{
    cout<<"m1 is upper triangular"<<endl;
   }
   if(!(m2.isLowerTriangular())){
    cout<<" m2 is not lower triangular"<<endl;

   }
   else{
    cout<<"m2 is lower triangular"<<endl;
   }
   if(!(m2.isTriangular())){
    cout<<" m2 is not triangular"<<endl;

   }
   else{
    cout<<" m2 is  triangular"<<endl;
   }


Matrix m= m1.multiply(m2);
cout<<" multipliication m1 x m2"<<endl;
m.printMatrix();
Matrix e=m1.minus(m2);
cout<<" subtraction m1-m2"<<endl;
e.printMatrix();
Matrix copy=m1.getMatrixCopy();
cout <<" copy matrix "<<endl;
copy.printMatrix();






return 0;
}

