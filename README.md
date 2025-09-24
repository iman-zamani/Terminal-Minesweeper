# Terminal Minesweeper

Welcome to Terminal Minesweeper! This is my first project, a simple yet challenging Minesweeper game played in the terminal. The game is built using C and utilizes Windows-specific features to manage input and output within the console window. Dive into the classic mine-clearing action with a text-based twist!

## Features

- Different levels of difficulty
- Customizable game grid sizes
- Timer and scoring system
- Interactive console-based user interface with color highlights

## Prerequisites

To compile and run this game, you'll need:
- GCC compiler
- Windows environment, as the game uses Windows-specific libraries for handling console output.

## Compilation

To compile the Minesweeper game, use the following GCC command:

```bash
gcc -o minesweeper mini.c -w
```

This will compile the `mini.c` file into an executable named `minesweeper.exe`. The `-w` flag is used to suppress all compiler warnings. This can make the compilation output cleaner :)


## Running the Game

After compiling, you can start the game by running the executable in the command line:

```bash
./minesweeper
```

Follow the on-screen prompts to navigate through the game menus and start playing!

## Game Controls

- Use `W` and `S` to navigate up and down through the menu options.
- Use `A` and `D` to navigate left and right within the game grid.
- Press `1` to place or remove a flag.
- Press `2` to reveal the contents of a cell.
- `Q` can be used to quit the game from the main gameplay screen.


## License

Terminal-Minesweeper is open-source software licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.
