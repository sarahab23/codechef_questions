 #include<iostream>
 using namespace std;
 class employee
 {
    int id;
    char name[10];
    char add[30];
    char doj[10];
    public:
        void getdata();
        void displaydata();
 };
 class salary:public employee
 {
    int pt,bp,da;
    int allowances;
    int hra;
    public:
        void get_data();
        void display_data();
        int calculate_sal();
 };
 int main()
 {
    salary s[10];
    for(int i=0;i<10;i++)
 {
        s[i].get_data();
        s[i].display_data();
 }
 }
 void salary::get_data()
 {
    /*employee e;*/
    cin>>bp>>da>>pt>>allowances>>hra;
    getdata();
 }
 void salary::display_data()
 {

    displaydata();
    cout<<calculate_sal();
 }
 int salary::calculate_sal()
 {
    return pt+bp+da+allowances+hra;
 }
 void employee::getdata()
 {
    cin>>id>>name>>add>>doj;
 }
 void employee::displaydata()
 {
    cout<<"ID:"<<id<<endl<<"NAME:"<<name<<endl<<"ADDRESS:"<<add<<endl<<"DATE OF JOINING:"<<doj<<endl<<"SALARY:";
 }

