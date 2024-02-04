#include <iostream>
#include <string>

// Function to obfuscate sensitive information before logging
std::string obfuscateSensitiveInfo(const std::string& sensitiveInfo) {
    // In a real scenario, you might want to use a more secure method to obfuscate or encrypt the data
    // This is just a simple example for demonstration purposes
    return "********";  // Replace with your obfuscation or encryption logic
}
// this is the code manage by asharma
// Function to log sensitive information securely
void logSensitiveInfo(const std::string& sensitiveInfo) {
    // Obfuscate or encrypt sensitive information before logging
    std::string obfuscatedInfo = obfuscateSensitiveInfo(sensitiveInfo);

    // Log the obfuscated information
    std::cout << "Sensitive Information: " << obfuscatedInfo << std::endl;
}

int main() {
    // Example usage
    std::string sensitiveData = "This is sensitive information.";
    logSensitiveInfo(sensitiveData);

    return 0;
}

