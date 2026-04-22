# Scripts

This folder contains helper scripts for preparing 42 Piscine files.

## How To Use

Use `prep-code` for the full pipeline. Pick the command that matches your folder layout:
`scripts=` and `code` uses the project folder as root, and path is relative to that.
```bash
./scripts/prep-code scripts=./scripts code=./code
./scripts/prep-code scripts=./scripts code=./
./scripts/prep-code
./scripts/prep-code c-01
./scripts/prep-code c-01 c-02
```

The `CODE_ROOT=./code` prefix below is only needed when you run an individual script directly and your exercise folders live under `code/`.

Run individual scripts directly if you want one step only:
```bash
./scripts/prep-x c-01 CODE_ROOT=./code
./scripts/prep-x c-01
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
