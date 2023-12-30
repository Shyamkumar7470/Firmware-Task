#include <iostream>
#include <chrono>

// Function to measure the data transmission speed
void measureDataTransmissionSpeed(int dataSize, int baudRate) {
    // Start the timer
    auto startTime = std::chrono::high_resolution_clock::now();

    // Simulate the data transmission
    // Replace this with your actual code for transmitting data from PC to MCU via UART

    // End the timer
    auto endTime = std::chrono::high_resolution_clock::now();

    // Calculate the elapsed time in seconds
    std::chrono::duration<double> elapsedTime = endTime - startTime;
    double seconds = elapsedTime.count();

    // Calculate the data transmission speed in bits per second
    double bitsPerSecond = (dataSize * 8) / seconds;

    // Print the data transmission speed
    std::cout << "Data Transmission Speed: " << bitsPerSecond << " bits/second" << std::endl;
}

int main() {
    // Set the data size and baud rate
    int dataSize = 1000; // in bytes
    int baudRate = 2400;

    // Measure the data transmission speed
    measureDataTransmissionSpeed(dataSize, baudRate);

    return 0;
}
