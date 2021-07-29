
/* Main.cpp - the application entry point */

/* I studied (and am still studying) cybersecurity so this should look real. Wish me luck... */

#include <iostream> /* Don't be alarmed if I use printf, iostream include stdio */
#include <windows.h>

/* *gulps* Here we go... there's no turning back now..  */
int main() {
    int continueValue = MessageBox(NULL, L"This hacking tool has the power to cause severe damage. Creator MD DEV is not responsible for any damage caused using this tool. Continue?", L"WARNING - POWERFUL TOOL", MB_OKCANCEL | MB_ICONWARNING | MB_APPLMODAL); /* haven't testind this, don't know if this works */ 
    if (continueValue == 2) {
        return -1;
    }
    else {
        
    }
    

/* Now we can start with the good stuff */
printf ("hack01\n");
printf ("≈≈≈≈≈≈≈≈\n");
printf ("\n\nEnter target IP: >>>");
std::string ipaddress;
std::cin >> ipaddress;
/* All I have time for, stay tuned! */



}
