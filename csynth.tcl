open_project -reset prj_anomaly_detection
set_top anomaly_detection
add_files anomaly_detection.cpp -cflags "-std=c++0x -I../"
add_files NN/VAE_HLS.cpp -cflags "-std=c++0x -INN/"
add_files conversions.cpp -cflags "-std=c++11 -I../"

open_solution -reset "solution1"

# the part on MP7 XE 690
set_part {xc7vx690t-ffg1927-2}

# 40 MHZ LHC clock
create_clock -period 25
set_clock_uncertainty 0

config_array_partition -complete_threshold 2

csynth_design

exit