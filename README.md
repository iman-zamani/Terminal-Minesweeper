# Terminal Minesweeper

Welcome to **Terminal Minesweeper**!
This is my very first programming project — the code is **dirty, messy, and far from perfect**, but it works! It's a simple yet challenging Minesweeper game that you can play directly in your terminal.

Originally built for Windows, the game now also runs on Unix-like systems such as macOS and Linux, with some limitations in how the console characters are displayed.

## Features

* Multiple difficulty levels
* Customizable game grid sizes
* Timer and scoring system
* Interactive console-based UI with color highlights

## Prerequisites

To compile and run this game, you'll need:

* GCC compiler
* A Windows or Unix-like environment (macOS / Linux supported, though characters may not display exactly as intended).

## Compilation

To compile the Minesweeper game, use the following GCC command:

```bash
gcc -o minesweeper mini.c -w
```

This will compile the `mini.c` file into an executable named `minesweeper.exe`.
The `-w` flag is used to suppress all compiler warnings, which keeps the output cleaner.

## Running the Game

After compiling, you can start the game by running:

```bash
./minesweeper
```

Follow the on-screen prompts to navigate through the menus and start playing!

## Game Controls

* Use `W` and `S` to navigate **up** and **down** through the menu options.
* Use `A` and `D` to navigate **left** and **right** within the game grid.
* Press `1` to **place or remove a flag**.
* Press `2` to **reveal a cell**.
* Press `Q` to **quit** the game during gameplay.

## Notes

* On Windows, the game displays as intended.
* On Unix-like systems (macOS/Linux), the game works but the console graphics may not render correctly.

## License

Terminal Minesweeper is open-source software licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.
