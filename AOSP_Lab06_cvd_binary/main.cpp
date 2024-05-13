#include <cstdlib> 
#include <string>  
int main() {
    
    const char* targetProduct = std::getenv("TARGET_PRODUCT");
    if (targetProduct != nullptr && std::string(targetProduct) == "aosp_cf_x86_64_phone") {
        
        system("cvd start --base_instance_num=5");
    } else {

        system("cvd start --base_instance_num=1");
    }
    return 0;
}
