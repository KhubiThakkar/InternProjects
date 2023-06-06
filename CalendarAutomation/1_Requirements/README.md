# Requirements

## Introduction
Calendar Automation is a Python scheduling automation system based on the OpenPyXl module for scheduling.
It generates two calendars based on the Input file, it might be Genesis sheet or Step In sheet. They are:
1. Faculty Calendar
2. Master Calendar

## Features And Benefits
It output the automated calendar by extracting the relevant information from the given excel sheet containing Courses details, such as date, time, month, faculty etc.

### Benefits:
1. It help us stay on track as well as be productive and prioritize.
2. Any conflicts in blocking the calendar can be identified.
3. Number of events overlapping can be known.
4. Helps to reduce data redundancy
5. Maintaining records

## Defining Our System
Calendar automation takes input excel sheet from the user and it extracts data from input excel sheet. 
Based on the requirement it generates two output excel sheets:
1. Faculty calendar
2. Master calendar

## SWOT ANALYSIS:
![swotAnalysis](https://github.com/GENESIS2021Q1/AdvPythonMiniproject-team-15/blob/main/1_Requirements/swotAnalysis.png)

# 4W&#39;s and 1&#39;H
## Who:
Every level of organizations can use this application to ease the process of scheduling & viewing session slots & courses.
## WHAT
Every detail of courses, date, course code ,faculty ,session slot will be updated based on Input Calendar.
## WHEN
It can be used anytime,anywhere,for easy accessing of calender applications
## WHERE
The project can be deployed on any sectors may it be a corporate like educational institution, companies & government. 
## HOW 
Users can have details of current and previous schedules can also easily access specific date schedules.

# Detail requirements

### High level requirements
|   HLID   |     Description    |    Status   |
| :----: | :---------------- | :---------: |
|  HLR1  | OS Independent Execution |Done |
|  HLR2  | GUI interface |Done |
|  HLR3  | Extraction of Data from Event Calendar|Done|
|  HLR4  | Update Faculty Calendar |Done|
|  HLR5  | Update Master calendar |Done|



### Low level requirements
|   LLID    |     Description    | HLID | Status  |
| :------: | :---------------- | :------: |:------: |
|  LLR1  | Application capable of running in Linux and Windows | HLR1 |Done
|  LLR2  | Application capable of running on any IDE | HLR1 | Done
|  LLR3  | Create a GUI interface to browse for the Event Calendar | HLR2 | Done
|  LLR4  | Replace existing file with the updated version | HLR2 | Done
|  LLR4  | Generation of logfile of operation  | HLR3 | Done
|  LLR5  | Avoiding None condition | HLR3 | Done
|  LLR6  | Add the name of Faculty if not exist | HLR4 | Done
|  LLR7  | Colour coded blocking of faculty calendar | HLR4 | Done
|  LLR8  | Indicate conflict incase of multiple blocks in calendar | HLR4 | Done
|  LLR9  | Add the course code if not exist | HLR5 | Done
|  LLR10  | Colour coded blocking of faculty calendar | HLR5 | Done
|  LLR11  | Indicate conflict incase of multiple blocks in calendar | HLR5 | Done
