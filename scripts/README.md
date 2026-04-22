# Scripts

This folder contains helper scripts for preparing 42 Piscine files.

## How To Use

Use `prep-code` for the full pipeline.
```bash
./scripts/prep-code scripts=./scripts code=./code
./scripts/prep-code scripts=./scripts code=./
./scripts/prep-code
./scripts/prep-code c-01
./scripts/prep-code c-01 c-02
```

If your exercise folders live under `code/`, set the root once in your shell first:
```bash
export CODE_ROOT=./code
```

Run individual scripts directly if you want one step only:
```bash
./scripts/prep-main c-01
./scripts/prep-files c-01
./scripts/prep-header c-01
./scripts/prep-norminette c-01
```

## What The Scripts Handle
- `prep-code` runs the pipeline in order: `prep-main`, `prep-files`, `prep-header`.
- `prep-main`
  - moves `main()` out of `main.c` into the target exercise file as a block comment
  - comments an in-file `main()` when needed.
- `prep-files` removes generated `main.c`, `a.out`, and `*.pdf` files under the target folder.
- `prep-header` adds or refreshes the 42-style header in `.c` files.
- `prep-norminette` normalizes whitespace, indentation, blank lines, and simple initialized declarations.

## What The Scripts Do Not Handle
- `prep-norminette` does not perform semantic refactors or style fixes beyond the supported whitespace/declaration cleanup.
- `prep-code` does not auto-correct invalid configuration paths.
