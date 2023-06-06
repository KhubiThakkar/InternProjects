package com.classAndObj;

import java.util.Scanner;

public class CompanyMain {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter input: ");
		String name = sc.next();
		String employee = sc.next();
		String teamlead = sc.next();
		
		Company c = new Company();
		c.setName(name);
		c.setEmployees(employee);
		c.setTeamlead(teamlead);
		
		c.display();
		sc.close();
	}
}
