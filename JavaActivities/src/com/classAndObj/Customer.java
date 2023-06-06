package com.classAndObj;

public class Customer {
	private String coustname;
	private String coustaddress;
	private String coustmobile;
	
	
	
	public String getCoustname() {
		return coustname;
	}



	public void setCoustname(String coustname) {
		this.coustname = coustname;
	}



	public String getCoustaddress() {
		return coustaddress;
	}



	public void setCoustaddress(String coustaddress) {
		this.coustaddress = coustaddress;
	}



	public String getCoustmobile() {
		return coustmobile;
	}



	public void setCoustmobile(String coustmobile) {
		this.coustmobile = coustmobile;
	}



	@Override
	public String toString() {
		return "Customer [coustname=" + coustname + ", coustaddress=" + coustaddress + ", coustmobile=" + coustmobile
				+ "]";
	}	
}
