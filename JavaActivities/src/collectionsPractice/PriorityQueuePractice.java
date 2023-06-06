package collectionsPractice;

import java.util.Comparator;
import java.util.PriorityQueue;

public class PriorityQueuePractice {
	public static void main(String[] args) {
		PriorityQueue<Integer> queue = new PriorityQueue<>(Comparator.reverseOrder());
		
		queue.offer(48);
		queue.offer(24);
		queue.offer(12);
		queue.offer(36);
		
		System.out.println(queue);
		System.out.println(queue.poll());
		System.out.println(queue);
		System.out.println(queue.peek());
	}
}
