## General info 
Implementation of libc `string.h` functions with some additions, including `sscanf` and `ssprintf` with all specifiers and flags. Fully covered with unit-tests under TDD approach. 

## Goal & requirements 
The goal of this project was to get comfortable with strings handling in C, explore tokenization and solidify our knowledge & skills of structured programming, while trying to replicate libc strings handling functions.

## Key learnings
- Working with strings in C
- Functions with variable number of arguments
- Creating & linking static libs, building project with Makefile
- Unit-testing with Check framework, exploring TDD approach
- Exploring & evaluating test coverage with gcov

The most valuable discovery out of all of them is definitely TDD methodology. The experience of getting instant feedback by unit tests while writing `sscanf` was invaluable and kept me motivated during refactoring & bug fixes sessions.

## Build
```
$ git clone ...
$ cd repo/src/
$ make test
$ ./s21_test_runner
$ make gcov_report /* To check test coverage, requires lcov utility */
```
