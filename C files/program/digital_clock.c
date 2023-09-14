#include <stdio.h>
#include <time.h>

int main() {
    time_t currentTime;
    struct tm *localTime;

    while (1) {
        // Get the current time
        currentTime = time(NULL);
        localTime = localtime(&currentTime);

        // Print the time in a digital format
        printf("%02d:%02d:%02d\r", localTime->tm_hour, localTime->tm_min, localTime->tm_sec);
        fflush(stdout);

        // Wait for one second
        sleep(1);
    }

    return 0;
}
// #include <stdio.h>

// int main() {
//   int h = 0, m = 0, s = 0; // initialize hours, minutes, and seconds to zero

//   while(1) { // loop indefinitely
//     // clear screen
//     printf("\033[2J");
//     printf("\033[%d;%dH", 0, 0);

//     // print current time
//     printf("%02d:%02d:%02d", h, m, s);

//     // increment seconds
//     s++;
//     if (s == 60) {
//       s = 0;
//       m++;
//       if (m == 60) {
//         m = 0;
//         h++;
//         if (h == 24) {
//           h = 0;
//         }
//       }
//     }

//     // wait for one second
//     int i;
//     for(i=0;i<100000000;i++);
//   }

//   return 0;
// }

