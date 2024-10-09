#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <ctime>

using namespace std;
main()
{
    cout<<"\t\t\t<===================== WELCOME ===================================>"<<endl;
    cout<<"\t\t\t<===================== I'M A VIRTUAL ASSISTANT =========================>"<<endl;
    cout<<"\t\t\t<===================== MY NAME IS shivi ==============================>"<<endl;
    cout<<"\t\t\t<===================== I'M HERE TO HELP YOU ============================>"<<endl<<endl;

    cout<< "Good Morning sir"<<endl;
        string phrase = " welcome,  i'm virtual assistant,  my name is shivi,  i'm here to help you ";
                string command = "espeak \"" + phrase + "\"";
                const char *charCommand = command.c_str();
                system(charCommand);
        
      
        string password;
        cout<<"======================="<<endl;
        cout<<"| ENTER YOUR PASSWORD |"<<endl;
        cout<<"======================="<<endl<<endl;
         phrase = " enter your password";
                 command = "espeak \"" + phrase + "\"";
                charCommand = command.c_str();
                system(charCommand);
        
    cin>>password;

    if(password=="ashu")
    {
      cout<<"<-----welcome ashutosh----->\n"
          <<"<-----how can i help you------>\n";

    phrase = "welcome ashu, how can i help you,";
                 command = "espeak \"" + phrase + "\"";
                charCommand = command.c_str();
                system(charCommand);


               string z;
               cout<<"=> ";
               cin>>z; 
               if(z=="google"){
                system("start https:\\www.google.com");
                phrase = "opeaning google,";
                 command = "espeak \"" + phrase + "\"";
                charCommand = command.c_str();
                system(charCommand);

               }

    }
          
}
