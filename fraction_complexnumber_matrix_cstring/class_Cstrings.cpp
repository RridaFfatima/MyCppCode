#include<iostream>
#include<string>
using namespace std;
class CString{
    private:
    char *str;
    int size;
    public:
    CString ( ) ;
    CString (char c) ;
    CString(char*);
    CString ( const CString & );
    ~CString ( ) ;
    int getLenght ( );
    void display( ) const ;
    int find( char* substr , int start=0 ) const ;
    int find( char ch, int start=0 ) const ;
    int insert ( int index, char* substr ) ;
    int insert ( int index, char ch) ;
    CString left ( int count ) const ;
    CString right ( int count ) const ;
    int remove( int index, int count=1) ;
    int remove ( char ch ) ;
    void replace( char New ) ;
    int replace( char old, char New ) ;
    int replace( char* old, char* New ) ;
    void trim( ) ;
    void trimLeft();
    void trimRight ();
    void makeUpper ();
    void makeLower ( ) ;
    void reverse( ) ;
    void Resize( int add) ;
    CString concat ( const CString& s2 ) const ;
    void concatEqual ( const CString& s2 );
    void concatEqual ( char * s2 );
    int isEqual ( const CString & s2 ) const ;
    int isEqual ( char * s2 ) const ;
    void input ( ) ;
    char & at ( int index) ;
    int isEmpty( ) ;

    CString operator+(const CString & s2) const;
    void operator +=(const char* s2);
    void operator +=(const CString & s2);
    CString operator+(const char* const s2) const;
    CString & operator =(const CString & ref);


};
CString :: CString ( ) {
    size=1;
    str = new char[size];
    str[0]='\0';

}

//--------------------------------------------------------------------------------------------------
CString :: CString (char c) {
    size =2;
    str = new char[size];
    str[0]=c;
    str[1]='\0';

}

//--------------------------------------------------------------------------------------------------
CString :: CString(char* s) {
    int len=0;
    while(s[len]!='\0'){
        len++;
        
    }
    size =len +1;
    str =new char[size];
for(int i=0; i<size; i++){

     str[i]=s[i];
    }
}

//--------------------------------------------------------------------------------------------------
CString :: CString ( const CString & ref){
    size=ref.size;
    str =new char[size];
    int i=0; 
    while(i<size) {
    str[i]=ref.str[i];
    i++;

    }
}

//--------------------------------------------------------------------------------------------------
CString :: ~CString ( ) {
delete [] str;

}

//--------------------------------------------------------------------------------------------------
int CString :: getLenght ( ){
    int length=0;
    while(str[length]!='\0'){
        length++;
    }
    return length;

}

//--------------------------------------------------------------------------------------------------
void CString :: display( ) const {
int i=0; 
while(str[i]!='\0'){

      cout<<str[i];
      i++;
    }
}

//--------------------------------------------------------------------------------------------------
int CString :: find( char* substr , int start ) const {
int length=0;
    while(str[length]!='\0'){
        length++;
    }
    int len=0;
    while(substr[len]!='\0'){
        len++;
    }

    for( int i=start; i<=length-len; i++){
        bool match=true;
        for(int j=0; j<len; j++){
        if(str[i+j]!=substr[j]){
            match= false;
            break ;
        }
    }
    if(match){
            return i;
        }
    }
    return -1;
}

//--------------------------------------------------------------------------------------------------
int CString :: find( char ch, int start ) const {
    int length=0;
    while(str[length]!='\0'){
        length++;
    }
    int i=start;
    while(i<length){
        if(str[i]==ch){
            
            return i;
        }
        i++;
    }
    return -1;

}

//--------------------------------------------------------------------------------------------------
int CString :: insert ( int index, char* substr ) {
int length=0;
    while(str[length]!='\0'){
        length++;
    }
    int len=0;
    while(substr[len]!='\0'){
        len++;
    }

    if(index<0 || index>length){
    return 0;
    }

    char * temp=str;
    size= length + len + 1;
    str = new char[size];

    for(int i=0; i<index; i++){
        str[i]=temp[i];
    }
    for(int i=0; i<len; i++){
    str[index+i]=substr[i];
    }


    for(int i=index; i<=length ; i++){
        str[i+len]= temp[i];
        
    }
    delete [] temp;
    return  getLenght();
 
}

