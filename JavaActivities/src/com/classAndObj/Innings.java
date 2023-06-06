package com.classAndObj;

public class Innings {
	private String teamname;
	private String inningname;
	private int runs;
	public String getTeamname() {
		return teamname;
	}
	public void setTeamname(String teamname) {
		this.teamname = teamname;
	}
	public String getInningname() {
		return inningname;
	}
	public void setInningname(String inningname) {
		this.inningname = inningname;
	}
	public int getRuns() {
		return runs;
	}
	public void setRuns(int runs) {
		this.runs = runs;
	}
	
	void displayInningsDetails(){
		System.out.println("Name: "+teamname);
		System.out.println("Scored: "+runs);
		String convert = inningname.toLowerCase();
		if(convert.equals("first")) {
			int x = runs+1;
			System.out.println("Need "+x+" to win");
		}
		else if(convert.equals("second")){
			System.out.println("Match ended");
		}
	}
}
