# New Launcher

## Description
This project  for managing multiple VMs in different environments because Running these VMs simultaneously can lead to conflicts and confusion

## Solution
Develop a host binary aplication that serves as an intermediary manager for the VMs

## Strategy

- Check Runned VMs
- Affect the base instance
- Launch new CVD with the correct arguments

## Installation
To use this project, follow these steps:
1. Clone the repository:

```bash
git clone <repository_url>
```

2. Navigate to the project directory:
```bash
cd <directory>  
```
3. Add `new_launcher` in `aosp14_gsi/device/google/cuttlefish/vsoc_x86_64/phone/aosp_cf.mk`
```bash
PRODUCT_HOST_PACKAGES += \
    new_launcher 
```
4. Execute the following command to build the program:
```bash
m -j
```
5. Run the binary :
you can execute it using the following command:
```bash
    new_launcher 
```




