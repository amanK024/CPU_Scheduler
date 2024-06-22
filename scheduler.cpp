#include <iostream>
#include <vector>
#include <algorithm>

struct Process {
    int processID;
    int arrivalTime;
    int burstTime;
    int completedTime;
    int turnAroundTime;
    int waitingTime;
};

void addToQueue(int time, std::vector<Process> &processList, std::vector<Process> &queue) {
    for (auto it = processList.begin(); it != processList.end();) {
        if (it->arrivalTime <= time) {
            queue.push_back(*it);
            it = processList.erase(it);
        } else {
            ++it;
        }
    }
}

void bindTableData(const std::vector<Process> &completedList) {
    for (const auto &process : completedList) {
        std::cout << "Process ID: " << process.processID
                  << ", Arrival Time: " << process.arrivalTime
                  << ", Burst Time: " << process.burstTime
                  << ", Completed Time: " << process.completedTime
                  << ", Waiting Time: " << process.waitingTime
                  << ", Turnaround Time: " << process.turnAroundTime << std::endl;
    }

    double totalTurnaroundTime = 0;
    double totalWaitingTime = 0;
    int maxCompletedTime = 0;

    for (const auto &process : completedList) {
        if (process.completedTime > maxCompletedTime) {
            maxCompletedTime = process.completedTime;
        }
        totalTurnaroundTime += process.turnAroundTime;
        totalWaitingTime += process.waitingTime;
    }

    std::cout << "Average Turnaround Time: " << totalTurnaroundTime / completedList.size() << std::endl;
    std::cout << "Average Waiting Time: " << totalWaitingTime / completedList.size() << std::endl;
    std::cout << "Throughput: " << completedList.size() / static_cast<double>(maxCompletedTime) << std::endl;
}

void firstComeFirstServed(std::vector<Process> &processList) {
    int time = 0;
    std::vector<Process> queue;
    std::vector<Process> completedList;

    while (!processList.empty() || !queue.empty()) {
        while (queue.empty()) {
            time++;
            addToQueue(time, processList, queue);
        }

        Process process = queue.front();
        queue.erase(queue.begin());

        for (int i = 0; i < process.burstTime; ++i) {
            time++;
            addToQueue(time, processList, queue);
        }

        process.completedTime = time;
        process.turnAroundTime = process.completedTime - process.arrivalTime;
        process.waitingTime = process.turnAroundTime - process.burstTime;
        completedList.push_back(process);
    }

    bindTableData(completedList);
}

void shortestJobFirst(std::vector<Process> &processList) {
    int time = 0;
    std::vector<Process> queue;
    std::vector<Process> completedList;

    while (!processList.empty() || !queue.empty()) {
        addToQueue(time, processList, queue);

        while (queue.empty()) {
            time++;
            addToQueue(time, processList, queue);
        }

        std::sort(queue.begin(), queue.end(), [](const Process &a, const Process &b) {
            return a.burstTime < b.burstTime;
        });

        Process processToRun = queue.front();
        queue.erase(queue.begin());

        for (int i = 0; i < processToRun.burstTime; ++i) {
            time++;
            addToQueue(time, processList, queue);
        }

        processToRun.completedTime = time;
        processToRun.turnAroundTime = processToRun.completedTime - processToRun.arrivalTime;
        processToRun.waitingTime = processToRun.turnAroundTime - processToRun.burstTime;
        completedList.push_back(processToRun);
    }

    bindTableData(completedList);
}

int main() {
    std::vector<Process> processList = {
        {1, 0, 8}, {2, 1, 4}, {3, 2, 9}, {4, 3, 5}
    };

    std::cout << "First Come First Served (FCFS):" << std::endl;
    firstComeFirstServed(processList);

    // Reset the process list for SJF
    processList = {{1, 0, 8}, {2, 1, 4}, {3, 2, 9}, {4, 3, 5}};

    std::cout << "\nShortest Job First (SJF):" << std::endl;
    shortestJobFirst(processList);

    return 0;
}
