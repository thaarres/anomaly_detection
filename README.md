# Anomaly detection on Xilinx Vertex 7

This repositary contains the neccessary code to generate an HLS project for doing anomaly detection on an FPGA. It consists of a pre-processing part (spherical to cartesian coordinates using sin/sinh lookup tables), an infernece part (an autoencoder model consisting of 3 dense layers with relu activation functions, and an output array of size 5) and a final anomaly score computation (sum of squares). It takes as input 4 muons, 4 egammas, 10 jets and missing energy, and resturns an anomaly score for the collision event (high for anomalous events). This uses Vitis HLS 2021.2 (Build 3367213).

```
vitis_hls -f csim.tcl # To run C simulation (testbench in anomaly_detection_test.cpp)
vitis_hls -f csynth.tcl # To run C synthesis (synthesising main function in anomaly_detection.cpp)
vitis_hls -f vsynth.tcl # To run Vivado synthesis (synthesising main function in anomaly_detection.cpp)
```