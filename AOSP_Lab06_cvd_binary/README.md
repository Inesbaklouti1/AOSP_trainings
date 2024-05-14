# AOSP_Lab06_cvd_binary

## Overview
This repository contains a simple Android Binary Package (AOSP_Lab06_cvd_binary) designed to manage the startup of a CVD (Cuttlefish Virtual Device) instance. The application, named "cvd_by_ines", is written in C++ and is intended to be used within the Android Build System (Android.bp) as a cc_binary_host module.

## Installation

1. Clone this repository to your local machine.
2. Navigate to the root directory of the cloned repository.
3. Add `cvd_by_ines` in aosp14_gsi/device/google/cuttlefish/vsoc_x86_64/phone/aosp_cf.mk 
```bash
PRODUCT_HOST_PACKAGES += \
    cvd_by_ines \
```
4. Execute the build command appropriate for your Android build environment, typically:
```bash
m AOSP_Lab06_cvd_binary
```
After successful compilation, the binary will be available for use.

## Usage
- The primary purpose of this application is to facilitate the management of CVD instances based on the target product specified during the build process.

## Target Product

- Before running the application, ensure that the TARGET_PRODUCT environment variable is set appropriately. This variable determines the target product for which the CVD instance will be started.

## Starting CVD Instances
The behavior of the application is as follows:

- If the TARGET_PRODUCT environment variable is set to "aosp_cf_x86_64_phone", the application will start 5 CVD instances.

- If the TARGET_PRODUCT environment variable is set to any other value or not set at all, the application will start the default CVD instance, which is 1.

To run the application, execute the generated binary file. Ensure that the necessary permissions are granted for execution.

## Example 
Here's an example command to execute the binary:
```bash
./cvd_by_ines
```
