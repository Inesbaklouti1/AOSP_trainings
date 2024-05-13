# AOSP cc_genrule 

- In the AOSP `cc_genrule` is a feature provided by the Android build system (Soong).
- With `cc_genrule`, developers can specify inputs and outputs for their custom build rules , as well as the commands needed to generate the outputs from the inputs.

## 1.Create the genrule 

```bash
genrule {
			name: "ines_genrule",
			cmd: "echo '#include <iostream>\nint main() {std::cout << \"hi i am the general rule\" << std::endl; return 0; }' > $(out)",
			out: ["main.cpp"],
		}
```

## 2.Create the cc_binary 

```bash
cc_binary{

	name:"gen_bin",
	srcs: [":ines_genrule"],
}
```
## 3.Build

```bash
	make
```
## 4.Launch the cvd 

```bash
	cvd start
```
## 5.Open the adb shell 

```bash
	adb shell
```
## 6.Run the binary in the virtual device (cvd)

```bash
vsoc_x86_64:/ $ gen_bin
hi i am the general rule
```
