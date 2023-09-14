#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int h = 0, m = 0, s = 0;

    while(1)
    {
        system("cls"); // clear the screen
        printf("\n\n\n\n\n\n\n\t\t\t\t %02d:%02d:%02d", h, m, s);
        fflush(stdout); // flush the output buffer

        s++; // increment seconds
        if(s == 60)
        {
            m++; // increment minutes
            s = 0; // reset seconds
        }
        if(m == 60)
        {
            h++; // increment hours
            m = 0; // reset minutes
        }
        if(h == 24)
        {
            h = 0; // reset hours
        }

        Sleep(1000); // sleep for 1 second
    }

    return 0;
}
