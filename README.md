# 42kl-piscine-0426

This repository contains 42 Piscine practice work and helper scripts to prepare code files.

## Current Folder Organization

Top level:
- code/: main work area on this machine.
- scripts/: automation scripts.
- resources/: reference material.
- prep-code: root launcher for scripts/prep-code.

Inside code/:
- c-00 to c-06: C piscine exercises.
- exam-00/: exam exercises.
- rush-00 and rush-01/: rush projects.
- shell-00 and shell-01/: shell exercises.
- argc-argv and _c-04/: extra work folders.

## Scripts

scripts/prep-main
- Input can be one .c file or one folder.
- For a folder, it processes each exercise folder that contains main.c.
- It extracts only main() from main.c, appends it as commented code at the bottom of the selected target .c file, then deletes that main.c.
- Auto target selection per exercise folder:
  1) Heuristic first: detect function calls inside main() and match function_name.c.
  2) Fallback: if no heuristic match, use the only non-main .c file.
  3) If still ambiguous, fail and print candidate list.
- If sibling main.c does not exist but a target file already contains an active main(), it comments that in-file main() instead.

scripts/prep-header
- Input is one folder.
- Recursively adds or refreshes 42-style header in all .c files under that folder.
- Keeps the fixed header shape and updates only Created/Updated timestamps and filename/by values.

scripts/prep-code
- Configures script and code locations, and runs both scripts in order:
  1) prep-main
  2) prep-header

## prep-code Usage

Configure paths only (does not run scripts):
```bash
./prep-code scripts=./scripts code=./code
./prep-code scripts=./scripts code=./
```

Run with saved configuration:
```bash
./prep-code
```

Run specific folders only:
```bash
./prep-code c-01
./prep-code c-01 c-02
```

## Structure Variants

This machine:
- 42KL-PISCINE-0426/code/c-00/
- 42KL-PISCINE-0426/scripts/prep-header

Another machine example:
- 42KL-PISCINE-0426/c-00/
- 42KL-PISCINE-0426/scripts/prep-header

For the second layout, configure once with:
```bash
./prep-code scripts=./scripts code=./
```
