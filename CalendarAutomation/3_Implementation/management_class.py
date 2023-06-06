class ProgramManagement:
    """ Management Class to access extracted data from Calender"""
    def __init__(self, date, month, coursecode, coursename, faculty1, faculty2, faculty3, sessionslot, programtype):
        self.date = date
        self.month = month
        self.course_code = coursecode
        self.course_name = coursename
        self.faculty1 = faculty1
        self.faculty2 = faculty2
        self.faculty3 = faculty3
        self.session_slot = sessionslot
        self.program_type = programtype