//--------------------------------------------------------------------------------------------------
int CString :: insert ( int index, char ch) {
    int length=0;
    while(str[length]!='\0'){
        length++;
    }
    size= length +2;
    char *temp=str;
    str = new char[size];

    if(index<0 || index>length){
    return 0;
    }
    for(int i=0; i< index ; i++){
        str[i]= temp[i];
        
    }
    str[index]=ch;
    for(int i=index; i<=length ;i++){
        str[i+1]=temp[i];
    }
    delete [] temp;
    int len = getLenght();
    return len;

}

//--------------------------------------------------------------------------------------------------
CString CString :: left ( int count ) const {
int length=0;
    while(str[length]!='\0'){
        length++;
    }
    if(count>length){
        count=length;
    }
char * s= new char[count+1];    
    for(int i =0; i<count; i++){
        s[i]=str[i];

    }
    s[count]='\0';
    return CString(s);
}

//--------------------------------------------------------------------------------------------------
CString CString :: right ( int count ) const {
     int length=0;
    while(str[length]!='\0'){
        length++;
    }  
    if(count>length){
        count=length;
    }
    char * s= new char[count+1];   


    int k=length-count;
    for(int i =0 ; i<count; i++){
        s[i]=str[k+i];
        
        
    }
        s[count]='\0';
    return CString(s);
}

//--------------------------------------------------------------------------------------------------
int CString :: remove( int index, int count) {
    int length=0;
    while(str[length]!='\0'){
        length++;
    }
    if(index<0 || index >=length || count<=0){
        return 0;
    }
    int k=0;
    for(int i=0; i<length; i++){
        if(i<index || i>=index+count ){
            str[k]= str[i];
            k++;
        }

    }
    str[k]='\0';
   
return k;
}

//--------------------------------------------------------------------------------------------------
int CString :: remove ( char ch ) {
    int length=0;
    while(str[length]!='\0'){
        length++;
    }
    int count=0;
    int j=0;
    for(int i=0; i<length; i++){
        if(str[i]!=ch){
            str[j]=str[i];
            j++;
        }
            else{
            count++;
            }
        }
    
    str[j]='\0';
    return count;

}

//--------------------------------------------------------------------------------------------------
void CString ::  replace( char New ) {
 int length=0;
    while(str[length]!='\0'){
        length++;
    }
        for(int i=0; i<length; i++){
            str[i]=New;
        }
    
}

//--------------------------------------------------------------------------------------------------
int  CString :: replace( char old, char New ) {
int length=0;
    while(str[length]!='\0'){
        length++;
    }
    int count=0;
        for(int i=0; i<length; i++){
            if(str[i]==old){
            str[i]=New;
            count++;
        }
    
}
return count;

}

//--------------------------------------------------------------------------------------------------
int CString ::  replace( char* old, char* New ) {
int oldlength = 0;
while(old[oldlength]!='\0'){
    oldlength++;
}
int newlen = 0;
while(New[newlen]!='\0'){
    newlen++;
}
int count=0;
int index= find(old,0);
while(index!=-1){
remove(index,oldlength);
insert(index,New);
    count++;

index=find(old, index+newlen);
}
return count;

}
//--------------------------------------------------------------------------------------------------

void CString :: trimLeft( ) {
    int len= getLenght();
    int start=0;
    while(start<len && str[start]==' '){
        start++;
    }
    int j=0; 
        for(int i=start; i<len; i++){
                str[j]=str[i];
                j++;
    }
    str[j]='\0';
}

//--------------------------------------------------------------------------------------------------
void CString :: trimRight( ) {
    int len= getLenght();
    int end=len-1;
    while(end>=0 && str[end]==' '){
        end--;
    }
       str[end+1]='\0';

    //--------------------------------------------------------------------------------------------------

}
 void CString :: trim( ) {
        trimLeft();
        trimRight();
 }

