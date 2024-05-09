# AOSP Build 

##Recommended Platform Version
- We recommend using `Platform Version 14` for building AOSP. This version provides stability and compatibility with the latest features and enhancements.

##Troubleshooting Common Issues

###* VM Launching Problems

###* Black Screen Issues

##System Requirements

To ensure smooth building and running of AOSP, we recommend the following system specifications:

--CPU: Utilize an 11th generation CPU or newer to avoid compatibility issues and optimize performance.

--RAM: At least 16GB of RAM is recommended, although 32GB or higher is preferable for larger projects.

--Storage: A minimum of 250GB of available storage space is required for the AOSP source code and build artifacts.

--Operating System: Ubuntu 20.04 LTS is the preferred operating system for building AOSP, though other Linux distributions may also work.
 
##Getting Started

```bash
	cd aosp_gsi
```
```bash
	source build/envsetup.sh
```
```bash
	source build/envsetup.sh
```
```bash
	lunch 14
```
```bash
	make 
```
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

