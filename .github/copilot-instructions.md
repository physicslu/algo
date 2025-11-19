<!-- .github/copilot-instructions.md - guidance for AI coding assistants -->
# Copilot / AI Assistant Instructions

Purpose: Give an AI coding agent the minimal, actionable knowledge to be productive in this repository.

- **Project type:** Algorithm practice examples in C and Python (small, self-contained chapter folders).
- **Top-level layout:** `chNN_topic/` directories each contain `main.c`, `main.py`, and `notes.md`. See `ch01_binary_search/` for an example.

Quick orientation
- **Why this structure exists:** Each chapter holds parallel implementations (C and Python) plus a `notes.md` explaining intent, complexity, and corner cases. The repo is not a single app — it's a collection of examples and learning artifacts.
- **Key files:** `README.md` (project goals), `setup_chapters.py` (auxiliary scripting), and per-chapter `notes.md` and `main.*` files.

Build & run (project-specific)
- **C (Windows / MinGW):** The workspace includes a VS Code task `cppbuild: C/C++: gcc.exe build active file` which invokes `C:/MinGW/bin/gcc.exe`. To compile a chapter C file manually (PowerShell):

  ```pwsh
  C:/MinGW/bin/gcc.exe ch01_binary_search/main.c -o ch01_binary_search/main.exe
  .\ch01_binary_search\main.exe
  ```

- **Python:** Run chapter Python files with the system Python:

  ```pwsh
  python ch01_binary_search/main.py
  ```

Repository conventions (important to follow)
- **Naming:** Chapters use the `chNN_description` pattern (two-digit chapter index). Create new chapters using the same pattern.
- **Per-chapter trio:** Always include `main.c`, `main.py`, and `notes.md`. `notes.md` contains problem description, key idea, complexity, edge cases, and learning notes.
- **Small scope:** Changes should avoid introducing large frameworks, new deps, or CI unless requested by the maintainer — this repo is intentionally dependency‑light.

Coding patterns & examples
- **Example C entrypoint:** `ch01_binary_search/main.c` shows the minimal structure used across chapters — small `main()` programs that demo the algorithm.
- **Notes as source of truth:** Use `notes.md` in a chapter to understand the intended algorithm, edge cases, and expected time/space complexity before changing code.

When an AI agent edits code
- **Preserve `notes.md` content:** If you modify implementations, update `notes.md` to reflect algorithm changes and complexity numbers.
- **Keep changes focused:** Prefer minimal, self-contained edits inside a single chapter folder. If a change touches multiple chapters, explain rationale in the PR description.
- **Build verification:** After changing C code, compile the affected `main.c` locally using the workspace GCC path. For Python edits, run the corresponding `main.py`.

Useful patterns to reference in PRs
- **PR title:** start with `chNN: ` followed by short description (e.g., `ch03: fix recursion base-case in example`).
- **PR body:** one-line summary, list of changed files, how to build/run locally (commands), and any assumptions.

What not to do
- Don't add heavy external dependencies or global build systems without asking the repo owner.
- Don't change chapter directory names or remove `notes.md` — these are used consistently across the repo.

If you need additional context
- Open `README.md` for goals and `ch01_binary_search/notes.md` for a canonical per-chapter layout and content style.
- If a workflow or environment detail is missing (e.g., Python version, MinGW install), request it in the PR or issue.

Questions for the maintainer
- Should new chapters include any specific CI checks or linting rules?
- Preferred Python version and any formatting tools to use (black, clang-format, etc.)?

End of file.