//--------------------------------------------------------------------------------------------------
void CString :: makeUpper (){
    int length=0;
    while(str[length]!='\0'){
        length++;
    }
    for(int i=0; i<length; i++){
        if(str[i]>='a' && str[i]<='z'){
        str[i]=str[i]-32;
    }
}

}

//--------------------------------------------------------------------------------------------------
void CString :: makeLower (){
    int length=0;
    while(str[length]!='\0'){
        length++;
    }
    for(int i=0; i<length; i++){
        if(str[i]>='A' && str[i]<='Z'){
        str[i]=str[i]+32;
        }
    }

}

//--------------------------------------------------------------------------------------------------
void  CString :: reverse( ) {
    int length=0;
    while(str[length]!='\0'){
        length++;
    }
    for(int i=0; i<length/2; i++){
        char temp=str[i];
        str[i]=str[length-1-i];
        str[length-1-i]=temp;
}
}

//--------------------------------------------------------------------------------------------------
void CString :: Resize( int add) {
   int length=0;
    while(str[length]!='\0'){
        length++;
    }
    size =length+1;
    int newsize =size+add;

     char * newstr= new char [newsize];
    for(int i=0; i<length; i++){
        
            newstr[i]=str[i];
        }
        for(int i=length; i<newsize; i++){
            newstr[i]='\0';
        }
        
    
    delete[] str;
    str=newstr;
    size = newsize;
}

//--------------------------------------------------------------------------------------------------
CString CString :: concat ( const CString& s2 ) const {
    int len1=0;
    while(str[len1]!='\0'){
        len1++;
    }
     int len2=0;
     while(s2.str[len2]!='\0'){
    len2++;
    }
    int newsize =len1+len2+1;
    char * temp= new char[newsize];
    for(int k=0; k<len1; k++){
        temp[k]=str[k];
    }
    for(int l=0; l<len2; l++){
        temp[len1+l]=s2.str[l];
    }
    temp[len1+len2]='\0';
    
    return CString(temp);   
    
}

//--------------------------------------------------------------------------------------------------
void  CString :: concatEqual ( const CString& s2 ){
     int len1=getLenght();
     int len2=0;
while(s2.str[len2]!='\0'){
    len2++;
}
    char * temp= new char[len1+len2+1];
    for(int k=0; k<len1; k++){
        temp[k]=str[k];
    }
    for(int l=0; l<len2; l++){
        temp[len1+l]=s2.str[l];
    }
    temp[len1+len2]='\0';
    str=temp;
    size = len1+len2+1;
    delete[] str;



}

//--------------------------------------------------------------------------------------------------
void  CString ::concatEqual ( char * s2 ){
    int len1=getLenght();
int len2=0;
while(s2[len2]!='\0'){
    len2++;
}
int newsize=len1+len2+1;
char * temp=new char [newsize];
for(int i=0; i<len1; i++){
    temp[i]=str[i];
}
for(int i=0; i<len2; i++){
    temp[len1+i]=s2[i];
}  
temp[len1+len2]='\0';
delete [] str;
str=temp;
size=newsize;

}

//--------------------------------------------------------------------------------------------------
int  CString :: isEqual ( const CString & s2 ) const {
   
int i=0;
while(str[i]!='\0' && s2.str[i] !='\0'){
    if(str[i]!=s2.str[i]){
    return str[i] - s2.str[i];
    i++;
    }
}
return str[i] - s2.str[i];
}

//--------------------------------------------------------------------------------------------------
int CString ::  isEqual ( char * s2 ) const {


int i=0;
while(str[i]!='\0' && s2[i]!='\0'){
     if(str[i]!=s2[i]){
        return str[i] - s2[i];
        i++;
     }

}
return str[i] - s2[i];
}

//--------------------------------------------------------------------------------------------------

void  CString:: input ( ) {
    delete [] str;
    size=100;
    str= new char[size];
cin.getline(str,size);    
}
 //--------------------------------------------------------------------------------------------------


