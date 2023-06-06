# TEST PLAN:

## Table: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** | **Means of Test** |**Type Of Test**  | 
|-------|--------------------------------------------------------------|------------|-------------|----------------|------------------| ---
|  H_01       |Searching the element|<ul><li>Explore <li>search by Name <li>input "Iron"</ul>|[Expected OP](/7_Other/H_01ExpectOP.txt)|[Actual OP](/7_Other/H_01ActualOP.txt)| Tester| Requirement based |  
|  H_02       |Searching the element|<ul><li>Explore <li>search by Symbol <li>input "Fe"</ul>|[Expected OP](/7_Other/H_02ExpectOP.txt)| [Actual OP](/7_Other/H_02ActualOP.txt)|Tester | Requirement based |
|  H_03       |Searching the element|<ul><li>Explore <li>search by Atomic Number <li>input "50"</ul>|[Expected OP](/7_Other/H_03ExpectOP.txt)|[Actual OP](/7_Other/H_03ActualOP.txt)|Tester|Requirement based |
|  H_04      |Exit system|<ul><li>Quit <li>Yes </ul>|[Expected OP](/7_Other/H_04ExpectOP.txt)|[Actual OP](/7_Other/H_04ActualOP.txt)|Tester |Requirement based |
|  H_05       | Incorrect name | <ul><li>Explore <li>search by Name <li>input "element"</ul>|[Expected OP](/7_Other/H_05ExpectOP.txt)|[Actual OP](/7_Other/H_05ActualOP.txt)|Tester |Scenario based    |
|  H_06      | Incorrect formatting of name | <ul><li>Explore <li>search by Name <li>input "iron"</ul>|[Expected OP](/7_Other/H_06ExpectOP.txt)|[Actual OP](/7_Other/H_06ActualOP.txt)|Tester |Scenario based    |
|  H_07      | Incorrect symbol | <ul><li>Explore <li>search by Symbol <li>input "ff"</ul>|[Expected OP](/7_Other/H_07ExpectOP.txt)|[Actual OP](/7_Other/H_07ActualOP.txt)|Tester |Scenario based    |
|  H_08      | Incorrect Atomic Number | <ul><li>Explore <li>search by Atomic Number <li>input "1.2"</ul>|[Expected OP](/7_Other/H_08ExpectOP.txt)|[Actual OP](/7_Other/H_08ActualOP.txt)|Tester |Scenario based    |
|  H_09      | Incorrect format of symbol | <ul><li>Explore <li>search by Symbol <li>input "fe"</ul>|[Expected OP](/7_Other/H_09ExpectOP.txt)|[Actual OP](/7_Other/H_09ActualOP.txt)|Tester |Scenario based    |
|  H_10      | Not search more elements | <ul><li>Explore <li>After searching <li>input "no" </ul>|[Expected OP](/7_Other/H_10ExpectOP.txt)|[Actual OP](/7_Other/H_10ActualOP.txt)|Tester |Scenario based    |


## Table: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** | **Means of Test** | **Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|---
|  L_01       |Test byName function| <ul><li>FILE *ptr = fopen("./src/data.csv", "r");<li>name1[]|1|1|Unit Test Script | Scenario based  |
|  L_02       |Test byName function| <ul><li>FILE *ptr = fopen("./src/data.csv", "r");<li>name2[]|0|0|Unit Test Script |Requirement based |
|  L_03       |Test byName function| <ul><li>FILE *ptr = fopen("./src/data.csv", "r");<li>name3[]|0|0|Unit Test Script |Requirement based |
|  L_04       |Test byName function| <ul><li>FILE *ptr = fopen("./src/data.csv", "r");<li>name4[]|1|1|Unit Test Script |Scenario based |
|  L_05       |Test bySym function| <ul><li>FILE *ptr = fopen("./src/data.csv", "r");<li>sy1[]|0|0|Unit Test Script |Requirement based |
|  L_06      |Test bySym function| <ul><li>FILE *ptr = fopen("./src/data.csv", "r");<li>sy3[]|0|0|Unit Test Script |Requirement based |
|  L_07       |Test bySym function| <ul><li>FILE *ptr = fopen("./src/data.csv", "r");<li>sy4[]|1|1|Unit Test Script |Scenario based |
|  L_08       |Test bySym function| <ul><li>FILE *ptr = fopen("./src/data.csv", "r");<li>sy2[]|1|1|Unit Test Script |Scenario based |
|  L_09       |Test byAtNum function| <ul><li>FILE *ptr = fopen("./src/data.csv", "r");<li>atnm2[]|1|1|Unit Test Script |Scenario based |
|  L_10       |Test byAtNum function| <ul><li>FILE *ptr = fopen("./src/data.csv", "r");<li>atnm3[]|1|1|Unit Test Script |Scenario based |
|  L_11      |Test byAtNum function| <ul><li>FILE *ptr = fopen("./src/data.csv", "r");<li>atnm1[]|0|0|Unit Test Script |Requirement based |
|  L_12       |Test byAtNum function| <ul><li>FILE *ptr = fopen("./src/data.csv", "r");<li>atnm4[]|0|0|Unit Test Script |Requirement based |
|  L_13       |Test byAtNum function| <ul><li>FILE *ptr = fopen("./src/data.csv", "r");<li>atnm5[]|1|1|Unit Test Script |Boundary based |
|  L_14      |Test byAtNum function| <ul><li>FILE *ptr = fopen("./src/data.csv", "r");<li>atnm6[]|1|1|Unit Test Script |Boundary based |