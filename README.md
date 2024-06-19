# CPU Scheduler

**Project Description:**

The CPU Scheduling Simulator is an interactive web-based application designed to simulate and compare various CPU scheduling algorithms. It allows users to visualize the execution of processes under different scheduling strategies, including First Come First Served (FCFS), Shortest Job First (SJF), Shortest Remaining Time First (SRTF), and Round Robin (RR). The simulator provides insights into how these algorithms manage process execution and impact system performance metrics such as turnaround time, waiting time, and throughput. This project aims to be an educational tool for understanding the principles and trade-offs of CPU scheduling in operating systems.

## Features

- Supports multiple CPU scheduling algorithms:
  - First Come First Served (FCFS)
  - Shortest Job First (SJF)
  - Shortest Remaining Time First (SRTF)
  - Round Robin (RR)
- User-friendly interface for adding processes with their arrival and burst times.
- Dynamic visualization of scheduling results.
- Calculation of key performance metrics: average turnaround time, average waiting time, and throughput.


## Dependencies
Bootstrap: For styling and responsive design.
jQuery: For DOM manipulation and event handling.
Popper.js: Required for Bootstrap's JavaScript components.
Font Awesome: For icons.
## Steps to Run
(1) Clone the Repository:
git clone *https://github.com/amanK024/CPU_Scheduler.git*
cd CPU_Scheduler
(2) Open the Project in Your Browser:
Navigate to the project directory and open index.html in your web browser.
(3) Simulate Different Algorithms:

Select the desired scheduling algorithm (FCFS, SJF, SRTF, RR) from the dropdown menu.
Input process details such as arrival time and burst time.
View the simulation results including Gantt chart and performance metrics


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
  ## Internal Working
**Theory of CPU Scheduling**
CPU scheduling is a critical component of operating systems where the scheduler determines which process gets the CPU next. The goal is to optimize CPU utilization and minimize turnaround time, waiting time, and response time. Here’s a brief overview of the algorithms implemented:

*First Come First Served (FCFS):*

- Processes are executed in the order they arrive.

- Simple but may lead to the "convoy effect" where short processes wait behind long ones.

*Shortest Job First (SJF):*

- Executes the shortest job first.

- Minimizes average waiting time but requires accurate prediction of burst times.

*Shortest Remaining Time First (SRTF):*

- A preemptive version of SJF where the shortest remaining time process is executed.

- Minimizes response time but requires frequent context switching.

*Round Robin (RR):*

- Each process gets a small time slice (time quantum) to execute.

- Ensures fairness but can lead to higher context switching overhead.

## Implementation Details
- index.html: Structure of the application and user interface elements.

- style.css: Styling for the application using Bootstrap and custom CSS.

- script.js: Main JavaScript file implementations and event handling logic.

- scheduler.cpp:
 Implementations of FCFS, SJF, SRTF, and RR algorithms respectively.
 Utility functions for common operations such as sorting and calculating metrics.
 
## Learning Takeaways

- Understanding CPU Scheduling: Gain practical insights into how CPU scheduling algorithms function and their impact on system performance metrics.

- Web Development Skills: Enhance proficiency in HTML, CSS, and JavaScript through interactive application development.

- Algorithm Design: Learn to design and implement scheduling algorithms to optimize system efficiency

- User Interface Design: Develop skills in creating intuitive user interfaces for simulation and analysis tools.

## Resources/References
- GeeksforGeeks CPU Scheduling: Comprehensive tutorials and examples of various CPU scheduling algorithms.

- Operating System Concepts by Silberschatz, Galvin, and Gagne: Fundamental textbook for understanding operating system principles and scheduling algorithms.

- Wikipedia: General information and detailed descriptions of CPU scheduling algorithms

## Requirements

- Modern web browser (Chrome,Microsoft Edge, Firefox, Safari, etc.)
- Internet connection to load external resources (Bootstrap and jQuery)


