<div align="center">

# C Craft

**Practice C from the terminal. Read a subject, write a function, and test your work.**

33 exercises · 25 quiz questions · 1 timed exam

[Getting started](#getting-started) · [Exercises](#exercise-catalog) · [Commands](#command-reference) · [How it works](#how-it-works)

</div>

## About

C Craft is a terminal-based C practice toolkit built with Bash, Make, and C test programs. It provides exercise subjects, checks your implementations against predefined cases, and records points for completed exercises. A multiple-choice quiz and a four-stage exam offer two other ways to practice.

This repository contains the learning tools and test harnesses. You write your own solutions in a separate practice directory.

## Exercise catalog

The 33 exercises cover arithmetic, strings, arrays, memory operations, and function pointers. Each subject specifies the required filename, prototype, allowed functions, and available points.

| Area | Exercises | Focus |
| --- | --- | --- |
| Numbers and arithmetic | `sum`, `digit`, `saverge`, `even`, `power`, `factorial`, `fibonacci`, `calc` | Integer operations, weighted averages, sequences, and a calculator |
| Characters and validation | `value_ascii`, `index_letter`, `str_is_alpha`, `str_is_numbers`, `check_email` | ASCII values, character checks, and an exercise-specific `@ccraft.com` rule |
| String operations | `strlen`, `upper_case`, `lower_case`, `strcmp`, `char_count`, `no_space`, `str_rev`, `strcapitalize`, `strstr`, `strchr` | Traversal, comparison, searching, and transformation |
| Conversions and bits | `atoi`, `itoa`, `bintdec`, `swap_bits` | Text/number conversion, binary input, and swapping a byte's two halves |
| Integer arrays | `max_num`, `min_num`, `rev_int_arr`, `sort_int_arr` | Searching, reversing, and sorting |
| Memory and callbacks | `memset`, `striteri` | Byte operations and modifying characters through a function pointer |

Use the exact exercise names above, including `saverge`, when running commands.

## Getting started

### Requirements

- A Linux terminal with Bash, Git, Make, and a compiler available as `gcc`.
- `whiptail` for the interactive quiz.
- GNU `date` for the exam's one-hour deadline.

The scripts expect the toolkit at `~/C_Craft`. The exam uses `date -d`, so the complete workflow does not run unchanged with the standard macOS tools.

### Install

Run the included [installation script](Processing/Scripts/install.sh) from a separate setup checkout:

```bash
git clone https://github.com/mr-youbella/C_Craft.git C_Craft-setup
bash C_Craft-setup/Processing/Scripts/install.sh
```

The installer clones the toolkit into `~/C_Craft`, attempts to install `whiptail` and Make through the available package manager, and adds the `ccraft` alias to `~/.bashrc` and `~/.zshrc`. Install Git and `gcc` beforehand; the script does not install them.

An existing `~/C_Craft` directory is replaced during installation, including its saved exercise points. Keep the setup checkout separate from that directory.

Open a new terminal after installation, then display the help and create your practice directory:

```bash
ccraft
mkdir -p "$HOME/ccraft-practice"
cd "$HOME/ccraft-practice"
ccraft ex
```

Run exercises from a dedicated practice directory outside both the checkout and your home directory itself. The CLI copies the toolkit into a local `C_Craft/` folder and removes that folder after the command finishes. Keep that name reserved for the tool.

<details>
<summary>Manual setup</summary>

If you prefer to manage dependencies and the shell alias yourself:

```bash
git clone https://github.com/mr-youbella/C_Craft.git "$HOME/C_Craft"
alias ccraft='bash "$HOME/C_Craft/Processing/Scripts/alias.sh"'
```

If `~/C_Craft` already exists, use that checkout instead of cloning over it. The alias above applies to the current shell; add it to `~/.bashrc` or `~/.zshrc` to keep it in new terminals. Create and enter a practice directory as shown above.

</details>

### Work through an exercise

Read the subject before writing your solution:

```bash
ccraft su_strlen
```

Create `ft_strlen.c` in your practice directory using the requested prototype. Include the function implementation without a `main`; the test harness provides its own.

```text
~/ccraft-practice/
├── ft_strlen.c
├── ft_sum.c
└── ...
```

Test one exercise, then check or rerun your work:

```bash
ccraft strlen
ccraft status
ccraft lvl
ccraft testall
```

`testall` runs the testers for solution files it finds and lists missing exercises. A successful exercise test stores its point value under `~/C_Craft/Tests/Level/`; rerunning it does not add the same points repeatedly.

## Command reference

Run `ccraft` without arguments to display the built-in help.

| Command | Purpose |
| --- | --- |
| `ccraft ex` | List the 33 exercise names |
| `ccraft su_strlen` | Read a subject; replace `strlen` with another exercise name |
| `ccraft strlen` | Compile and run that exercise's tester |
| `ccraft testall` | Test every available solution in the practice directory |
| `ccraft status` | Display completion information from stored points |
| `ccraft lvl` | Display total exercise points and the corresponding level |
| `ccraft qu` / `ccraft quiz1` | List quizzes / start the 25-question quiz |
| `ccraft exam` / `ccraft exam00` | List exams / start Exam 00 |
| `ccraft wnew` | Display the bundled update notes |
| `ccraft up` | Pull updates into `~/C_Craft` |
| `ccraft del` | Prompt to remove the toolkit and its installed aliases |

## Quiz and exam

**Quiz 1** uses keyboard-controlled `whiptail` menus for 25 questions about C syntax, types, operators, arrays, pointers, and control flow. It displays the final score and appends it to `C_Craft_Quiz.txt` in your practice directory.

**Exam 00** creates a `CC_Exam00/` directory with subjects and solution files. Its four stages cover incrementing through a pointer, subtraction, counting uppercase `Y` characters, and swapping integers. Each stage is worth 25 points. The script checks the one-hour deadline when you request grading with `rateme`.

Inside the exam prompt, use `help`, `status`, `rateme`, or `finish`. Keep the solution filenames created by the runner: `inc.c`, `subtract.c`, `occ_y.c`, and `swap.c`; some displayed subjects use different names.

## How it works

The [CLI script](Processing/Scripts/alias.sh) routes commands to the [Makefile](Processing/Makefile), quiz, exam, or progress scripts. The Makefile holds the exercise subjects and compiles each C tester with `gcc -Wall -Wextra -Werror`.

Each tester includes your `ft_*.c` file through a relative path, calls the function with predefined inputs, and prints the result. The [shared test helper](Tests/Functions/lib_tests.h) writes the exercise's points when all its cases pass. Progress is stored locally in plain files.

### Current limitations

- The `fibonacci` and `itoa` testers each declare both a counter and an array named `test` in the same scope. These harnesses need correction before they can compile, independently of your solution. The runner hides compiler diagnostics behind a generic compilation message.
- A later failed test does not clear previously awarded points. Treat `status` and `lvl` as saved progress, and rerun the exercise to check its current behavior. Those two scripts also create and remove a file named `0` in the working directory; keep that name reserved.
- Tests check a fixed set of cases. They do not enforce the subjects' allowed-function rules or provide memory-error checks.

## Repository structure

```text
C_Craft/
├── Processing/
│   ├── Makefile              # Subjects and exercise test targets
│   └── Scripts/              # CLI, installer, batch tests, and status
├── Quizzes/
│   └── quiz1.sh              # Interactive C quiz
└── Tests/
    ├── Functions/            # 33 C exercise testers and shared helper
    ├── Level/                # Stored points and level display
    └── Exams/exam00/         # Exam runner and four C testers
```

---

Created by [mr-youbella](https://github.com/mr-youbella) · [Report an issue](https://github.com/mr-youbella/C_Craft/issues) · [Instagram](https://www.instagram.com/master_youbella)
