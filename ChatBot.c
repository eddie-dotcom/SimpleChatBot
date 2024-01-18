/*Welcome to the AI ChatBot project in C! This simple console-based chatbot interacts with the user based on predefined commands.
@ Author 
     * Created by : Edmond Kumah (eddie-dotcom)
     * 
     * Date : 04/01/2024 
*/

#include <stdio.h>
#include <conio.h> 
#include <string.h>
#include <time.h>

char user_input[];

int main()
{

    system("cls"); //clear the console screen before running the program
    printf("Welcome to AI ChatBot.\n");

    while (1) 
    {
        printf("User ==>");
        gets(user_input); // Read user input.
        if (strcasecmp(user_input, "Exit") == 0) //strcasecmp is used to compare two strings 
        {
            system("cls");
            printf("bot ==> Ok...\n");
            break; // Exit the loop and end the program.
        }

        else if (strcasecmp(user_input, "Hi ChatBot") == 0)
        {
            printf("Hello...\n");
            printf("Welcome to my ChatBot\n");
        }

        else if (strcasecmp(user_input, "ChatBot") == 0) 
        {
            printf("Hi...\n");
            printf("How may I help you?\n");
        }

        else if (strcasecmp(user_input, "Good Morning ChatBot") == 0)
        {
            printf("Good Morning...\n");
            printf("How may I help you?\n");
        }

        else if (strcasecmp(user_input, "Good Afternoon ChatBot") == 0)
        {
            printf("Good Afternoon...\n");
        }

        else if (strcasecmp(user_input, "Good Evening ChatBot") == 0)
        {
            printf("Good Evening...\n");
        }

        else if (strcasecmp(user_input, "Good Night ChatBot") == 0)
        {
            printf("Good Night...\n");
        }

        else if (strcasecmp(user_input, "Open Chrome") == 0)
        {
            printf("OK... Opening Chrome\n");
            system("Start Chrome");
        }

        else if (strcasecmp(user_input, "Open Notepad") == 0)
        {
            printf("OK... Opening Notepad\n");
            system("Start Notepad");
        }

        else if (strcasecmp(user_input, "Open Command Prompt") == 0)
        {
            printf("OK... Opening Command Prompt\n");
            system("Start cmd");
        }

        else if (strcasecmp(user_input, "Open Youtube") == 0)
        {
            printf("OK... Opening Youtube\n");
            system("Start http://youtube.com");

           }
            else if (strcasecmp(user_input,"Open VLC") == 0)
           {
                 printf("OK... Opening VLC\n");
                 system("Start vlc media player");
           } 

            else if (strcasecmp(user_input, "time") == 0) 
            {
                time_t s, val = 1;
                struct tm *current_time;

                // time in seconds
                s = time(NULL);
                current_time = localtime(&s);

                // print time in minutes
                // print hour and seconds

                printf("bot ==>%02d:%02d:%02d\n", current_time->tm_hour, current_time->tm_min, current_time->tm_sec); 
            }
        }
    }
