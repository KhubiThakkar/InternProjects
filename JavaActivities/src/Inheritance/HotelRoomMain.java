package Inheritance;

import java.util.Scanner;

public class HotelRoomMain {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Hotel Tariff Calculator\r\n"
				+ "1. Deluxe Room ");
		System.out.println("2. Deluxe AC Room\n"
				+ "3. Suite AC Room\n"
				+ "Select Room Type:");
		int roomtype = sc.nextInt();
		
		System.out.println("Hotel Name:");
		String hotelname = sc.next();
		System.out.println("Room Square Feet Area:");
		int numberofsqfeet = sc.nextInt();
		System.out.println("Room has TV (true/false): ");
		Boolean hastv = sc.nextBoolean();
		System.out.println("Room has Wifi (true/false): ");
		Boolean haswifi = sc.nextBoolean();

		
		if(roomtype == 1) {
		
			DeluxeRoom obj = new DeluxeRoom(hotelname,numberofsqfeet,hastv,haswifi);
			int price = obj.calculateTariff(obj.numberOfSqFeet, obj.getRatePerSqFeet());
			System.out.println(price);
			
		}
		else if(roomtype == 2) {
			DeluxeACRoom obj = new DeluxeACRoom(hotelname,numberofsqfeet,hastv,haswifi);
			System.out.println("Room Tariff per day is: ");
			int price = obj.calculateTariff(obj.numberOfSqFeet, obj.getRatePerSqFeet());
			System.out.println(price);
		}
		else{
			SuiteACRoom obj = new SuiteACRoom(hotelname,numberofsqfeet,hastv,haswifi);
			System.out.println("Room Tariff per day is: ");
			int price = obj.calculateTariff(obj.numberOfSqFeet, obj.getRatePerSqFeet());
			System.out.println(price);
		}
		sc.close();
		
	}
}
