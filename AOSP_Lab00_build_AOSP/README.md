# AOSP Build 
## System Requirements

To ensure smooth building and running of AOSP, we recommend the following system specifications:

-CPU: Utilize an 11th generation CPU or newer to avoid compatibility issues and optimize performance.

-RAM: 32GB or higher is preferable for larger projects.

-Storage: A minimum of 512 GB used 

--Operating System: Ubuntu 22.04 LTS is the preferred operating system for building AOSP, though other Linux distributions may also work.

## Troubleshooting Common Issues

- VM Launching Problems

- Black Screen Issues

## Recommended Android Version
- We recommend using `Android Version 14 GSI` for building AOSP. This version provides stability and compatibility with the latest features and enhancements.

## Getting Started
### 1. Run repo init 

- To get the latest version of Repo with its recent bug fixes .
- You must specify a URL for the manifest , which specifies where the various repositories included in the Android source are placed within your working directory 
```bash
./home/trainee/.bin/repo init -u https://android.googlesource.com/platform/manifest -b android14-gsi

```
### 2.Downloading the Android source tree

```bash
	Repo sync
```

### 3.Set up your build environment

- From within your working directory, source the envsetup.sh script to set up your build environment:
```bash
	cd aosp_gsi
	source build/envsetup.sh
```
### 4. Choose a target
- Before building Android, you must identify a target to build. A target reflects the target platform you are building for. To identify your target to build, use the lunch command followed by a string representing the target. For example:
```bash
	lunch aosp_cf_x86_64_phone-trunk_staging-userdebug
or 
	lunch 14
```
- View the current target 

To see the current lunch settings, run:

```bash
$ echo "$TARGET_PRODUCT-$TARGET_BUILD_VARIANT"
```
### 5. Build the code 
```bash
	make 
```
### Issues :  
If you are exposed to this error : build/make/core/artifact_path_requirements.mk:30:error:Build failed

```bash
export DISABLE_ARTIFACT_PATH_REQUIREMENTS="true"
```

If Terminal closes itself when building it can be because of high memory usage comes with `"systemd-oomd"` enabled 

Here is how you can disable it : 

```bash
disable --now systemd-oomd
```
To verify that the service is disabled run this:

```bash
systemctl is-enabled systemd-oomd
```
The output should be:

```bash
disabled
```

