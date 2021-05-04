# include <iostream>
# include <fstream>
# include <string>

using namespace std;

bool IsLoggedIn()
{
    string username, password, un, pw;

    cout << "Enter username "; cin >> username;
    cout << endl;
    cout << "Enter password "; cin >> password;
    cout << endl;
    
    ifstream read("project1\\" + username + ".txt");
    getline(read, un);
    getline(read, pw);

    if (un == username && pw == password)
    {
        return true;
    }
 else {
     return false;
 }
}
int main()
{
    int choice;

    cout << "1: Register\n2:Login\nyour choice is:"; cin >> choice;

    if (choice == 1){
        string username, password;

        cout << "Enter username:"; cin >> username;
        cout << "Enter password:"; cin >> password;

        ofstream file;
        file.open("project1\\" + username + ".txt");
        file << username << endl << password;
        file.close();

        main();

    }
    else if (choice == 2)
    {
        bool status = IsLoggedIn();

        if (!status)
        {
            cout << "False Login" << endl;
            system("pause");
            return 0;
        }
        else {
            cout << "Succefully Logged in" << endl;
            system("Pause");
            return 1;
        }
    }
    
}