# LeetCode Solutions

A collection of LeetCode problem solutions organized for practice and reference.

## Table of Contents
- About
- Organization & naming convention
- Languages / runtimes
- How to run / test solutions
- How to add a new solution
- Tags & problem metadata
- Contribution guidelines
- License & Contact

## About
This repository contains solutions to algorithmic problems (e.g., LeetCode). Solutions may be implemented in different languages. Each solution should include the problem number/title, approach, and runtime/space notes.

## Organization & naming convention
Use a consistent folder/file naming strategy, for example:
- /[language]/[problem-number]_[short-title].[ext]
  - e.g., python/0001_two_sum.py
  - e.g., cpp/0001_two_sum.cpp

Alternatively, group by difficulty:
- /easy/
- /medium/
- /hard/

Include a small comment header at the top of each file:
- Problem title & number
- Brief approach explanation
- Complexity analysis (time/space)

## Languages / runtimes
Common languages:
- Python (run with `python file.py`)
- C++ (compile with g++)
- JavaScript (Node.js for console testing)

## How to run / test solutions
- Python: python python/0001_two_sum.py
- C++: g++ -std=c++17 cpp/0001_two_sum.cpp -o a.out && ./a.out
- JS: node javascript/0001_two_sum.js

For problems requiring custom inputs, include sample input and expected output in comments or a companion file.

## How to add a new solution
1. Create the file with the correct naming convention
2. Include problem metadata and approach
3. Add tests or sample runs
4. Open a PR describing the solution and any edge-cases handled

## Tags & problem metadata
Consider maintaining an index file (PROBLEMS.md or index.json) containing:
- number, title, difficulty, language, solved (true/false), link to solution
This helps you track progress.

## Contribution guidelines
- Keep solutions focused and readable
- Prefer idiomatic usage for each language
- Include complexity analysis
- Cite references if following an external approach

## License & Contact
Add LICENSE if you want to share. Contact: https://github.com/stectorius
