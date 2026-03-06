#include <iostream> 

// TODO: include the sensor diagnostics header file 
#include "sensor_diagnostics.h"
 
// TODO: Define global totalErrors
int totalErrors = 0;

// TODO: Use static int log_level for internal linkage 
static int log_level = 2;

void runSensorDiagnostics(const std::string& sensorName, int localErrors) { 
    // TODO: Loop and print diagnostics using log_level 
    std::cout << "Now run diag on " << sensorName << std::endl;
    
    for (int i = 0; i < localErrors; i++) {
        if (log_level == 2)
            std::cout << "[Error Level 2] " << sensorName << " Error " << i+1 << std::endl;
        else
            std::cout << "Other Error at " << sensorName << i+1 << std::endl;
        // TODO: Increment global totalErrors
        totalErrors++;
    }

    std::cout << "Diag done on " << sensorName << std::endl;
    std::cout << "---------------------------------" << std::endl;
}