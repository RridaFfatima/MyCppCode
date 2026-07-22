#include "iostream"

using namespace std;

class FeetInches
{
private:
    int feet;          // To hold a number of feet
    int inches;        // To hold a number of inches

    // Private member function to simplify the values in feet and inches
    void simplify()
    {
        if (inches >= 12)
        {
            feet += (inches / 12);
            inches = inches % 12;
        }
        else if (inches < 0)
        {
            feet -= ((abs(inches) / 12) + 1);
            inches = 12 - (abs(inches) % 12);
        }
    }

public:
    // Constructor
    FeetInches(int f = 0, int i = 0)
    {
        feet = f;
        inches = i;
        simplify();
    }

    // Copy constructor
    FeetInches(const FeetInches& right)
    {
        feet = right.feet;
        inches = right.inches;
        simplify();
    }

    // Mutator function to set feet
    void setFeet(int f)
    {
        feet = f;
    }

    // Mutator function to set inches
    void setInches(int i)
    {
        inches = i;
        simplify();
    }

    // Accessor function to get feet
    int getFeet() const
    {
        return feet;
    }

    // Accessor function to get inches
    int getInches() const
    {
        return inches;
    }

    // Overloaded + operator
    FeetInches operator + (const FeetInches& right)
    {
        FeetInches temp;

        temp.inches = inches + right.inches;
        temp.feet = feet + right.feet;
        temp.simplify();

        return temp;
    }

    // Overloaded - operator
    FeetInches operator - (const FeetInches& right)
    {
        FeetInches temp;

        temp.inches = inches - right.inches;
        temp.feet = feet - right.feet;
        temp.simplify();

        return temp;
    }

    // Overloaded * operator
    FeetInches operator * (const FeetInches& right)
    {
        FeetInches temp;

        temp.inches = inches * right.inches;
        temp.feet = feet * right.feet;
        temp.simplify();

        return temp;
    }

    // Overloaded prefix ++ operator
    FeetInches operator ++ ()
    {
        ++inches;
        simplify();

        return *this;
    }

    // Overloaded postfix ++ operator
    FeetInches operator ++ (int)
    {
        FeetInches temp(feet, inches);

        inches++;
        simplify();

        return temp;
    }

    // Overloaded prefix -- operator
    FeetInches operator -- ()
    {
        --inches;
        simplify();

        return *this;
    }

    // Overloaded postfix -- operator
    FeetInches operator -- (int)
    {
        FeetInches temp(feet, inches);

        inches--;
        simplify();

        return temp;
    }

    // Overloaded > operator
    bool operator > (const FeetInches& right) const
    {
        bool status;

        if (feet > right.feet)
            status = true;
        else if (feet == right.feet && inches > right.inches)
            status = true;
        else
            status = false;

        return status;
    }

    // Overloaded < operator
    bool operator < (const FeetInches& right) const
    {
        return !(*this > right);
    }

    // Overloaded >= operator
    bool operator >= (const FeetInches& right) const
    {
        bool status;

        if (feet >= right.feet)
            status = true;
        else if (feet == right.feet && inches >= right.inches)
            status = true;
        else
            status = false;

        return status;
    }

    // Overloaded <= operator
    bool operator <= (const FeetInches& right) const
    {
        return !(*this >= right);
    }

    // Overloaded == operator
    bool operator == (const FeetInches& right) const
    {
        bool status;

        if (feet == right.feet && inches == right.inches)
            status = true;
        else
            status = false;

        return status;
    }

    // Overloaded != operator
    bool operator != (const FeetInches& right) const
    {
        return !(*this == right);
    }

    // Friend function to overload << operator for output
    friend ostream& operator << (ostream&, const FeetInches&);

    // Friend function to overload >> operator for input
    friend istream& operator >> (istream&, FeetInches&);
};

// Overloaded << operator
ostream& operator << (ostream& out, const FeetInches& obj)
{
    out << "Feet = " << obj.feet << "\tInches = " << obj.inches << endl;

    return out;
}

// Overloaded >> operator
istream& operator >> (istream& in, FeetInches& obj)
{
    cout << "Enter Feet:\t";
    in >> obj.feet;

    cout << "Enter Inches:\t";
    in >> obj.inches;

    return in;
}






class RoomDimension{
    private:
    FeetInches length;
    FeetInches width;
    public:
    void setlength(int x,int y){
        length.setFeet(x);
        length.setInches(y);
    }
    void setwidth(int x , int y){
        width.setFeet(x);
        width.setInches(y);
    }
    int getlength(){
        return length.getInches();
    }
    int getwidth(){
        return width.getInches();
    }
    RoomDimension( FeetInches length=FeetInches(), FeetInches width=FeetInches()):length(length), width(width){}

    float area( ){
float l=length.getFeet()+length.getInches()/12.0;
float w=width.getFeet()+width.getInches()/12.0;
return l*w;
    }
    void display(){
        
        cout<<" length :"<<length<<endl;
        cout<<"width: "<<width<<endl;

    }


};


class RoomCarpet{
    private:
    RoomDimension roomSize;
    float costPerSquareFoot;
public:  

void setroomsize(FeetInches l,FeetInches w){
    roomSize=RoomDimension(l,w);
}
void setcost(int x){
    costPerSquareFoot=x;
}
RoomDimension getroomsize(){
    return roomSize;
}
float getcost(){
    return costPerSquareFoot;
}
RoomCarpet(RoomDimension &rd, float costt): roomSize(rd), costPerSquareFoot(costt){

}
float gettotalcost(){

    return roomSize.area()*costPerSquareFoot;
}
void displayy(){
    cout<<"costpersquarefoot: "<<costPerSquareFoot<<endl;

}

};
int main(){

    int x,y;

     cout<<"enter feet and inches for length "<<endl;
     cin>>x>>y;
     FeetInches l(x,y);

     

    int x1,y1;

     cout<<"enter feet and inches for width "<<endl;
     cin>>x1>>y1;
              FeetInches w(x1,y1);



RoomDimension rd(l,w);
    rd.display();
    cout<<" costt per unit: "<<endl;
    float cost;
    cin>>cost;
    
    
    RoomCarpet r(rd,cost);
    
  cout<<"the total cost is: "<<endl;
    float tcost=r.gettotalcost();
    cout<< tcost<<endl;
    return 0;




}