char &  CString:: at ( int index) {
    int length= getLenght();
    if(index<0 || index>length){
        cout<<" error"<<endl;
    }
return str[index];
}

 //--------------------------------------------------------------------------------------------------


 int CString::  isEmpty( ) {
    
    if(str[0]=='\0'){
        return 0;
    }
    return 1;
 }

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------
CString CString :: operator+(const CString & s2) const{
 int len1=0;
    while(str[len1]!='\0'){
        len1++;
    }
     int len2=0;
     while(s2.str[len2]!='\0'){
    len2++;
    }
    int newsize =len1+len2+1;
    char * temp= new char[newsize];
    for(int k=0; k<len1; k++){
        temp[k]=str[k];
    }
    for(int l=0; l<len2; l++){
        temp[len1+l]=s2.str[l];
    }
    temp[len1+len2]='\0';
    
    return CString(temp);   
}



void CString :: operator +=(const char* s2){
 int len1=getLenght();
int len2=0;
while(s2[len2]!='\0'){
    len2++;
}
int newsize=len1+len2+1;
char * temp=new char [newsize];
for(int i=0; i<len1; i++){
    temp[i]=str[i];
}
for(int i=0; i<len2; i++){
    temp[len1+i]=s2[i];
}  
temp[len1+len2]='\0';
delete [] str;
 this->str=temp;
this->size=newsize;

}

void  CString :: operator +=(const CString & s2){
    int len1=getLenght();
int len2=0;
while(s2.str[len2]!='\0'){
    len2++;
}
int newsize=len1+len2+1;
char * temp=new char [newsize];
for(int i=0; i<len1; i++){
    temp[i]=str[i];
}
for(int i=0; i<len2; i++){
    temp[len1+i]=s2.str[i];
}  
temp[len1+len2]='\0';
delete [] str;
 this->str=temp;
this->size=newsize;

}


CString  CString :: operator+(const char* const s2) const{
int len1=0;
    while(str[len1]!='\0'){
        len1++;
    }
     int len2=0;
     while(s2[len2]!='\0'){
    len2++;
    }
    int newsize =len1+len2+1;
    char * temp= new char[newsize];
    for(int k=0; k<len1; k++){
        temp[k]=str[k];
    }
    for(int l=0; l<len2; l++){
        temp[len1+l]=s2[l];
    }
    temp[len1+len2]='\0';
    
    return CString(temp);   
}

CString &  CString :: operator=(const CString & ref){
    if(this!=&ref){
     this->size=ref.size;
    this->str =new char[this->size];
    int i=0; 
    while(i<this->size) {
    this->str[i]=ref.str[i];
    i++;

    }
}
return *this;
}

