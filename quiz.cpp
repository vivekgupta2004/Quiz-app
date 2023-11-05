#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
struct student
{
    char name[20], roll[20];
    int marks, random;
};
student st;

void cpp()
{
    char choice;
    st.marks = 0;
    int i = 0 , arr[4];
    while (i < 4)
    {
        back:
        st.random = rand() % 4;
        for(int j=0;j<4;j++){
            if(st.random == arr[j]){
                goto back;
            }
        }
        arr[i]=st.random;
     

        switch (st.random)
        {
        case 0:

            cout << i + 1<< ")What is a correct syntax to output \"Hello world \" in C++" << endl;
            cout << "A. System.out.println(\"Hello World\");" << endl;
            cout << "B.  Console.log(\"Hello world\")" << endl;
            cout << "C. print(\"Hello world\")" << endl;
            cout << "D. cout<<\"Hello world\";" << endl;
            choice = getch();
            if (choice == 'D' || choice == 'd')
            {
                cout << "Your ans is correct" << endl;
                st.marks++;
            }
            else
            {
                cout << "Your ans is incorrect " << endl;
                cout << "Your correct ans is d " << endl;
            }
            break;
        case 1:
            cout << i + 1 <<")What is the purpose of the sizeof operator in C++?" << endl;
            cout << "A.  To calculate the size of a data type or object in bytes." << endl;
            cout << "B.   To return the address of a variable.  " << endl;
            cout << "C.  To check if a variable is initialized." << endl;
            cout << "D. To create a new object instance." << endl;
            choice = getch();
            if (choice == 'A' || choice == 'a')
            {
                cout << "Your ans is correct" << endl;
                st.marks++;
            }
            else
            {
                cout << "Your ans is incorrect " << endl;
                cout << "Your correct ans is a " << endl;
            }
            break;
        case 2:
            cout << i + 1 <<")In C++, which keyword is used to dynamically allocate memory for an array of objects?" << endl;
            cout << "A.  new" << endl;
            cout << "B. malloc " << endl;
            cout << "C. allocate" << endl;
            cout << "D. create" << endl;
            choice = getch();
            if (choice == 'A' || choice == 'a')
            {
                cout << "Your ans is correct" << endl;
                st.marks++;
            }
            else
            {
                cout << "Your ans is incorrect " << endl;
                cout << "Your correct ans is a " << endl;

            }
            break;
        case 3:
            cout << i + 1 <<")What does the static keyword in C++ indicate when applied to a class member?" << endl;
            cout << "A. The member is constant and cannot be modified." << endl;
            cout << "B.  The member is shared among all instances of the class." << endl;
            cout << "C. The member is accessible only within the class." << endl;
            cout << "D. The member is a pointer to another object." << endl;
            choice = getch();
            if (choice == 'B' || choice == 'b')
            {
                cout << "Your ans is correct" << endl;
                st.marks++;
            }
            else
            {
                cout << "Your ans is incorrect " << endl;
                cout << "Your correct ans is b " << endl;
            }
            break;
        }
        i++;
    }
}
void java()
{
}
void html()
{
}
int result(){
    int per=0;
    cout<<"Student Name: "<<st.name<<endl;
    cout<<"Roll no: "<<st.roll<<endl;
    cout<<"Marks: "<<st.marks<<"out of 4"<<endl;
    per = 100*st.marks/4;
    cout<<"Percentage: "<<per<<"%"<<endl;
    if(per>50){
        cout<<"Status: Pass"<<endl;
    }
    else{
        cout<<"Status: Fail"<<endl;
    }

}
int main()
{
    char press, select;
    do
    {
        system("CLS");
        cout << "\n\n\t\t******************" << endl;
        cout << "\t\t  QUIZ SYSTEM" << endl;
        cout << "\t\t******************" << endl;
        cout << "\t\tEnter name:-";
        gets(st.name);
        cout << "\t\tRoll no:-";
        gets(st.roll);
        system("CLS");
        cout << "\t\tMarks less than 50% will be fail" << endl
             << endl;
        cout << "Select which subject quiz you want to perform" << endl;
        cout << "1) C++" << endl;
        cout << "2) Java" << endl;
        cout << "3) HTML" << endl;
        select = getch();
        system("CLS");
        switch (select)
        {
        case '1':
            cout << "\t\tC++ Quiz" << endl;
            cpp();
            system("CLS");
            cout<<"\t\tC++ Quiz Result"<<endl;
            result();
            break;
        case '2':
            cout << "\t\tJava Quiz" << endl;
            java();
            break;
        case '3':
            cout << "\t\tHTML Quiz" << endl;
            html();
            break;
        default:
            cout << "Invalid Input" << endl;
        }
        cout << "Press y to continue or any key to terminate" << endl;
        press = getch();

    } while (press == 'y' || press == 'Y');
}