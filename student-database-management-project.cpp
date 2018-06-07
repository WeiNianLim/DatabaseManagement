#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <conio.h>
#include <iomanip>
#include <string.h>
#include <fstream>

using namespace std;

int main(){
    
    ofstream ofs ("test.txt");

    ofs << " more lorem ipsum";

    ofs.close();

    return 0;
}

/*int main(){

    FILE *fp, *ft;

    char choice, another;

    bool recordFound = true;

    struct student
    {
        char first_name[50], last_name[50];
        //string first_name (""), last_name (""), course ("");
        char course[100];
        int section;
    };

    struct student e;
    char xfirst_name[50], xlast_name[50];
    //string xfirst_name, xlast_name;
    long int recsize;

    fp = fopen("database.csv","rb+");

    if (fp==NULL){
        fp = fopen("database.csv","wb+");
        if (fp==NULL){
            puts("Cannot open file");
            return 0;
        }
    }

    recsize = sizeof(e);

    while(1)
    {
        system("cls");

        cout << "\n\n\t\t\t\t Student Database Management";
        cout << "\n\n\n\n\n";
        cout << "\n\t\t 1. Add Student    : ";
        cout << "\n\t\t 2. List Student   : ";
        cout << "\n\t\t 3. Delete Student : ";
        cout << "\n\t\t 4. Modify Student : ";
        cout << "\n\t\t 5. Exit Program   : ";
        cout << "\n\n";
        cout << "\n\t\t Select the mode   : ";
        fflush(stdin);
        choice = getche();
        switch(choice)
        {
            case '1':
                fseek(fp, 0, SEEK_END);
                another = 'Y';
                while (another == 'Y' || another == 'y')
                {
                    system("cls");
                    cout << "Enter the Firt Name : ";
                    cin >> e.first_name;
                    fflush(stdin);
                    cout << "Enter the Last Name : ";
                    cin >> e.last_name;
                    fflush(stdin);
                    cout << "Enter the Course    : ";
                    cin >> e.course;
                    fflush(stdin);
                    cout << "Enter the Section   : ";
                    while (!(cin >> e.section)){
                        cin.clear();
                        cin.ignore(999, '\n');
                        cout << "Invalid data type! Please enter section in numbers only";
                        cout << "\nEnter the Section   : ";
                    }
                    fflush(stdin);

                    fwrite(&e,recsize,1,fp);
                    cout << "\n Add Another Record (Y/N) ";
                    fflush(stdin);

                    another = getchar();              
                }
                break;

            case '2':
                system("cls");
                rewind(fp);
                cout << "=== View the Records in the Database ===";
                cout << "\n";

                while (fread(&e,recsize,1,fp) == 1)
                {
                    cout << "\n";
                    cout <<"\n" << e.first_name << setw(10)  << e.last_name;
                    cout << "\n";
                    cout <<"\n" <<e.course <<  setw(8)  << e.section;
                }

                cout << "\n\n";
                system("pause");
                break;
            
            case '3':
                system("cls");
                another = 'Y';
                while (another == 'Y' || another == 'y'){
                    cout << "\n Enter the last name of the student : ";
                    cin >> xlast_name;

                    rewind(fp);
                    while (fread(&e, recsize, 1, fp) == 1)
                    {
                        if (strcmp(e.last_name, xlast_name) == 0){
                        //if (strcmp(last_name.compare(xlast_name)) == 0){
                            cout << "Enter new the Firt Name : ";
                            cin >> e.first_name;
                            cout << "Enter new the Last Name : ";
                            cin >> e.last_name;
                            cout << "Enter new the Course    : ";
                            cin >> e.course;
                            cout << "Enter new the Section   : ";
                            cin >> e.section;
                            fseek(fp, - recsize, SEEK_CUR);
                            fwrite(&e,recsize,1,fp);
                            break;
                        } else 
                            recordFound = false;
                    }

                    if(!recordFound)
                        cout << " record not found!!!";

                    cout << "\n Modify Another Record (Y/N) ";
                    fflush(stdin);
                    another = getchar();
                }
                break;
            
            case '4':
                system("cls");
                another = 'Y';
                while (another == 'Y' || another == 'y')
                {
                    cout << "\n Enter the last name of the student to delete : ";
                    cin >> xlast_name;

                    ft = fopen("temp.csv", "wb");

                    rewind(fp);
                    while (fread(&e, recsize,1,fp)==1){                         
                        if (strcmp(e.last_name, xlast_name)!=0){
                            fwrite(&e,recsize,1,ft);
                        }
                    }
                    fclose(fp);
                    fclose(ft);
                    remove("database.csv");
                    rename("temp.csv","database.csv");

                    fp=fopen("users.csv","rb+");

                    cout << "\n Delete Another Record (Y/N) ";
                    fflush(stdin);
                    another = getchar();
                }
                break;

            case '5':
                fclose(fp);
                cout << "\n\n";
                cout << "\t\t     THANK YOU FOR USING THIS SOFTWARE";
                cout << "\n\n";
                exit(0);
        }

    }
    
    system("pause");
    return 0;
}*/