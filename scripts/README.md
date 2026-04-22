# Scripts

This folder contains helper scripts for preparing 42 Piscine files.

## How To Use

Run the combined pipeline:
```bash
./scripts/prep-code scripts=./scripts code=./code
./scripts/prep-code scripts=./scripts code=./
./scripts/prep-code
./scripts/prep-code c-01
./scripts/prep-code c-01 c-02
```

Run individual scripts:
```bash
./scripts/prep-main c-01
./scripts/prep-files c-01
./scripts/prep-header c-01
./scripts/prep-norminette c-01
CODE_ROOT=./code ./scripts/prep-main c-01
CODE_ROOT=./code ./scripts/prep-files c-01
CODE_ROOT=./code ./scripts/prep-header c-01
CODE_ROOT=./code ./scripts/prep-norminette c-01
```

## What The Scripts Handle

- `prep-main` moves `main()` out of `main.c` into the target exercise file as a block comment, or comments an in-file `main()` when needed.
- `prep-files` removes generated `main.c`, `a.out`, and `*.pdf` files under the target folder.
- `prep-header` adds or refreshes the 42-style header in `.c` files.
- `prep-norminette` normalizes whitespace, indentation, blank lines, and simple initialized declarations.
- `prep-code` runs the pipeline in order: `prep-main`, `prep-files`, `prep-header`.

## What The Scripts Do Not Handle

- `prep-main` does not invent or rewrite exercise code.
- `prep-files` does not remove files outside the target folder.
- `prep-header` does not edit function bodies.
- `prep-norminette` does not perform semantic refactors or style fixes beyond the supported whitespace/declaration cleanup.
- `prep-code` does not auto-correct invalid configuration paths.