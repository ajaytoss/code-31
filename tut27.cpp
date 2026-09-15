 #include <iostream>
 
 using namespace std;
 
 typedef struct{

    int eid;
    char favChar;
    float salary;
    
 }ep;

 union money{
    int rice;
    char car;
    float pounds;
 };

 int main() {
    enum Meal{breakfast, lunch, dinner};
    Meal m1 = breakfast;
    cout<<m1<<endl;
    //cout<<(breakfast)<<endl;
    //cout<<(lunch)<<endl;
    //cout<<(dinner)<<endl;

     
    
    // union money m1;
    //m1.rice = 34;
    //cout<<m1.rice<<endl;

    //ep e1;
    //e1.eid = 1;
    //e1.favChar = 'A';
    //e1.salary = 50000.0;
    //cout<<e1.eid<<endl;
    //cout<<e1.favChar<<endl;
    //cout<<e1.salary<<endl;
     return 0;
 }