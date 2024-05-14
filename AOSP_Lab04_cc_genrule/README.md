# AOSP cc_genrule 

- In the Android Open Source Project (AOSP), cc_genrule is a feature provided by the Android build system (Soong). With cc_genrule, developers can specify inputs and outputs for their custom build rules, as well as the commands needed to generate the outputs from the inputs.

## 1.Create the Genrule 

```bash
genrule {
			name: "ines_genrule",
			cmd: "echo '#include <iostream>\nint main() {std::cout << \"hi i am the general rule\" << std::endl; return 0; }' > $(out)",
			out: ["main.cpp"],
		}
```
- This defines a cc_genrule named "ines_genrule" that generates a main.cpp file containing a simple C++ program printing "hi i am the general rule".

## 2.Create the cc_binary 

```bash
cc_binary{

	name:"gen_bin",
	srcs: [":ines_genrule"],
}
```
- This creates a C++ binary named "gen_bin" that depends on the output of the "ines_genrule" rule.
## 3.Build

```bash
	make
```
- This command builds the specified targets, including the gen_bin.

## 4.Launch the CVD 

```bash
	cvd start
```
- This command starts the Android Emulator using the Cuttlefish Virtual Device (CVD).
## 5.Open the ADB Shell 

```bash
	adb shell
```
- This command opens an ADB shell to interact with the virtual device.

## 6.Run the binary in the Virtual Device (CVD)

```bash
vsoc_x86_64:/ $ gen_bin
hi i am the general rule
```
- Executing gen_bin in the ADB shell of the virtual device runs the generated binary, which prints "hi i am the general rule" as expected.

