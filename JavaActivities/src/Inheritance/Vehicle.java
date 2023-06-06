package Inheritance;

public class Vehicle {
	protected String make;
	protected String vehicleNumber;
	protected String fuelType;
	protected int fuelCapacity;
	protected int cc;
	
	public String getMake() {
		return make;
	}

	public void setMake(String make) {
		this.make = make;
	}

	public String getVehicleNumber() {
		return vehicleNumber;
	}

	public void setVehicleNumber(String vehicleNumber) {
		this.vehicleNumber = vehicleNumber;
	}

	public String getFuelType() {
		return fuelType;
	}

	public void setFuelType(String fuelType) {
		this.fuelType = fuelType;
	}

	public int getFuelCapacity() {
		return fuelCapacity;
	}

	public void setFuelCapacity(int fuelCapacity) {
		this.fuelCapacity = fuelCapacity;
	}

	public int getCc() {
		return cc;
	}

	public void setCc(int cc) {
		this.cc = cc;
	}

	public Vehicle(String make,String vehicleNumber,String fuelType,int fuelCapacity,int cc){
		this.make = make;
		this.vehicleNumber = vehicleNumber;
		this.fuelType = fuelType;
		this.fuelCapacity = fuelCapacity;
		this.cc = cc;
	}
	
	public void displayMake() {
		System.out.println("Make: "+make);
	}
	
	public void displayBasicInfo() {
		System.out.println("*******"+make+"*******");
		System.out.println("-----Basic Info-----");
		System.out.println("Vehicle number: "+vehicleNumber);
		if(fuelType.equals("1")) {
			System.out.println("Fuel Type: Petrol");
		}else {
			System.out.println("Fuel Type: Diesel");
		}
		System.out.println("Fuel Capacity: "+fuelCapacity);
		System.out.println("CC: "+cc);
	}
	
	public void displayDetailInfo() {
		
	}
}


class TwoWheeler extends Vehicle{
	private Boolean kickStartAvailable;
	
	public Boolean getKickStartAvailable() {
		return kickStartAvailable;
	}
	public void setKickStartAvailable(Boolean kickStartAvailable) {
		this.kickStartAvailable = kickStartAvailable;
	}
	
	public TwoWheeler(String make,String vehicleNumber,String fuelType,int fuelCapacity,int cc, Boolean kickStartAvailable){
		super(make,vehicleNumber,fuelType,fuelCapacity,cc);
		this.kickStartAvailable = kickStartAvailable;
	}
	public void displayDetailInfo() {
		System.out.println("-----Detail Info-----");
		System.out.println("Kick start availibility: "+kickStartAvailable);
	}
}

class FourWheeler extends Vehicle{
	private String audioSystem;
	private int numberOfDoors;
	
	public String getAudioSystem() {
		return audioSystem;
	}
	public void setAudioSystem(String audioSystem) {
		this.audioSystem = audioSystem;
	}
	public int getNumberOfDoors() {
		return numberOfDoors;
	}
	public void setNumberOfDoors(int numberOfDoors) {
		this.numberOfDoors = numberOfDoors;
	}
	
	public FourWheeler(String make,String vehicleNumber,String fuelType,int fuelCapacity,int cc, String audioSystem, int numberOfDoors) {
		super(make, vehicleNumber, fuelType, fuelCapacity, cc);
		this.audioSystem = audioSystem;
		this.numberOfDoors = numberOfDoors;
	}
	public void displayDetailInfo() {
		System.out.println("-----Detail Info-----");
		System.out.println("Audio System: " + audioSystem);
		System.out.println("Number of doors: " + numberOfDoors);
	}
}
