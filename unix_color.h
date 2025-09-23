
#include <stdio.h>
#include <unistd.h> 

static const int ANSI_FROM_WIN_BASE[8] = { 30, 34, 32, 36, 31, 35, 33, 37 };

static inline void color(int attr)
{
    if (!isatty(STDOUT_FILENO)) return;

    int f =  attr       & 0x0F;      // foreground nibble
    int b = (attr >> 4) & 0x0F;      // background nibble

    int f_base   = f & 7;            // 0..7
    int f_bright = (f & 8) != 0;     // intensity bit
    int b_base   = b & 7;            // 0..7
    int b_bright = (b & 8) != 0;     // intensity bit

    // Foreground: 30..37 (normal) or 90..97 (bright)
    int fg = ANSI_FROM_WIN_BASE[f_base] + (f_bright ? 60 : 0);

    // Background: 40..47 (normal) or 100..107 (bright)
    int bg = (ANSI_FROM_WIN_BASE[b_base] + 10) + (b_bright ? 60 : 0);
    printf("\x1b[0m\x1b[%d;%dm", fg, bg);
    fflush(stdout);
}
