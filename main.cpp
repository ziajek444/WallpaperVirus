#include <cstdlib>
#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char *argv[])
{
    SystemParametersInfo( SPI_SETDESKWALLPAPER, 0, (PVOID)"tapeta.jpg", SPIF_UPDATEINIFILE || SPIF_SENDWININICHANGE );
    
    //system("PAUSE");
    return EXIT_SUCCESS;
}
