# How to run cc_prebuilt_library  in aosp_gsi

## Prerequisites

- AOSP source code setup on your machine
- Basic knowledge of building AOSP
- Familiarity with C++ programming language

## Steps

### 1. Create .so library 
- Create test.cpp and test.h files
- Create .so from .cpp using this command : 
- -m64 flag for x86_64 architecture 
```bash
g++ -m64 -shared -o libtest.so -fPIC test.cpp
```

### 2. Configure Android.bp 

- Create `cc_prebuilt_library_shared` 

### 3. Add the `cc_prebuilt_library_shared` in aosp14_gsi/device/google/cuttlefish/vsoc_x86_64/phone/aosp_cf.mk

```bash
PRODUCT_PACKAGES += \
    pre_lib
```

### Issue 

if you encounter this issue Check prebuilt <span style="color:red;"> ELF binary: out/soong/.intermediates/, </span> please add this following line in `Android.bp` :
```bash
	check_elf_files: false
```

### 4.Build 
```bash
make 
or
make -j(n.cores) --example make-j12
```
