# **AQL Tech Solutions, Islamabad - Pakistan**

![](/images/AQL_Logo.png)

## **Project Report**     
## _Compressed Extension of RISCV Core_
___

###  **Group Members**
###  Soban Ahmed
###  Ariba Zahid
### Nadeem Asghar
---
## **Project Owners**
### Aamir Sultan
### Haseeb Ahmed 
---

### **Dated: 8th June, 2022**
---



 # **Compressed Extension of RISCV Core**
## **Introduction**
---
The RISCV Instruction Set Architecture (ISA) is becoming an increasingly popular ecosystem for both hardware and software development. Over the last few years, the RISC-V Instruction Set Architecture (ISA) has established itself as a completely free, open-source, widely supported, and well-documented software/hardware ecosystem that is ideal for both hardware implementation and software creation. In this project we will design and verify the RISCV's most versatile ISA extensions, which allows for compressed 16-bit instructions to coexist with regular 32-bit instructions. Compressed instructions are a set of instructions which has length 16 bit with respect to RISC-V architecture. The Compressed instruction are represented by the character "C" in RISC-V specifications. So, in this project design and verification of compressed extension of RISCV Core would done.  For design and verification of compressed extension of RISCV core firstly related literature is reviewed. Then we have distributed our tasks and start working on tasks. Following we would discuss our tasks in details.
___    
## **RTL Design**
___
For RTL design firstly we have tried to understand the existing RTL flow for this firstly we have tried to understand the RTL HDL coding. Basically, we were provided design of RISCVIM with 3 stage pipeline support. So, firstly we have designed its block diagram keeping our background knowledge and what we have to modify in previous design.

![Fig.1](https://github.com/nadeemasghar55/RISCVIMC/blob/Nadeem_B-dev/doc/Images/BD_P4_R1.png)

After detail analysis we come to know that we have to update IF/ID stage of RISCV IM to convert into RISCV IMC. Therefore, we have started working on it and designed the compressed decoder module as shown in figure.1. Firstly, we have converted and map the compressed RISCV instructions into respective 32-bit instructions and phttps://github.com/nadeemasghar55/RISCVIMC/blob/Nadeem_B-devass them into next stage. Firstly, there is a DEMUX which decides whether the instruction is compressed or not based on opcode. Based on opcode it passes the respective instructions to MUX. If instruction is compressed then bit extension is done on the instruction and then forwarded to the next stage. Then we have used a flag in mux which passes compressed or uncompressed instruction depending upon the compressed flag. Second part of our design is PC optimization for compressed instructions. For normal flow PC should be update with +4 for each instruction but for compressed instruction we have updated PC value with +2 and for this purpose a MUX is used and selection between these combinations is done via using compressed flag from compressed decode as shown figure.1. So, this was all about our block diagram and remaining work flow of system remains the same. 
Then we have consulted the RTL schematics and try to develop the understanding of flow execution before starting our Verilog coding.  Following is the schematic of our RISCV IM module.  

![Fig.2](/images/BD_P4_R1.png)


This RTL schematic is obtained by using Xilinx Vivado. After that we have start working on Verilog coding of compressed decoder and write the code for the compressed decoder based upon instruction manual of RISCV compressed instructions. The mapping compressed instructions on respective RISCVI instructions is based on RISCV green card and the instruction manual of RISCVC. Four different categories based on first 2 bits of instructions are formed one of them is categorized as RISCVI 32 bit instructions and is passed as it is received to the decoder stage. Other three categories are classided as compressed instuctions and based on opcode and function3 and some other bits are further classifed. Folllowinfg figure.3, figure.4 and figure.5 shows a brief detail about classification of compressed instuctions based on above mentioned properties.

![Fig.3](/images/C1.png)


![Fig.4](/images/C2.png)


![Fig.5](/images/C3.png)

So all the compressed instructions are decompressed into respective RISCV instructions for further processing using above mentioned scheme.

Then finaly designed decoder is embeedded to RISCVIM for addition of support for compress instructions. For this firstly, PC value is provided with the support of additional adder and now PC will update its values based on compressed decoder's flag. Now, there is support for PC to update its value by +4 or +2 depending upon the situation whether we have compressed instruction or not. Then compress decoder is embedded to all the respective RTL modules. During the whole process alot of errors and bugs have come across and these sort out after alot of debugging. 


___

## **Design Verification**
---
For design verification firstly we have understood the test and verification flow of the design under test. For verification of design under test there were two types of tests we have to implement named the RTL simulator called sim generated by Verilator. Another one is the software RISC-V simulator called rvsim located in tools directory. Firstly, compliance tests simulated on RTL simulator. This repo test the compliance of hardware implementation by comparing the output results running on both simulator. To be precise, when type make tests in./tests directory, compliance tests will be run on the RTL simulator (sim) and the output will be compared with the reference output specified by riscv-compliance AND the output of software simulator (rvsim). The memory dump of RTL simulator dump.txt will be renamed to. signature. output and will be automatically compared to the reference output provided by riscv-compliance repo. The output of RTL simulator (sim) is stored in trace.log file while the output of software simulator (rvsim) is stored in trace_sw.log file. These two files contain detailed information of each instruction such as: value write to a certain register, value write to a certain memory address etc. These two files will be compared through a diff --brief command. 
Then compliance tests simulated on SW simulator. When one types make tests-sw in./tests directory, compliance tests will be run on the software simulator. The output results compared with itself AND the reference output provided by riscv-compliance repo. Then code coverage of design under test is simulated. After analysis of coverage results it was concluded that we have to optimize the line coverage which is approximately 94% currently and we will try to improve this. Following figure.3 shows the coverage results which we have obtained so far. 

![Fig.6](/images/coverage.svg)

Afterwards, assembly tests for design verification has been written. Firstly simple tests for verification has beeen written and then all tests have been applied to our design for verification. Finally, the verification of RISCV model with C extension is done with different test cases.

---


## **Conclusions**
---

Finally to conclude the things we can say that it was a great learning experience to work on such a comprehensive project. While instruction compression has been promoted as a way to reduce code density and enhance performance of the system. The RISC-V ISA's compressed instruction set expansion is extremely adaptable. In addition to the apparent benefit of reduced code density, instruction compression can be used to increase throughput/performance at a low cost of hardware.



already existing project understanding and its expansion

verification tests



---




## **References**
---
  






---