package com.abstraction;

import java.lang.Math;

public abstract class Shape {
	int value;
	public int getValue() {
		return value;
	}
	public void setValue(int value) {
		this.value = value;
	}
	abstract double calculateArea(int value);
}

class Circle extends Shape{
	@Override
	double calculateArea(int value) {
		// TODO Auto-generated method stub
		double area = Math.PI * Math.pow(value, 2);
		return area;
	}
}

class Square extends Shape{
	double calculateArea(int value) {
		double area = Math.pow(value, 2);
		return area;
	}
}