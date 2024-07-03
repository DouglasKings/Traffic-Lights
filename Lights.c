#include <stdio.h>

// Defining an enumeration called TrafficLightSignal with three possible values: RED, YELLOW, and GREEN.
typedef enum {
    RED,       // Represents the red signal of the traffic light
    YELLOW,   // Represents the yellow signal of the traffic light
    GREEN      // Represents the green signal of the traffic light
} TrafficLightSignal;

// Prototype of the function
int simulateTrafficLight(TrafficLightSignal currentState);

int main() {
    // Initialize the traffic light at RED
    TrafficLightSignal currentState = RED;

    // Simulate the traffic light for 10 cycles
    for (int cycle = 0; cycle < 10; cycle++) {
        printf("Cycle %d: ", cycle);
        // Display the current state
        switch (currentState) {
            case RED:
                printf("Red\n");
                break;
            case YELLOW:
                printf("Yellow\n");
                break;
            case GREEN:
                printf("Green\n");
                break;
        }

        // Update the state of the traffic light to the next signal.
        currentState = simulateTrafficLight(currentState);
    }
    return 0;
}

// Implementing the Function which simulates the change of traffic light signals,
// It takes the current state of the traffic light as input and returns the next state.
int simulateTrafficLight(TrafficLightSignal currentState) {
    // Simple simulation logic: Cycle through RED -> YELLOW -> GREEN -> RED
    switch (currentState) {
        case RED:
            return YELLOW; // If the current state is RED, the next state is YELLOW.
        case YELLOW:
            return GREEN; // If the current state is YELLOW, the next state is GREEN.
        case GREEN:
            return RED;   // If the current state is GREEN, the next state is RED.
    }
    // The default case is not needed here as all cases are covered.
    return RED; // This line will never be reached due to the switch-case logic.
}