package com.classAndObj;

import java.util.Scanner;

public class EmployeeMain {
	public static void main(String[] args) {
		Employee emp = new Employee();
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter the name: ");
		emp.setName(sc.next());
		System.out.println("Enter the address: ");
		emp.setAddress(sc.next());
		System.out.println("Enter the number: ");
		emp.setMobile(sc.next());
		
		System.out.println(emp);
		emp.menu(emp);
		sc.close();
	}
}
