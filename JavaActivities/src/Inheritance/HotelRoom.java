package Inheritance;

public class HotelRoom {
	protected String hotelName;
	protected int numberOfSqFeet;
	protected Boolean hasTV;
	protected Boolean hasWiFi;
	
	public HotelRoom(String hotelName,int numberOfSqFeet,Boolean hasTV,Boolean hasWiFi) {
		this.hotelName = hotelName;
		this.numberOfSqFeet = numberOfSqFeet;
		this.hasTV = hasTV;
		this.hasWiFi = hasWiFi;
	}
	
	public int calculateTariff(int sqFeet, int cost) {
		return sqFeet * cost;
	}
	
	public int getRatePerSqFeet() {
		return 0;
	}
}

class DeluxeRoom extends HotelRoom{
	int ratePerSqFeet;
	public DeluxeRoom(String hotelName,int numberOfSqFeet,Boolean hasTV,Boolean hasWiFi) {
		super(hotelName,numberOfSqFeet,hasTV,hasWiFi);
		this.ratePerSqFeet = 10;
	}
	
	public int getRatePerSqFeet() {
		if(hasWiFi) {
			return (ratePerSqFeet + 2);
		}
		else {
			return ratePerSqFeet;
		}
	}
}

class DeluxeACRoom extends DeluxeRoom{
	public DeluxeACRoom(String hotelName,int numberOfSqFeet,Boolean hasTV,Boolean hasWiFi) {
		super(hotelName,numberOfSqFeet,hasTV,hasWiFi);
		super.ratePerSqFeet = 12;
	}
}

class SuiteACRoom extends HotelRoom{
	int ratePerSqFeet;
	public SuiteACRoom(String hotelName,int numberOfSqFeet,Boolean hasTV,Boolean hasWiFi) {
		super(hotelName,numberOfSqFeet,hasTV,hasWiFi);
		this.ratePerSqFeet = 15;
	}
	
	public int getRatePerSqFeet() {
		if(hasWiFi) return (ratePerSqFeet + 2);
		else return ratePerSqFeet;
	}
}