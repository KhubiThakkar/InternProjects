package Inheritance;

import java.util.Scanner;

public class VehicleMain {
	public static void main(String[] args) {
		String make;
		String vehiclenumber;
		String fueltype;
		int fuelcapacity;
		int cc;

		System.out.println("1. Four Wheeler");
		System.out.println("2. Two Wheeler");
		System.out.println("Enter vehicle type: ");
		Scanner sc = new Scanner(System.in);
		int result = sc.nextInt();
		if(result == 1) {
			System.out.println("Vehicle Make: ");
			make = sc.next();
			System.out.println("vehicle number: ");
			vehiclenumber = sc.next();
			System.out.println("fuel type: ");
			fueltype = sc.next();
			System.out.println("fuel capacity: ");
			fuelcapacity = sc.nextInt();
			System.out.println("cc: ");
			cc = sc.nextInt();
			System.out.println("audio system: ");
			String audiosystem = sc.next();
			System.out.println("number of doors: ");
			int numofdoors = sc.nextInt();
			FourWheeler obj = new FourWheeler(make,vehiclenumber,fueltype,fuelcapacity,cc,audiosystem,numofdoors);
			obj.displayBasicInfo();
			obj.displayDetailInfo();	
		}
		else {
			System.out.println("Vehicle Make: ");
			make = sc.next();
			System.out.println("vehicle number: ");
			vehiclenumber = sc.next();
			System.out.println("fuel type: ");
			System.out.println("1. Petrol");
			System.out.println("2. Diesel");
			fueltype = sc.next();
			System.out.println("fuel capacity: ");
			fuelcapacity = sc.nextInt();
			System.out.println("cc: ");
			cc = sc.nextInt();
			System.out.println("kick start available:(true/false)");
			Boolean kickStartAvailable = sc.nextBoolean();
			TwoWheeler obj = new TwoWheeler(make,vehiclenumber,fueltype,fuelcapacity,cc,kickStartAvailable);
			obj.displayBasicInfo();
			obj.displayDetailInfo();
			
		}
		sc.close();
	}
}
