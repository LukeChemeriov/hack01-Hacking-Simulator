
/* Main.cpp - the application entry point */

/* I studied (and am still studying) cybersecurity so this should look real. Wish me luck... */

#include <iostream> /* Don't be alarmed if I use printf, iostream include stdio */
#include <windows.h>
#include <conio.h>

/* *gulps* Here we go... there's no turning back now..  */
int main() {
    int continueValue = MessageBox(NULL, L"This hacking tool has the power to cause severe damage. Creator DDC DEV is not responsible for any damage caused using this tool. Continue?", L"WARNING - POWERFUL TOOL", MB_OKCANCEL | MB_ICONWARNING | MB_APPLMODAL); /* haven't tested this, don't know if this works */ 
    switch(continueValue) {
    case ID_OK:
        printf("starting.........");
    case ID_CANCEL:
        return 0;
    }
    

/* Now we can start with the good stuff */
printf ("hack01\n");
printf ("≈≈≈≈≈≈≈≈\n");
printf ("\n\nEnter target IP: >>>");
std::string ipaddress;
std::cin >> ipaddress;
printf("Hacking target IP...");
Sleep(2000);
printf("Forcing network disconnect...");
Sleep(4000);
printf("Connecting to " + ipadress + " for man-in-the-middle attack...");
Sleep(1000);
printf("Placing Keylogger...");
Sleep(3000);
printf("Extracting passwords...");
Sleep(10000);
printf("Device name: RBEKG-539639\nUsername: User\nPassword: gjGNGJYk58683");
printf("======================================");
printf("Press any key to terminate application");
extern int _getchar();
int uselessvaluethatwonteverbeused = _getchar()
return 0;


}
