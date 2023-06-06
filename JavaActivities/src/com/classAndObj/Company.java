package com.classAndObj;

import java.util.Arrays;

public class Company {
	private String name;
	private String employees;
	private String teamlead;
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public String getEmployees() {
		return employees;
	}
	public void setEmployees(String employees) {
		this.employees = employees;
	}
	public String getTeamlead() {
		return teamlead;
	}
	public void setTeamlead(String teamlead) {
		this.teamlead = teamlead;
	}
	
	
	void display() {
		String arr[] = employees.split(",");
		String arr2[] = new String[arr.length];
		
		for(int i=0; i<arr.length; i++) {
			arr2[i] = arr[i].toLowerCase();
		}
		
		if(Arrays.asList(arr2).contains(teamlead.toLowerCase())){
			System.out.println("Name: " + name + " Employees: " + employees + " Lead: " + teamlead);
		}
		else {
			System.out.println("Name: " + name + " Employees: " + employees);
			System.out.println("Invalid Input");
		}
	}

}
