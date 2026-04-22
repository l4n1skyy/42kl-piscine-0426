# Scripts

This folder contains helper scripts for preparing 42 Piscine files.

## How To Use

Use `prep-code` to run all the other scripts. First save your paths, then run the script normally.
```bash
./scripts/prep-code scripts=./scripts code=./code
./scripts/prep-code scripts=./scripts code=./
```

After that, run the pipeline without repeating the path setup:
```bash
./scripts/prep-code
./scripts/prep-code c-01
./scripts/prep-code c-01 c-02
```

You can also configure once and then run individual scripts directly:
```bash
./scripts/prep-x scripts=./scripts code=./code
./scripts/prep-x c-01
```

## What The Scripts Handle
- `prep-code`
  - master script that runs the other scripts in order: `prep-main`, `prep-files`, `prep-header`.
- `prep-main`
  - moves `main()` out of `main.c` into the target exercise file as a plain block comment
  - comments an in-file `main()` when needed.
- `prep-files`
  - removes generated `main.c`, `a.out`, and `*.pdf` files under the target folder.
- `prep-header`
  - adds or refreshes the 42-style header in `.c` files.
- `prep-norminette`
  - normalizes whitespace, indentation, blank lines, and simple initialized declarations.

## What The Scripts Do Not Handle
- `prep-norminette` does not perform semantic refactors or style fixes beyond the supported whitespace/declaration cleanup.
- `prep-code` does not auto-correct invalid configuration paths.
