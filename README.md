# TDCAlign
TDC Alignment TSelector for K600 Code

Usage:
`DATA->Process("TDCAlign.C")` 

Where DATA is a standard `k600analyser` TTree or TChain (riskier)

It will create a .dat file TDCAlignPR264.dat, which can be directly loaded by config.cfg in the analyser directory.
