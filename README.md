# CPU Scheduling Simulator

The CPU Scheduler is a web application that models and executes various CPU scheduling algorithms, providing users with insights into process scheduling and performance metrics.

## Features

- Supports multiple CPU scheduling algorithms:
  - First Come First Served (FCFS)
  - Shortest Job First (SJF)
  - Shortest Remaining Time First (SRTF)
  - Round Robin (RR)
- User-friendly interface for adding processes with their arrival and burst times.
- Dynamic visualization of scheduling results.
- Calculation of key performance metrics: average turnaround time, average waiting time, and throughput.

## How to Use

1. **Add Processes:**
   - Enter the Process ID, Arrival Time, and Burst Time.
   - Click "Add Process" to add the process to the list.

2. **Select Scheduling Algorithm:**
   - Choose an algorithm from the "Select Scheduling Method" dropdown.
   - If "Round Robin" is selected, specify the Time Quantum.

3. **Calculate Scheduling:**
   - Click "output" to run the selected scheduling algorithm.
   - View the results in the table below, including completion times, waiting times, and turnaround times.

4. **Performance Metrics:**
   - The average turnaround time, average waiting time, and throughput are displayed in the results section.

## Requirements

- Modern web browser (Chrome,Microsoft Edge, Firefox, Safari, etc.)
- Internet connection to load external resources (Bootstrap and jQuery)


