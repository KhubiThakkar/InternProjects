# Requirements

### Introduction
The Mordern Periodic table project is a simple console application without the use of graphics. It is developed using the C programming language for the purpose of storing name, symbol, atomic number atomic weight and some important properties as well to display them as per requirement of the user.

### Research
![Periodic Table](/6_ImagesAndVideos/periodic-table-elements.jpg)  
The periodic table of the elements was first introduced in the mid-19th century by Dmitry Mendeleev. He organized the elements by atomic number, which is equal to number of protons found in the nucleus of the element's atoms.  
You might need to find the element using their properties like: name, symbol and atomic number. Using periodic table can be confusing as they do not provide all around information and you need to derive their chemical properties like Number of Neutrons, Protons, Electrons, Phase and Electronic configuration.  
There are applications build for the purpose but they use structs to store the data that wastes unnecessary space on the system. This also puts a limit on how much data can be stored in the application. We use .csv file in which we can store much more data in lesser amount of space. Also modification in case of any new discovery of element is easier for anyone not familiar with coding.

### Defining Our System
This project will use file handling in C i.e. creating file and accessing the stored data in the file. The main functions used in designing the Mordern Periodic Table project are: 
> `SEARCH()`: This function is used to search the stored information in the file created.  
> `MAINSCREEN()`: This function is used to print the main screen or menu of the project.

### SWOT ANALYSIS
![SWOT](/6_ImagesAndVideos/SWOT.png)

### 4W's and 1'H
**Who:**
Students, researchers, chemical engineerings, analytic chemist, biotechnologist, pharmecologist and others use periodic tables on a regular basis and needs to access the chemical properties of the elements.

**What:**
Using periodic table everyday can be tedious as it gives only the basic information about the elements all the other details like electronic configuration needs to be derived. There are exceptions in the derivations which need to be kept in mind, so using this system will minimize the time and effort in working with periodic tables.

**When:**
If there is need to develop better understanding of the elements, derive the electronic configurations and get information of the chemical and physical properties of the elements. 

**Where:**
Application can be used at pharmalogical laboratories, research & development labs, Biosafety lab, etc. Professions that depend on identifing the elements can use this application.

**How:**
There is a database of elements in the application stored in an csv file in which you can also add new elements upon discovery. You can search the elements based on different basic properties.

# Detail requirements
### High Level Requirements:
ID | Description | Category | Status
:---: | :--- | :---: | :---:
HLR01 | Search Data | Technical | Done
HLR02 | Exit System | Technical | Done
 
### Low level Requirements:
ID | Description | HLR ID | Status
:---: | :--- | :---: | :---:
LR00 | Main screen for navigation |HR01|Done
LR01 | Serching through name of the element | HLR01 | Done
LR02 | Searching through symbol of the element | HLR01 | Done
LR03 | Seaching through atomic number | HLR01 | Done
LR04 | If not records are found show Error message | HLR01 | Done
LR05 | Function to quit the system | HLR02 | Done
