"""" Module to create a interface and redirect file to working directory for extraction"""
import os
import shutil
import tkinter as tk
from tkinter import messagebox, filedialog


def createinterface():
    """ Interface to Browse file"""
    sourcelabel = tk.Label(root, text="Select Source File: ", bg="azure")
    sourcelabel.grid(row=1, column=0, pady=5, padx=5)
    root.sourceFile = tk.Entry(root, width=50, textvariable=sourceLocation)
    root.sourceFile.grid(row=1, column=1, pady=5, padx=5, columnspan=2)
    sourcebutton = tk.Button(root, text="BrowseFile", command=browsesourcefile, width=15)
    sourcebutton.grid(row=1, column=3, pady=5, padx=5)
    copybutton = tk.Button(root, text="Select", command=selectfile, width=15)
    copybutton.grid(row=3, column=1, pady=4, padx=100)


def browsesourcefile():
    """ Get path of file to be extracted"""
    root.sourceFiles_list = list(filedialog.askopenfilenames(initialdir=os.getcwd()))
    root.sourceFile.insert('1', root.sourceFiles_list)


def selectfile():
    """ Makes a copy of file and redirects it working directory"""
    global sourceFiles_list
    sourceFiles_list = root.sourceFiles_list
    destination_location = os.getcwd()
    
    for file in sourceFiles_list:
        if os.path.abspath(file) != os.path.join(os.getcwd(),os.path.basename(file)):
        #Replace file if already exists
            if os.path.exists(os.path.basename(file)):
                messagebox.showwarning("ProgramManagement", "Replacing existing file....")
                os.remove(os.path.basename(file))
                shutil.copy(file, destination_location)
            else:
                shutil.copy(file, destination_location)

    messagebox.showinfo("ProgramManagement", "Successfully Uploaded")


root = tk.Tk()
root.geometry("550x70")
root.title("ProgramManagement")
root.config(background="gray63")

sourceLocation = tk.StringVar()

sourceFiles_list=None
createinterface()
root.mainloop()
