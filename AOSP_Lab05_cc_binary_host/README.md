# AOSP_Lab05_cc_binary_host 

## Overview
- This repository contains a simple C++ program built as a cc_binary_host 
- The program consists of a single source file, `main.cpp`

## Files
- `main.cpp`: Contains the source code for the cc_binary_host program. It prints the message "hi i am the cc binary host" to the standard output.

## Build Instructions
To build the cc_binary_host program, follow these steps:

1. Make sure you have the Android build environment set up properly.
2. Clone this repository to your local machine.
3. Add `my_binary_host` in aosp14_gsi/device/google/cuttlefish/vsoc_x86_64/phone/aosp_cf.mk 
```bash
PRODUCT_HOST_PACKAGES += \
    my_binary_host
```
4. Navigate to the root directory of the repository.
5. Execute the following command to build the program:
    ```
    m -j
    ```
   This command will invoke the Android build system, which will compile the source file `main.cpp` and generate the executable binary.

## Running the Program
After building the program, you can execute it using the following command:

```bash
./out/host/linux-x86/bin/my_binary_host
```


