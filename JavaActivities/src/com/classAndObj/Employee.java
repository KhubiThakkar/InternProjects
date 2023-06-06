package com.classAndObj;

import java.util.Scanner;

public class Employee {
	private String name;
	private String address;
	private String mobile;
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public String getAddress() {
		return address;
	}
	public void setAddress(String address) {
		this.address = address;
	}
	public String getMobile() {
		return mobile;
	}
	public void setMobile(String mobile) {
		this.mobile = mobile;
	}
	
	@Override
	public String toString() {
		return "Employee [name=" + name + ", address=" + address + ", mobile=" + mobile + "]";
	}
	
	void menu(Object obj) {
		int looping = 1;
		Scanner sc = new Scanner(System.in);
		while(looping == 1) {
			System.out.println("------------- Verify and Update Details ----------------");
			System.out.println("1. Update Employee name");
			System.out.println("2. Update address");
			System.out.println("3. Update mobile");
			System.out.println("4. All information is correct/Exit");
		
			int input = sc.nextInt();
			switch(input) {
				case 1: 
					System.out.println("Current name is: " + name);
					System.out.println("Enter name: ");
					name = sc.next(); 
					break;
				case 2: 
					System.out.println("Current address is: " + address);
					System.out.println("Enter address: ");
					address = sc.next(); 
					break;
				case 3: 
					System.out.println("Current mobile is: " + mobile);
					System.out.println("Enter mobile: ");
					mobile = sc.next(); 
					break;
				case 4:
					System.out.println(obj);
					looping = 0;
					break;
				default:
					System.out.println("Invalid");
					break;
			}
		}
		sc.close();

	}
}
