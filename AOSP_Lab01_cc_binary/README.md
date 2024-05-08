# How to run cc_binary in aosp_gsi

## Prerequisites

- AOSP source code setup on your machine
- Basic knowledge of building AOSP
- Familiarity with C++ programming language

## Steps

### 1. Create a new .cpp file

- Locate this file in aosp_gsi/external/ines

### 2. Android.bp Configuration

- Locate this file in aosp_gsi/external/ines

### 3. aosp_cf.mk add packages

Add the following line to `aosp14_gsi/device/google/cuttlefish/vsoc_x86_64/phone/aosp_cf.mk`:

```makefile
PRODUCT_PACKAGES += \
    ines \
```
    
### 4.If you are exposed to this error : build/make/core/artifact_path_requirements.mk:30:error:Build failed

```bash
export DISABLE_ARTIFACT_PATH_REQUIREMENTS="true"
```

### 5.Build


```bash
make -j (n.cores) --for example make -j10 
```

### 6.Launch the cuttlefish virtual device 
```bash
adb connect 0.0.0.0:6520 --if it is the first instance
cvd start 
```

### 7.Open adb shell then run the binary 
```bash
adb shell
vsoc_x86_64:/ $ines
```

