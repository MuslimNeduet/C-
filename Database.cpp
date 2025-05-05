#include <iostream>
#include <conio.h>
using namespace std;
int main() {
    string names[25];
    int rolls[25];
    float cgpas[25];
    int totalstudents = 0;
    char ch;
    do {
        cout<<"\nMenu:"<<endl;
        cout<<"1. Enter The Records"<<endl;
        cout<<"2. Display The Records"<<endl;
        cout<<"3. Replace A Record"<<endl;
        cout<<"Press ESC To Exit."<<endl;
        ch = getch();
        if (ch=='1'){
            for (int i=totalstudents; i<25; i++){
                cout<<"\nEnter Name For Student " << i + 1 << ": ";
                cin>>names[i];
                cout<<"Enter Roll number: ";
                cin>>rolls[i];
                cout<<"Enter CGPA: ";
                cin>>cgpas[i];
                totalstudents++;
            }
        }
        else if (ch=='2'){
            if (totalstudents==0){
                cout <<"\nNo Records To display."<<endl;
            } else{
                cout <<"\nStudent Records:"<<endl;
                for (int i=0; i<totalstudents; i++) {
                    cout <<"Student "<<i+1<<": ";
                    cout <<"Name: "<<names[i]<<", Roll: "<<rolls[i]<<", CGPA: "<<cgpas[i] << endl;
                }
            }
        }
        else if(ch=='3'){
            int index;
            cout<<"\nEnter Student Number (1-25) To Replace: ";
            cin>>index;
            if (index>=1 && index <= totalstudents){
                index--;
                cout<<"Enter New Name: ";
                cin>>names[index];
                cout<<"Enter New Roll Number: ";
                cin>>rolls[index];
                cout<<"Enter New CGPA: ";
                cin>>cgpas[index];
                cout<<"Record Updated"<<endl;
            } else{
                cout<<"Invalid Student Number"<<endl;
            }
        }
    } while (ch!=27);
    return 0;
}
