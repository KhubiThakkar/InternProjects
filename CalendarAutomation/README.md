# AdvPythonMiniproject-team-15
## AUTOMATED CALENDAR
![TOOL](https://github.com/GENESIS2021Q1/AdvPythonMiniproject-team-15/blob/main/2_Design/logo.png)

### About Project :
- Calendar Automation is a Python scheduling automation system based on the OpenPyXl module for scheduling.
- It generates two calendars based on the Input file, it might be Genesis sheet or Step In sheet. They are:
1. Faculty calendar
2. Master calendar

### Folder Structure
Folder             | Description
-------------------| -----------------------------------------
`1_Requirements`   | Documents detailing requirements and research
`2_Design`         | Documents specifying design details
`3_Implementation` | All code and documentation
`4_TestPlan` | Documentation of all the tests
`5_Videos`   | Working video of program

### Pylint Score
Module              | Pylint Score
--------------------| -----------------------------------------
`extract_data.py`   | 9.78/10
`upload_file.py`    | 9.41/10
`facultyCalender.py`| 9.09/10
`mastercalend.py`   | 9.60/10

### Contributors List and Summary
  PS Number |   Name     | Features Implemented | 
---------|-------------| ------- | 
 99005002| `Lingala Sai Poornima`| Master Calendar | 
 99005005|`Dhanush U` | Extraction of Data, GUI | 
 99005006|`Devina Tejaswi` | Documentation and Testing | 
 99005007|`Gullapalli Durga Vinay` | Documentation and Test Plan | 
 99005013|`Khubi Mehulbhai Thakkar`| Faculty Calendar | 
 99005014|`Mohammed Rizwan`| Master Calendar, Amazing Logo | 

### Instruction for Installation
1. Clone GitHub repository link of project given here: [Program Management](https://github.com/GENESIS2021Q1/AdvPythonMiniproject-team-15.git)
2. Under project open `3_Implementation` folder
3. The code works in both linux and windows environment hence,It could be said that implementation is OS INDEPENDENT.
   - Windows : Click Win+R key, type cmd or search for cmd in Start Menu and redirect to `3_Implementation` directory using cd command.
   - Linux   : Open terminal and redirect redirect to `3_Implementation` directory using cd command.  
4. Run `extract_data.py` to execute project 
5. Design is provided with GUI interface to upload Calender Workbook for analysis
   ![Calender Workbook](https://github.com/GENESIS2021Q1/AdvPythonMiniproject-team-15/blob/main/2_Design/GUIinterface.png)
6. Browse file from directory in which Calender Workbook is stored and press `Select` to redirect.If file is already in working directory it replaces with current one.
7. The `OutputFile.xlsx` will store the generated Master Calendar and Faculty Calendar sheets. 
8. Add the Dates of the months in the `OutputFile.xlsx` manually. If not present the program will raise an issue and terminate. 

### Challenges Faced and How Was It Overcome
Sr no | Problem | Solution | Faced By
| ------ | ----- | ------ | ---- 
1 | How to colour code cells to indicate the Blocking | Read through the documentation of OpenPyXl | Khubi Thakkar
2 | Wasn't able to access .fill with .cells | Assigned a variable to access it | Khubi Thakkar
3 | Unable to open the excel to append data | Read the documentation | Khubi Thakkar
4 | Unable to get the output saved in the excel | Read the documentation | Khubi Thakkar
5 | Unable to get the logic of max_row working in update methos | Deleting the existing cells in excel | Rizwan & Poornima
6 | Unable to get a proper test case for pytest | Created a new sheet with dummy course codes and Module Names | Rizwan & Poornima
7 | Very low pylint score | Changed the very variable names | Rizwan & Poornima
8 | Wasn't able to access the proper column | Changed the format of input excel file | Rizwan & Poornima
9 | Replacing file in working directory with Current if already exists | remove file in existing using OS module |Dhanush U
10 | Name error during extraction | Made File name global and passed to extract_data | Dhanush U
### Resources
- https://openpyxl.readthedocs.io/en/stable
- https://github.com/riuandg5/learn-makefile

