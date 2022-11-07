#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

void mainMenu();

class Management
{
public:
    Management()
    {
        mainMenu();
    }
};


class Details
{
public:
    static string name , gender;
    int phonenumber;
    int age;
    string address;
    static int cId;
    char arr[100];

    void information()
    {
        cout<<"\nEnter the customer Id: ";
        cin>>cId;
        cout<<"\nEnter the name: ";
        cin>>name;
        cout<<"\nEnter the age: ";
        cin>>age;
        cout<<"\nAddress: ";
        cin>>address;
        cout<<"\nGender: ";
        cin>>gender;
        cout<<"\nYour details are saved with us! \n";
    }
};

int Details :: cId;
string Details :: name;
string Details :: gender;


class Registration
{
public:
    static int choice;
    int choice1;
    int back;
    static float charges;

    void flights()
    {
        string flightN[] = {"Dubai" , "Canada" , "UK"  , "USA" , "Australia"  , "Europe"};

        for ( int a=0 ; a<6 ; a++)
        {
            cout<<(a+1)<<". flight to "<<flightN[a]<<endl;
        }
        cout<<"\nWelcome to the Airlines! "<<endl;
        cout<<"Press the number of the country you want to book the flight: ";
        cin>>choice;

        switch(choice)
        {
        case 1:
            {
                cout<<"______________Welcome to Dubai Emirates____________\n";
                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                cout<<"Following are the flights \n"<<endl;

                cout<<"1) DUB - 498"<<endl;
                cout<<"\t08-11-2022 8:00 AM  10hrs Rs.14000"<<endl;

                cout<<"2) DUB - 658"<<endl;
                cout<<"\t09-11-2022 4:00 AM  10hrs Rs.11000"<<endl;

                cout<<"3) DUB - 879"<<endl;
                cout<<"\t10-11-2022 9:00 AM  10hrs Rs.9000"<<endl;


                cout<<"\nSelect the flight you want to book: ";
                cin>>choice1;

                if( choice1 == 1 )
                {
                    charges = 14000;
                    cout<<"\nYou have successfully booked the flight DUB - 498"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if ( choice1 == 2 )
                {
                    charges = 11000;
                    cout<<"\nYou have successfully booked the flight DUB - 658"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if ( choice1 == 3 )
                {
                    charges = 9000;
                    cout<<"\nYou have successfully booked the flight DUB - 879"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else
                {
                    cout<<"Invalid output, shifting to previous menu."<<endl;
                    flights();
                }
                cout<<"Press any key to go back to main menu: "<<endl;
                cin>>back;

                if ( back ==  1 )
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
            }

        case 2:
            {
                cout<<"______________Welcome to Canadian Airlines____________\n";
                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                cout<<"Following are the flights \n"<<endl;

                cout<<"1) CAD - 198"<<endl;
                cout<<"\t08-11-2022 2:00 AM  20hrs Rs.114000"<<endl;

                cout<<"2) CAD - 458"<<endl;
                cout<<"\t09-11-2022 7:00 PM  20hrs Rs.101000"<<endl;

                cout<<"3) CAD - 279"<<endl;
                cout<<"\t10-11-2022 1:00 AM  20hrs Rs.119000"<<endl;


                cout<<"\nSelect the flight you want to book: ";
                cin>>choice1;

                if( choice1 == 1 )
                {
                    charges = 114000;
                    cout<<"\nYou have successfully booked the flight CAD - 198"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if ( choice1 == 2 )
                {
                    charges = 101000;
                    cout<<"\nYou have successfully booked the flight CAD - 458"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if ( choice1 == 3 )
                {
                    charges = 119000;
                    cout<<"\nYou have successfully booked the flight CAD - 279"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else
                {
                    cout<<"Invalid output, shifting to previous menu."<<endl;
                    flights();
                }
                cout<<"Press any key to go back to main menu: "<<endl;
                cin>>back;

                if ( back ==  1 )
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
            }

        case 3:
            {
                cout<<"______________Welcome to UK Airways____________\n";
                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                cout<<"Following are the flights \n"<<endl;

                cout<<"1) UK - 54"<<endl;
                cout<<"\t14-11-2022 2:00 AM  13hrs Rs.70000"<<endl;

                cout<<"\nSelect the flight you want to book: ";
                cin>>choice1;

                if( choice1 == 1 )
                {
                    charges = 70000;
                    cout<<"\nYou have successfully booked the flight UK - 54"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }

                else
                {
                    cout<<"Invalid output, shifting to previous menu."<<endl;
                    flights();
                }
                cout<<"Press any key to go back to main menu: "<<endl;
                cin>>back;

                if ( back ==  1 )
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
            }

        case 4:
              {
                cout<<"______________Welcome to US Airways____________\n";
                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                cout<<"Following are the flights \n"<<endl;

                cout<<"1) US - 118"<<endl;
                cout<<"\t12-11-2022 2:00 AM  28hrs Rs.120000"<<endl;

                cout<<"2) US - 125"<<endl;
                cout<<"\t27-11-2022 7:00 PM  27hrs Rs.130000"<<endl;

                cout<<"\nSelect the flight you want to book: ";
                cin>>choice1;

                if( choice1 == 1 )
                {
                    charges = 120000;
                    cout<<"\nYou have successfully booked the flight US - 118"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if ( choice1 == 2 )
                {
                    charges = 130000;
                    cout<<"\nYou have successfully booked the flight US - 125"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }

                else
                {
                    cout<<"Invalid output, shifting to previous menu."<<endl;
                    flights();
                }
                cout<<"Press any key to go back to main menu: "<<endl;
                cin>>back;

                if ( back ==  1 )
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
            }

        case 5:
              {
                cout<<"______________Welcome to US Airways____________\n";
                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                cout<<"Following are the flights \n"<<endl;

                cout<<"1) AUS - 218"<<endl;
                cout<<"\t12-11-2022 2:00 AM  23hrs Rs.55000"<<endl;

                cout<<"2) AUS - 225"<<endl;
                cout<<"\t27-11-2022 7:00 PM  24hrs Rs.50000"<<endl;

                cout<<"\nSelect the flight you want to book: ";
                cin>>choice1;

                if( choice1 == 1 )
                {
                    charges = 120000;
                    cout<<"\nYou have successfully booked the flight AUS - 218"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if ( choice1 == 2 )
                {
                    charges = 130000;
                    cout<<"\nYou have successfully booked the flight AUS - 225"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }

                else
                {
                    cout<<"Invalid output, shifting to previous menu."<<endl;
                    flights();
                }
                cout<<"Press any key to go back to main menu: "<<endl;
                cin>>back;

                if ( back ==  1 )
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
            }

        case 6:
                {
                cout<<"______________Welcome to European Airlines____________\n";
                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                cout<<"Following are the flights \n"<<endl;

                cout<<"1) EUR - 618"<<endl;
                cout<<"\t19-11-2022 2:00 AM  12hrs Rs.45000"<<endl;

                cout<<"2) EUR - 995"<<endl;
                cout<<"\t21-11-2022 7:00 PM  13hrs Rs.40000"<<endl;

                cout<<"\nSelect the flight you want to book: ";
                cin>>choice1;

                if( choice1 == 1 )
                {
                    charges = 45000;
                    cout<<"\nYou have successfully booked the flight EUR - 618"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if ( choice1 == 2 )
                {
                    charges = 40000;
                    cout<<"\nYou have successfully booked the flight EUR - 995"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }

                else
                {
                    cout<<"Invalid output, shifting to previous menu."<<endl;
                    flights();
                }
                cout<<"Press any key to go back to main menu: "<<endl;
                cin>>back;

                if ( back ==  1 )
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
            }
        default:
            {
                cout<<"invalid input, Shifting to main menu! ";
                mainMenu();
            }

        }
    }
};

float Registration :: charges;
int Registration :: choice;

class Ticket : public Registration , Details
{
public:
    void Bill()
    {
        string destination = " ";
        ofstream outf("flight.txt");
        {
            outf<<"___________________XYZ Airlines___________________"<<endl;
            outf<<"_______________________Ticket_____________________"<<endl;
            outf<<"__________________________________________________"<<endl;

            outf<<"Customer Id: "<<Details::cId<<endl;
            outf<<"Customer Name: "<<Details::name<<endl;
            outf<<"Customer Gender: "<<Details::gender<<endl;
            outf<<"\tDescription"<<endl<<endl;

            if ( Registration::choice == 1 )
            {
                destination = "Dubai";
            }

            if ( Registration::choice == 2 )
            {
                destination = "Canada";
            }

            if ( Registration::choice == 3 )
            {
                destination = "UK";
            }

            if ( Registration::choice == 4 )
            {
                destination = "USA";
            }

            if ( Registration::choice == 5 )
            {
                destination = "Australia";
            }

            if ( Registration::choice == 6 )
            {
                destination = "Europe";
            }

            outf<<"Destination\t\t"<<destination<<endl;
            outf<<"Flight cost: \t\t"<<Registration::charges<<endl;
        }
        outf.close();
    }
    void dispBill()
    {
        ifstream ifs("flight.txt");
        {
            if ( !ifs )
            {
                cout<<"File error!"<<endl;
            }
            while ( !ifs.eof() )
            {
                ifs.getline(arr,100);
                cout<<arr<<endl;
            }
        }
        ifs.close();
    }


};

void mainMenu()
{
    int lchoice;
    int schoice;
    int back;

    cout<<"\t               XYZ Airlines\n"<<endl;
    cout<<"\t_______________Main Menu____________"<<endl;

    cout<<"\t____________________________________"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t|"<<endl;

    cout<<"\t\t Press 1 to add the Customer Details     \t|"<<endl;
    cout<<"\t\t Press 2 for flight registration         \t|"<<endl;
    cout<<"\t\t Press 3 to Ticket and charges           \t|"<<endl;
    cout<<"\t\t Press 4 to Exit                         \t|"<<endl;
    cout<<"\t\t\t\t\t\t\t\t|"<<endl;
    cout<<"\t____________________________________"<<endl;

    cout<<"Enter the choice: ";
    cin>>lchoice;

    Details d;
    Registration r;
    Ticket t;

    switch(lchoice)
    {
    case 1:
        {
            cout<<"_____________Customers___________\n"<<endl;
            d.information();
            cout<<"Press any key to go back to Main menu ";
            cin>>back;

            if ( back==1 )
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;
        }
    case 2:
        {
            cout<<"__________Book a flight using this system_________\n"<<endl;
            r.flights();
            break;
        }
    case 3:
        {

        cout<<"________GET YOUR TICKET________\n"<<endl;
        t.Bill();

        cout<<"Your ticket is printed, you can collect it \n"<<endl;
        cout<<"Press 1 to display your ticket ";

        cin>>back;

        if ( back == 1 )
        {
            t.dispBill();
            cout<<"Press any key to go back to main menu: ";
            cin>>back;

            if ( back==1 )
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;
        }

        }
    case 4:
       {
           cout<<"\n\n\t__________Thank you !!!_________"<<endl;
           break;
       }

    default:
        {
            cout<<"Invalid input. Please try again! \n"<<endl;
            mainMenu();
            break;
        }
    }
}





int main()
{
    Management Mobj;

    return 0;

}

