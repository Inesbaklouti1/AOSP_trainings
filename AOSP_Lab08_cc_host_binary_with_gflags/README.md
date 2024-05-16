# AOSP Lab08: CC Host Binary with GFlags

This repository contains the source code and instructions for the AOSP Lab08, focusing on building a C++ host binary with GFlags integration.

## Overview

In this lab, you will learn how to:

- Integrate GFlags library into a C++ project.
- Build a C++ host binary.
- Run the binary with different command-line arguments.


## Getting Started

To get started with this lab, follow these steps:

1. Clone this repository to your local machine:

```bash
    git clone https://github.com/Inesbaklouti1/AOSP_trainings_cpp.git
```

2. Navigate to the `AOSP_Lab08_cc_host_binary_with_gflags` directory:

```bash
    cd AOSP_trainings_cpp/AOSP_Lab08_cc_host_binary_with_gflags
```

3. Follow the instructions provided in the lab documentation 


## Building and Running

Follow these steps to build and run the C++ host binary:

1. Navigate to the `AOSP_Lab08_cc_host_binary_with_gflags` directory if you're not already there:

```bash
    cd AOSP_trainings_cpp/AOSP_Lab08_cc_host_binary_with_gflags
```
2. Add the cc host binary in `~/aosp14_gsi/device/google/cuttlefish/vsoc_x86_64/phone/aosp_cf.mk` :
```bash
PRODUCT_HOST_PACKAGES += \
    sum_host 
```
3. Build the C++ host binary:

```bash
    make
```

4. Run the binary with command-line arguments:

```bash
    sum_host --help
    
```
    or 
    
    for example :
```bash
    sum_host --operation=sum --val1=1 --val2=2
```


