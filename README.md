## Anomaly detection on Xilinx Virtex-7 in Level-1 trigger

This contains the neccessary code to take the Level-1 trigger input data (pt/eta/phi of 10 jets, 4 electrons, 4 muons, 4egamma and missing energy = 19 objects, zero-padded) and translate that into cartesian coordinates px/py/pz (using two lookuptables (sin/sinh)) which is then used as input to a feed forward deep neural network (3 dense leyers with relu activation. Input size 57, output size 5). THis output is then squared and summed to yield the final anomaly score. The main function is in anomaly_detection.cpp, and the NN is in NN/VAE NN/VAE_HLS.cpp.
This is running Vitis_HLS 2021.2. To run:
```
vits_hls -f csim.tcl #This runs the testbench
vits_hls -f csynth.tcl #This runs C synthesis
vits_hls -f vsynth.tcl #This runs Vivado synthesis
```