int main(){
    CString s1;
    CString s2('a');
    cout<<"parameterized constructor: ";
    s2.display();
    cout<<endl;
        cout<<endl;

    CString s3("apple");
    cout<<"conversion constructor: ";
    s3.display();
    cout<<endl;
        cout<<endl;

    CString s4(s2);
    cout<<"copy constructor: ";
    s4.display();
    cout<<endl;  
      cout<<endl;

    cout<<" length of s2 is: "<<s2.getLenght()<<endl;
        cout<<endl;

     cout<< " char l in s3 is at : "  <<s3.find('l',0)<<endl;
         cout<<endl;

     char substring[] ="pp";
     cout<<"substring pp in s3 is at : "<< s3.find(substring,0);
     cout<<endl;
         cout<<endl;

     CString s5("hello world");
     char insert[]="my";
     cout<<"the length of string after  'my' is added id :"<<s5.insert(6,insert)<<endl;
         cout<<endl;

     cout<<"the length of string after ' s ' is added id :"<<s3.insert(6,insert)<<endl;
         cout<<endl;

     CString left =s5.left(3);
     cout<<"range of 3 characters extracted from left side: ";
      left.display();
      cout<<endl;
          cout<<endl;

      CString right =s5.right(3);
     cout<<"range of  3 characters extracted from right side: ";
      right.display();
      cout<<endl;
          cout<<endl;

      cout<<"after removal of a from s3,the length is :" << s3.remove('a') <<endl;
      cout<<" s3 becomes: ";
      s3.display();
      cout<<endl;
          cout<<endl;

      cout<<"after removal of a from s5,the length is :" << s5.remove(3,4) <<endl;

      cout<<" s5 becomes: ";
      s5.display();
      cout<<endl;
          cout<<endl;

      cout<<"replacing p in s3 to b : ";
      s3.replace('b');
      cout<<endl;
          cout<<endl;

      cout<<"replacing w in s5 to x, number of times are : "<< s5.replace('w','x')<<endl;
          cout<<endl;

      CString s6("ridaaa");
      char oldreplace[]= "a";
       char newreplace[]= "u";
       cout<<"replacing a in s6 to u, number of times are :"<<s6.replace(oldreplace,newreplace)<<endl;
       cout<<" s6 is : ";
       s6.display();
       cout<<endl;
           cout<<endl;

       CString s7(" welcome");
	  cout<<"trim left: ";
      s7.trimLeft();
     cout<<"s7 becomes: ";
	 s7.display();
     cout<<endl;
         cout<<endl;

	 CString s8("hii ");
	 cout<<"trim right: ";
	 s8.trimRight();
     cout<<"s8 becomes: ";
	 s8.display();
     cout<<endl;
         cout<<endl;

     CString s9(" hello ");
     cout<<"trim: ";
     s9.trim();
     cout<<" s9 becomes: ";
     s9.display();
     cout<<endl;
         cout<<endl;

     cout<<" uppercasing s9: ";
     s9.makeUpper();
     cout<<"s9 becomes: ";
     s9.display();
     cout<<endl;
         cout<<endl;

     CString s10("ABCD");
     cout<<" lowercasing s10: ";
     s10.makeLower();
     cout<<"s10 becomes: ";
     s10.display();
     cout<<endl;
         cout<<endl;

     cout<<"reversing s10: ";
     s10.reverse();
     cout<<"s10 becomes: ";
     s10.display();
     cout<<endl;
         cout<<endl;

     s10.Resize(5);
     cout<<" s10 after resizing: ";
     s10.display();
     cout<<endl;
         cout<<endl;

     CString s11=s7.concat(s8);
     cout<<"after concatentaion s7 & s8 are: ";
     s11.display();
     cout<<endl;
         cout<<endl;

     s5.concatEqual(s6);
     cout<<"after concatentaion s5 & s6 are: ";
     s5.display();
     cout<<endl;
         cout<<endl;

    s6.concat("xyz");
     cout<<"after concatentaion of s6 with string  are: ";
     s6.display();
     cout<<endl;
         cout<<endl;

     cout<<"s3 is equal to s4 ?"<<s3.isEqual(s4)<<endl;
         cout<<endl;

     cout<<"s2 is equal to abc ?"<<s3.isEqual("abc")<<endl;
         cout<<endl;

     CString s13;
    cout<<" enter a string: "<<endl;
    s13.input();
    cout<<" second character of s13 : "<<s13.at(1)<<endl;
        cout<<endl;

    if(s13.isEmpty()){
        cout<<" s13 is empty"<<endl;
    }
    else{
        cout<<" s13 is not empty"<<endl;
    }
        cout<<endl;
    cout<<endl;

    cout<<"---------------------------------"<<endl;
cout<<"using operator overoading  concatenating two Cstrings"<<endl;
CString s12="abc";
CString s15=s2+s12;
s15.display();
cout<<endl;
cout<<endl;

cout<<"using operator overoading  concatenating Cstring and char*"<<endl;
CString s16=s12+"abc";
s16.display();
cout<<endl;
cout<<endl;

cout<<"using operator overoading  concatenating s20+=s12 "<<endl;
CString s20="xyz";
s20+=s12;
s20.display();
cout<<endl;
cout<<endl;

cout<<"using operator overoading  concatenating s20+=abba "<<endl;
s20+="abba";
s20.display();
cout<<endl;
cout<<endl;

cout<<"assignment operator :"<<endl;
CString s21="rida";
s20=s21;
s20.display();
cout<<endl;
cout<<endl;


    return 0;
}