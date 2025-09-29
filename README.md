# Terminal Minesweeper

Welcome to **Terminal Minesweeper**!
This was the **very first program I ever wrote in my life**. The code is **incredibly dirty, messy, and absolutely terrible**, honestly, it has no value to look at. But hey, it works, and you can play Minesweeper right in your terminal!!!!

Now with **full support for Windows, macOS, and Linux** — the game runs properly on all major platforms, with the same gameplay and visuals everywhere.

---

## Features

* Customizable game grid sizes
* Timer and scoring system
* Interactive console-based UI with color highlights
* Runs on **Windows, Mac, and Linux** with no compromises 

---

## Prerequisites

To compile and run this game, you’ll need:

* Clang compiler
* A Windows, macOS, or Linux environment

---

## Compilation

To compile the Minesweeper game, use:

```bash
clang -o minesweeper mini.c -w
```

This compiles the `mini.c` file into an executable named `minesweeper`.
The `-w` flag suppresses all compiler warnings (trust me, you don’t want to see them).

---

## Running the Game

After compiling, start the game with:

```bash
./minesweeper
```

Follow the on-screen prompts to navigate the menus and start playing!

---

## Game Controls

* **Enter** → **Place or remove a flag**
* **Spacebar** → **Reveal a cell**
* `W` / `S` → Move **up** and **down** in menus
* `A` / `D` → Move **left** and **right** on the grid
* `Q` → **Quit** the game

---
## License

Terminal Minesweeper is under the MIT License. See the [LICENSE](LICENSE) file for details.
