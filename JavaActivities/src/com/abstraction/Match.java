package com.abstraction;

public abstract class Match {
	private int currentscore;
	private float currentover;
	private int target;
	
	public int getCurrentscore() {
		return currentscore;
	}
	public void setCurrentscore(int currentscore) {
		this.currentscore = currentscore;
	}
	public float getCurrentover() {
		return currentover;
	}
	public void setCurrentover(float currentover) {
		this.currentover = currentover;
	}
	public int getTarget() {
		return target;
	}
	public void setTarget(int target) {
		this.target = target;
	}
	
	abstract float calculateRunRate();
	abstract int calculateBalls();
	abstract void display(double reqRunrate, int balls);
}

class ODIMatch extends Match{
	@Override
	float calculateRunRate() {
		double score = getTarget() - getCurrentscore();
		float over = 50 - getCurrentover();
		float runrate = (float) (score/over);
		return runrate;
	}

	@Override
	int calculateBalls() {
		int totalballs = 50*6;
		int integerpart = (int)getCurrentover();
		int decimalpart = (int) (10 * (getCurrentover() - integerpart));
		int completedballs = (integerpart * 6) + decimalpart;
		return totalballs - completedballs;
	}

	@Override
	void display(double reqRunrate, int balls) {
		System.out.println("Need " + (getTarget()-getCurrentscore()) + " runs in " + calculateBalls() + " balls");
		System.out.println("Required runrate: " + calculateRunRate());
	}
}


class T20Match extends Match{
	@Override
	float calculateRunRate() {
		double score = getTarget() - getCurrentscore();
		float over = 20 - getCurrentover();
		float runrate = (float) (score/over);
		return runrate;
	}

	@Override
	int calculateBalls() {
		int totalballs = 20*6;
		int integerpart = (int)getCurrentover();
		int decimalpart = (int) (10 * (getCurrentover() - integerpart));
		int completedballs = (integerpart * 6) + decimalpart;
		return totalballs - completedballs;
	}

	@Override
	void display(double reqRunrate, int balls) {
		System.out.println("Need " + (getTarget()-getCurrentscore()) + " runs in " + calculateBalls() + " balls");
		System.out.println("Required runrate: " + calculateRunRate());
	}
}

class TestMatch extends Match{
	@Override
	float calculateRunRate() {
		double score = getTarget() - getCurrentscore();
		float over = 90 - getCurrentover();
		float runrate = (float) (score/over);
		return runrate;
	}

	@Override
	int calculateBalls() {
		int totalballs = 90 * 6;
		int integerpart = (int)getCurrentover();
		int decimalpart = (int) (10 * (getCurrentover() - integerpart));
		int completedballs = (integerpart * 6) + decimalpart;
		return totalballs - completedballs;
	}

	@Override
	void display(double reqRunrate, int balls) {
		System.out.println("Need " + (getTarget()-getCurrentscore()) + " runs in " + calculateBalls() + " balls");
		System.out.println("Required runrate: " + calculateRunRate());
	}
}