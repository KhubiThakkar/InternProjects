# Modern Periodic Table Application

![Logo](/6_ImagesAndVideos/periodiclogo.jpg)

Build | Code Coverage | Unit Testing | Static Analysis | Git Inspector | Memory Leak
------|----------|-------|-------- | --- | ---
[![C Compile - Build](https://github.com/KhubiThakkar/Periodic-Table/actions/workflows/build.yml/badge.svg?branch=master)](https://github.com/KhubiThakkar/Periodic-Table/actions/workflows/build.yml) | [![CI-Coverage](https://github.com/KhubiThakkar/Periodic-Table/actions/workflows/coverage.yml/badge.svg?branch=master)](https://github.com/KhubiThakkar/Periodic-Table/actions/workflows/coverage.yml) | [![Unit Test - Unity](https://github.com/KhubiThakkar/Periodic-Table/actions/workflows/unit-test.yml/badge.svg?branch=master)](https://github.com/KhubiThakkar/Periodic-Table/actions/workflows/unit-test.yml) | [![Code Quality - Static Code - Cppcheck](https://github.com/KhubiThakkar/Periodic-Table/actions/workflows/cpp-check.yml/badge.svg?branch=master)](https://github.com/KhubiThakkar/Periodic-Table/actions/workflows/cpp-check.yml) | [![Contribution Check - Git Inspector](https://github.com/KhubiThakkar/Periodic-Table/actions/workflows/gitinspector.yml/badge.svg?branch=master)](https://github.com/KhubiThakkar/Periodic-Table/actions/workflows/gitinspector.yml) | [![Dynamic Memory Check - Valgrind](https://github.com/KhubiThakkar/Periodic-Table/actions/workflows/valgrind.yml/badge.svg?branch=master)](https://github.com/KhubiThakkar/Periodic-Table/actions/workflows/valgrind.yml)


## Folder Structure
Folder             | Description
-------------------| -----------------------------------------
`1_Requirements`   | Documents detailing requirements and research
`2_Design`         | Documents specifying design details
`3_Implementation` | All code and documentation
`4_Test_plan`      | Documents with test plans and procedures
`5_Report`         | Documented details of the project
`6_ImagesandVideo` | All the images used in Readme and the working of the application
`7_Other`          | Output files for Test Plans

## Contributors List and Summary

SF Id. |  Name   |    Features    | Issuess Raised |Issues Resolved|No Test Cases|Test Case Pass
-------|---------|----------------|----------------|---------------|-------------|--------------
`261775` | Khubi Thakkar  | LR00, LR01, LR02, LR03, LR04, LR05   | 15     | 9   |7  |7 

## Challenges Faced and How Was It Overcome

**Sr no** | **Problem** | **Solution**
| ------ | ----- | ------ |
1 | Build workflow not working | Was using the absolute address, so changed to relative address.
2 |Test case not compiling | The file pointer which were passed multiple times in functions was getting closed inside the function. So declaring different pointers for every case.
3 |Code coverage| The code coverage required for me to run the code manually with inputs, so changed the executable with the executable of the test file. 
4 |Test case for void functions| Converted them to int functions and return 0 (on success) & return 1 (on failure)
5 |Unit testcase workflow not working| Needed to add the build function to generate the executables of project_main.c file
6 |Valgrind workflow not working| Needed to add the build function to generate the executables of project_main.c file
7 | Requirement gathering was difficult and new concept | Read through multiple papers, formats and ways of doing it. Referred projects to understand the concept
8 | UML diagrams | They were very difficult and tricky to understand, so went through multiple blogs, articles and youtube videos to understand them and find a suiting diagram for the project
9 | *.gcda and *.gcno files where generated at different location | Used the move command to save them at different location in Makefile


## Learning Resources
1. [markdownCheatsheet](https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet)
2. [markdownBasics](https://guides.github.com/features/mastering-markdown/)
3. [git inspector](https://github.com/ejwa/gitinspector.git)
4. [github workflow](https://docs.github.com/en/actions/learn-github-action)
