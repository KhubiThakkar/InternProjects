### Reference for everything
[MiniProject Template](https://github.com/stepin654321/MiniProject_Template)  

### C tutor
[Visualize execution](http://pythontutor.com/c.html#mode=edit)  

### GITHUB
[GitHub guides](https://guides.github.com/)  
[GitHub training](https://lab.github.com/githubtraining/first-day-on-github)  
[Update Forked Repo](https://medium.com/@topspinj/how-to-git-rebase-into-a-forked-repo-c9f05e821c8a)  

```
1999  git checkout -b Khubichanges
 2000  git status
 2001  git add
 2002  git add .
 2003  git commit -m "Answer to Ques1a"
 2004  git remote add upstream https://github.com/stepin654321/MiniProject_Template.git
 2005  git fetch upstream
 2006  git log
 2007  git checkout master
 2008  git pull upstream
 2009  git pull upstream master
 2010  git log
 2011  git checkout Khubichanges 
 2012  git rebase master
 2013  git log
 2014  git push origin Khubichanges
 ```

 OR

 ```
 orig

forked -> clone

git remote add upstream <orig url>

(master) - create new branch - (abc)

make as many commits in the newbranch as u want. (abc)

git checkout master

git pull upstream master

git checkout abc

(abc) git rebase master
```

### README FILE
[Markdown Cheatsheet](https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet#links)  

### C
[tutorial1](https://aticleworld.com/c-tutorial/)  
[tutorial2](https://overiq.com/c-programming-101/)  
[pointers](https://www.freecodecamp.org/news/pointers-in-c-are-not-as-difficult-as-you-think/)  

### GCC
[All commands and tags used for compilation](https://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html)  

### MAKEFILE

[Basic intro about makefile, there anyways isn't much in it](https://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html)  
[Video1](https://www.youtube.com/watch?v=aw9wHbFTnAQ)  
[Video2](https://www.youtube.com/watch?v=_r7i5X0rXJk)  

### UNIT TESTING
[only for download, you just need 3 unity files and go through header file for functions](https://www.throwtheswitch.org/unity)  
[Good explaination of few functions](https://embetronicx.com/tutorials/unit_testing/unit-testing-in-c-testing-with-unity/)  

### COVERAGE
[Quick Tutorial with all the commands](https://www.tutorialspoint.com/unix_commands/gcov.htm)  
[Difference between .gcno and .gcda files](https://gcc.gnu.org/onlinedocs/gcc/Gcov-Data-Files.html#:~:text=gcno%20files%20are%20placed%20in,be%20used%20to%20store%20the%20.&text=gcno%20notes%20file%20is%20generated,GCC%20%2Dftest%2Dcoverage%20option.)  

### CPPCHECK
[Video contains GUI and then CLI](https://www.youtube.com/watch?v=y_-MT1oXgNM)  
[Very basic, for how to use](https://github.com/khiguera/cppcheckTutorial)  
[When you can't get standard header files](https://stackoverflow.com/questions/6986033/cppcheck-cant-find-include-files)  

`cppcheck --enable=all --suppress=missingIncludeSystem .`  

[Manual](http://cppcheck.sourceforge.net/manual.pdf)  

### GDB DEBUGGER
[Video explaining all CLI commands](https://www.youtube.com/watch?v=bWH-nL7v5F4)  

### DOXYGEN
[Video for all about using Doxygen GUI](https://www.youtube.com/watch?v=TtRn3HsOm1s&t=295s)  
[Few important settings to see in case of errors](https://www.doxygen.nl/manual/faq.html)  
[Installation guide, it is incomplete for gui version](https://www.doxygen.nl/download.html)  
```  1816  sudo apt install doxygen-gui
 1817  whereis doxygen-gui
 1818  which doxygen-gui
 1819  sudo apt purge doxygen
 1820  doxygen
 1821  whereis doxygen
 1822  git clone https://github.com/doxygen/doxygen.git
 1823  cd doxygen/
 1824  mkdir build
 1825  cd build/
 1826  cmake -G "Unix Makefiles" ..
 1827  cmake -Dbuild_wizard=YES ..
 1828  sudo apt-get install build-essential
 1829  sudo apt-get install qtcreator
 1830  sudo apt-get install build-essential
 1831  sudo apt-get install qtcreator
 1832  sudo apt-get install qt5-default
 1833  cmake -Dbuild_wizard=YES ..
 1834  make
 1835  make install
 1836  sudo make install
 1837  doxygen
 1838  doxywizard
 1839  cd ..
 1840  cd
 1841  rm -rfv doxygen/
 1842  clear
 1843  doxygen --version
 1844  doxywizard --version
```  

[Basic AF explaination](https://embeddedinventor.com/guide-to-configure-doxygen-to-document-c-source-code-for-beginners/#Doxygen_pages)  
[Useless for Linux](https://embeddedinventor.com/doxygen-tutorial-getting-started-using-doxygen-on-windows/)  

### VALGRIND
[Good explaination on how to use valgrind, it is pretty simple anyways](https://embetronicx.com/tutorials/unit_testing/unit-testing-in-c-testing-with-unity/)  
[Just CLI commands needed](https://github.com/stepin654321/MiniProject_Template/tree/master/Example_Programs/programming_concpets/tools_examples/valgrind-examples)  

### LINUX
[Cisco Linux Unhatched](https://www.netacad.com/courses/os-it/ndg-linux-unhatched)  
[Linux Survival](https://linuxsurvival.com/)  
[Tutorial 1](https://linuxjourney.com/)  
[Tutorial 2](https://linux-training.be/index.php?nav=fundamentals)  
[How to remember commands](https://www.networkworld.com/article/3489537/7-ways-to-remember-linux-commands.html)  
[Online Playgrounds](https://www.katacoda.com/)  
