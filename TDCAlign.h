//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Oct 12 17:09:14 2016 by ROOT version 6.04/16
// from TTree DATA/K600 data
// found on file: ../sorted/sorted01085.root
//////////////////////////////////////////////////////////

#ifndef TDCAlign_h
#define TDCAlign_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>

// Header file for the classes stored in the TTree if any.

class TDCAlign : public TSelector {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           runtime;
   Int_t           evtcounter;
   Int_t           tdcsperevent;
   Int_t           triggerI;
   Int_t           triggerU;
   Int_t           CIU;
   Int_t           CII;
   Int_t           tof;
   Int_t           toftdc2;
   Int_t           toftdc3;
   Int_t           toftdc4;
   Int_t           toftdc5;
   Int_t           toftdc6;
   Int_t           toftdc7;
   Int_t           k600;
   Double_t        pad1;
   Double_t        pad2;
   Double_t        pad1hiP;
   Double_t        pad1lowP;
   Double_t        pad2hiP;
   Double_t        pad2lowP;
   Double_t        pad1hiPT;
   Double_t        pad1lowPT;
   Double_t        pad2hiPT;
   Double_t        pad2lowPT;
   Double_t        X1pos;
   Double_t        X1th;
   Int_t           X1flag;
   Double_t        X1chisq;
   Double_t        X1res0;
   Double_t        X1res1;
   Int_t           X1hits;
   Double_t        X1effID;
   Double_t        X1effall;
   Double_t        X1effdt;
   Double_t        X1effgroup;
   Double_t        X1effgood;
   Int_t           nX1wiresUsed;
   Int_t           X1doublewires;
   Int_t           X1multiplemin;
   Double_t        X1TimeDiff;
   Int_t           X1wireUsed[9];   //[t_nX1wiresUsed]
   Double_t        X1distUsed[9];   //[t_nX1wiresUsed]
   Double_t        U1pos;
   Double_t        U1th;
   Int_t           U1flag;
   Double_t        U1chisq;
   Double_t        U1res0;
   Double_t        U1res1;
   Double_t        U1effID;
   Int_t           U1hits;
   Double_t        U1effall;
   Double_t        U1effdt;
   Double_t        U1effgroup;
   Double_t        U1effgood;
   Int_t           nU1wiresUsed;
   Int_t           U1doublewires;
   Int_t           U1multiplemin;
   Int_t           U1wireUsed[1];   //[t_nU1wiresUsed]
   Double_t        X2pos;
   Double_t        X2th;
   Int_t           X2flag;
   Double_t        X2chisq;
   Double_t        X2res0;
   Double_t        X2res1;
   Double_t        X2effID;
   Int_t           X2hits;
   Double_t        X2effall;
   Double_t        X2effdt;
   Double_t        X2effgroup;
   Double_t        X2effgood;
   Int_t           nX2wiresUsed;
   Int_t           X2doublewires;
   Int_t           X2multiplemin;
   Int_t           X2wireUsed[8];   //[t_nX2wiresUsed]
   Double_t        U2pos;
   Double_t        U2th;
   Int_t           U2flag;
   Double_t        U2chisq;
   Double_t        U2res0;
   Double_t        U2res1;
   Double_t        U2effID;
   Int_t           U2hits;
   Double_t        U2effall;
   Double_t        U2effdt;
   Double_t        U2effgroup;
   Double_t        U2effgood;
   Int_t           nU2wiresUsed;
   Int_t           U2doublewires;
   Int_t           U2multiplemin;
   Int_t           U2wireUsed[1];   //[t_nU2wiresUsed]
   Double_t        thetaFP;
   Double_t        thetaFPx;
   Double_t        phiFP;
   Double_t        Y1;
   Double_t        Y2;
   Int_t           pulser;
   Double_t        X1posC;
   Double_t        Ex;
   Double_t        ExC;
   Double_t        T3;
   Double_t        rigidity3;
   Double_t        theta;
   Double_t        thetaSCAT;
   Double_t        phiSCAT;
 //SiliconData     *SiliconInfo;
   Int_t           SiliconHits;
   vector<double>  SiliconEnergy;
   vector<double>  SiliconTheta;
   vector<double>  SiliconPhi;
   vector<double>  SiliconTime;
   vector<double>  SiliconTimeFront;
   vector<double>  SiliconTimeBack;
   vector<double>  SiliconTimeOffset;
   vector<int>     DetectorHit;
   vector<int>     ADCChannelFront;
   vector<int>     ADCChannelBack;
   vector<int>     TDCChannelFront;
   vector<int>     TDCChannelBack;
   vector<int>     ADCValueFront;
   vector<int>     ADCValueBack;
   vector<int>     TDCValueFront;
   vector<int>     TDCValueBack;
   vector<int>     StripFront;
   vector<int>     StripBack;
   vector<double>  EnergyFront;
   vector<double>  EnergyBack;
   vector<int>     TDCChannelMultiplicity;
 //GammaData       *GammaInfo;
   Int_t           GammaHits;
   vector<double>  GammaEnergy;
   vector<double>  GammaTime;
   vector<string>  GammaDetectorType;
   vector<int>     GammaDetectorLabel;
   vector<int>     GammaDetectorSegm;
   vector<int>     GammaRawADC;
   vector<int>     GammaADCChannel;
   vector<int>     GammaTDCChannel;
   vector<int>     GammaTDCMultiplicity;
 //RawData         *RawInfo;
   vector<int>     ADCValues;
   vector<int>     ADCChannels;
   vector<int>     TDCChannels;
   vector<int>     TDCValues;
   vector<double>  ADCCalibratedValues;
   vector<int>     QDCValues;

   // List of branches
   TBranch        *b_t_runtime;   //!
   TBranch        *b_t_evtcounter;   //!
   TBranch        *b_t_tdcsperevent;   //!
   TBranch        *b_t_triggerI;   //!
   TBranch        *b_t_triggerU;   //!
   TBranch        *b_t_CIU;   //!
   TBranch        *b_t_CII;   //!
   TBranch        *b_t_tof;   //!
   TBranch        *b_t_toftdc2;   //!
   TBranch        *b_t_toftdc3;   //!
   TBranch        *b_t_toftdc4;   //!
   TBranch        *b_t_toftdc5;   //!
   TBranch        *b_t_toftdc6;   //!
   TBranch        *b_t_toftdc7;   //!
   TBranch        *b_t_k600;   //!
   TBranch        *b_t_pad1;   //!
   TBranch        *b_t_pad2;   //!
   TBranch        *b_t_pad1hiP;   //!
   TBranch        *b_t_pad1lowP;   //!
   TBranch        *b_t_pad2hiP;   //!
   TBranch        *b_t_pad2lowP;   //!
   TBranch        *b_t_pad1hiPT;   //!
   TBranch        *b_t_pad1lowPT;   //!
   TBranch        *b_t_pad2hiPT;   //!
   TBranch        *b_t_pad2lowPT;   //!
   TBranch        *b_t_X1pos;   //!
   TBranch        *b_t_X1th;   //!
   TBranch        *b_t_X1flag;   //!
   TBranch        *b_t_X1chisq;   //!
   TBranch        *b_t_X1res0;   //!
   TBranch        *b_t_X1res1;   //!
   TBranch        *b_t_X1hits;   //!
   TBranch        *b_t_X1effID;   //!
   TBranch        *b_t_X1effall;   //!
   TBranch        *b_t_X1effdt;   //!
   TBranch        *b_t_X1effgroup;   //!
   TBranch        *b_t_X1effgood;   //!
   TBranch        *b_t_nX1wiresUsed;   //!
   TBranch        *b_t_X1doublewires;   //!
   TBranch        *b_t_X1multiplemin;   //!
   TBranch        *b_t_X1TimeDiff;   //!
   TBranch        *b_X1wireUsed;   //!
   TBranch        *b_X1distUsed;   //!
   TBranch        *b_t_U1pos;   //!
   TBranch        *b_t_U1th;   //!
   TBranch        *b_t_U1flag;   //!
   TBranch        *b_t_U1chisq;   //!
   TBranch        *b_t_U1res0;   //!
   TBranch        *b_t_U1res1;   //!
   TBranch        *b_t_U1effID;   //!
   TBranch        *b_t_U1hits;   //!
   TBranch        *b_t_U1effall;   //!
   TBranch        *b_t_U1effdt;   //!
   TBranch        *b_t_U1effgroup;   //!
   TBranch        *b_t_U1effgood;   //!
   TBranch        *b_t_nU1wiresUsed;   //!
   TBranch        *b_t_U1doublewires;   //!
   TBranch        *b_t_U1multiplemin;   //!
   TBranch        *b_U1wireUsed;   //!
   TBranch        *b_t_X2pos;   //!
   TBranch        *b_t_X2th;   //!
   TBranch        *b_t_X2flag;   //!
   TBranch        *b_t_X2chisq;   //!
   TBranch        *b_t_X2res0;   //!
   TBranch        *b_t_X2res1;   //!
   TBranch        *b_t_X2effID;   //!
   TBranch        *b_t_X2hits;   //!
   TBranch        *b_t_X2effall;   //!
   TBranch        *b_t_X2effdt;   //!
   TBranch        *b_t_X2effgroup;   //!
   TBranch        *b_t_X2effgood;   //!
   TBranch        *b_t_nX2wiresUsed;   //!
   TBranch        *b_t_X2doublewires;   //!
   TBranch        *b_t_X2multiplemin;   //!
   TBranch        *b_X2wireUsed;   //!
   TBranch        *b_t_U2pos;   //!
   TBranch        *b_t_U2th;   //!
   TBranch        *b_t_U2flag;   //!
   TBranch        *b_t_U2chisq;   //!
   TBranch        *b_t_U2res0;   //!
   TBranch        *b_t_U2res1;   //!
   TBranch        *b_t_U2effID;   //!
   TBranch        *b_t_U2hits;   //!
   TBranch        *b_t_U2effall;   //!
   TBranch        *b_t_U2effdt;   //!
   TBranch        *b_t_U2effgroup;   //!
   TBranch        *b_t_U2effgood;   //!
   TBranch        *b_t_nU2wiresUsed;   //!
   TBranch        *b_t_U2doublewires;   //!
   TBranch        *b_t_U2multiplemin;   //!
   TBranch        *b_U2wireUsed;   //!
   TBranch        *b_t_thetaFP;   //!
   TBranch        *b_t_thetaFPx;   //!
   TBranch        *b_t_phiFP;   //!
   TBranch        *b_t_Y1;   //!
   TBranch        *b_t_Y2;   //!
   TBranch        *b_t_pulser;   //!
   TBranch        *b_t_X1posC;   //!
   TBranch        *b_t_Ex;   //!
   TBranch        *b_t_ExC;   //!
   TBranch        *b_t_T3;   //!
   TBranch        *b_t_rigidity3;   //!
   TBranch        *b_t_theta;   //!
   TBranch        *b_t_thetaSCAT;   //!
   TBranch        *b_t_phiSCAT;   //!
   TBranch        *b_SiliconInfo_SiliconHits;   //!
   TBranch        *b_SiliconInfo_SiliconEnergy;   //!
   TBranch        *b_SiliconInfo_SiliconTheta;   //!
   TBranch        *b_SiliconInfo_SiliconPhi;   //!
   TBranch        *b_SiliconInfo_SiliconTime;   //!
   TBranch        *b_SiliconInfo_SiliconTimeFront;   //!
   TBranch        *b_SiliconInfo_SiliconTimeBack;   //!
   TBranch        *b_SiliconInfo_SiliconTimeOffset;   //!
   TBranch        *b_SiliconInfo_DetectorHit;   //!
   TBranch        *b_SiliconInfo_ADCChannelFront;   //!
   TBranch        *b_SiliconInfo_ADCChannelBack;   //!
   TBranch        *b_SiliconInfo_TDCChannelFront;   //!
   TBranch        *b_SiliconInfo_TDCChannelBack;   //!
   TBranch        *b_SiliconInfo_ADCValueFront;   //!
   TBranch        *b_SiliconInfo_ADCValueBack;   //!
   TBranch        *b_SiliconInfo_TDCValueFront;   //!
   TBranch        *b_SiliconInfo_TDCValueBack;   //!
   TBranch        *b_SiliconInfo_StripFront;   //!
   TBranch        *b_SiliconInfo_StripBack;   //!
   TBranch        *b_SiliconInfo_EnergyFront;   //!
   TBranch        *b_SiliconInfo_EnergyBack;   //!
   TBranch        *b_SiliconInfo_TDCChannelMultiplicity;   //!
   TBranch        *b_GammaInfo_GammaHits;   //!
   TBranch        *b_GammaInfo_GammaEnergy;   //!
   TBranch        *b_GammaInfo_GammaTime;   //!
   TBranch        *b_GammaInfo_GammaDetectorType;   //!
   TBranch        *b_GammaInfo_GammaDetectorLabel;   //!
   TBranch        *b_GammaInfo_GammaDetectorSegm;   //!
   TBranch        *b_GammaInfo_GammaRawADC;   //!
   TBranch        *b_GammaInfo_GammaADCChannel;   //!
   TBranch        *b_GammaInfo_GammaTDCChannel;   //!
   TBranch        *b_GammaInfo_GammaTDCMultiplicity;   //!
   TBranch        *b_RawInfo_ADCValues;   //!
   TBranch        *b_RawInfo_ADCChannels;   //!
   TBranch        *b_RawInfo_TDCChannels;   //!
   TBranch        *b_RawInfo_TDCValues;   //!
   TBranch        *b_RawInfo_ADCCalibratedValues;   //!
   TBranch        *b_RawInfo_QDCValues;   //!

   TDCAlign(TTree * /*tree*/ =0) : fChain(0) { }
   virtual ~TDCAlign() { }
   virtual Int_t   Version() const { return 2; }
   virtual void    Begin(TTree *tree);
   virtual void    SlaveBegin(TTree *tree);
   virtual void    Init(TTree *tree);
   virtual Bool_t  Notify();
   virtual Bool_t  Process(Long64_t entry);
   virtual Int_t   GetEntry(Long64_t entry, Int_t getall = 0) { return fChain ? fChain->GetTree()->GetEntry(entry, getall) : 0; }
   virtual void    SetOption(const char *option) { fOption = option; }
   virtual void    SetObject(TObject *obj) { fObject = obj; }
   virtual void    SetInputList(TList *input) { fInput = input; }
   virtual TList  *GetOutputList() const { return fOutput; }
   virtual void    SlaveTerminate();
   virtual void    Terminate();

   ClassDef(TDCAlign,0);
};

#endif

#ifdef TDCAlign_cxx
void TDCAlign::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("runtime", &runtime, &b_t_runtime);
   fChain->SetBranchAddress("evtcounter", &evtcounter, &b_t_evtcounter);
   fChain->SetBranchAddress("tdcsperevent", &tdcsperevent, &b_t_tdcsperevent);
   fChain->SetBranchAddress("triggerI", &triggerI, &b_t_triggerI);
   fChain->SetBranchAddress("triggerU", &triggerU, &b_t_triggerU);
   fChain->SetBranchAddress("CIU", &CIU, &b_t_CIU);
   fChain->SetBranchAddress("CII", &CII, &b_t_CII);
   fChain->SetBranchAddress("tof", &tof, &b_t_tof);
   fChain->SetBranchAddress("toftdc2", &toftdc2, &b_t_toftdc2);
   fChain->SetBranchAddress("toftdc3", &toftdc3, &b_t_toftdc3);
   fChain->SetBranchAddress("toftdc4", &toftdc4, &b_t_toftdc4);
   fChain->SetBranchAddress("toftdc5", &toftdc5, &b_t_toftdc5);
   fChain->SetBranchAddress("toftdc6", &toftdc6, &b_t_toftdc6);
   fChain->SetBranchAddress("toftdc7", &toftdc7, &b_t_toftdc7);
   fChain->SetBranchAddress("k600", &k600, &b_t_k600);
   fChain->SetBranchAddress("pad1", &pad1, &b_t_pad1);
   fChain->SetBranchAddress("pad2", &pad2, &b_t_pad2);
   fChain->SetBranchAddress("pad1hiP", &pad1hiP, &b_t_pad1hiP);
   fChain->SetBranchAddress("pad1lowP", &pad1lowP, &b_t_pad1lowP);
   fChain->SetBranchAddress("pad2hiP", &pad2hiP, &b_t_pad2hiP);
   fChain->SetBranchAddress("pad2lowP", &pad2lowP, &b_t_pad2lowP);
   fChain->SetBranchAddress("pad1hiPT", &pad1hiPT, &b_t_pad1hiPT);
   fChain->SetBranchAddress("pad1lowPT", &pad1lowPT, &b_t_pad1lowPT);
   fChain->SetBranchAddress("pad2hiPT", &pad2hiPT, &b_t_pad2hiPT);
   fChain->SetBranchAddress("pad2lowPT", &pad2lowPT, &b_t_pad2lowPT);
   fChain->SetBranchAddress("X1pos", &X1pos, &b_t_X1pos);
   fChain->SetBranchAddress("X1th", &X1th, &b_t_X1th);
   fChain->SetBranchAddress("X1flag", &X1flag, &b_t_X1flag);
   fChain->SetBranchAddress("X1chisq", &X1chisq, &b_t_X1chisq);
   fChain->SetBranchAddress("X1res0", &X1res0, &b_t_X1res0);
   fChain->SetBranchAddress("X1res1", &X1res1, &b_t_X1res1);
   fChain->SetBranchAddress("X1hits", &X1hits, &b_t_X1hits);
   fChain->SetBranchAddress("X1effID", &X1effID, &b_t_X1effID);
   fChain->SetBranchAddress("X1effall", &X1effall, &b_t_X1effall);
   fChain->SetBranchAddress("X1effdt", &X1effdt, &b_t_X1effdt);
   fChain->SetBranchAddress("X1effgroup", &X1effgroup, &b_t_X1effgroup);
   fChain->SetBranchAddress("X1effgood", &X1effgood, &b_t_X1effgood);
   fChain->SetBranchAddress("nX1wiresUsed", &nX1wiresUsed, &b_t_nX1wiresUsed);
   fChain->SetBranchAddress("X1doublewires", &X1doublewires, &b_t_X1doublewires);
   fChain->SetBranchAddress("X1multiplemin", &X1multiplemin, &b_t_X1multiplemin);
   fChain->SetBranchAddress("X1TimeDiff", &X1TimeDiff, &b_t_X1TimeDiff);
   fChain->SetBranchAddress("X1wireUsed", X1wireUsed, &b_X1wireUsed);
   fChain->SetBranchAddress("X1distUsed", X1distUsed, &b_X1distUsed);
   fChain->SetBranchAddress("U1pos", &U1pos, &b_t_U1pos);
   fChain->SetBranchAddress("U1th", &U1th, &b_t_U1th);
   fChain->SetBranchAddress("U1flag", &U1flag, &b_t_U1flag);
   fChain->SetBranchAddress("U1chisq", &U1chisq, &b_t_U1chisq);
   fChain->SetBranchAddress("U1res0", &U1res0, &b_t_U1res0);
   fChain->SetBranchAddress("U1res1", &U1res1, &b_t_U1res1);
   fChain->SetBranchAddress("U1effID", &U1effID, &b_t_U1effID);
   fChain->SetBranchAddress("U1hits", &U1hits, &b_t_U1hits);
   fChain->SetBranchAddress("U1effall", &U1effall, &b_t_U1effall);
   fChain->SetBranchAddress("U1effdt", &U1effdt, &b_t_U1effdt);
   fChain->SetBranchAddress("U1effgroup", &U1effgroup, &b_t_U1effgroup);
   fChain->SetBranchAddress("U1effgood", &U1effgood, &b_t_U1effgood);
   fChain->SetBranchAddress("nU1wiresUsed", &nU1wiresUsed, &b_t_nU1wiresUsed);
   fChain->SetBranchAddress("U1doublewires", &U1doublewires, &b_t_U1doublewires);
   fChain->SetBranchAddress("U1multiplemin", &U1multiplemin, &b_t_U1multiplemin);
   fChain->SetBranchAddress("U1wireUsed", &U1wireUsed, &b_U1wireUsed);
   fChain->SetBranchAddress("X2pos", &X2pos, &b_t_X2pos);
   fChain->SetBranchAddress("X2th", &X2th, &b_t_X2th);
   fChain->SetBranchAddress("X2flag", &X2flag, &b_t_X2flag);
   fChain->SetBranchAddress("X2chisq", &X2chisq, &b_t_X2chisq);
   fChain->SetBranchAddress("X2res0", &X2res0, &b_t_X2res0);
   fChain->SetBranchAddress("X2res1", &X2res1, &b_t_X2res1);
   fChain->SetBranchAddress("X2effID", &X2effID, &b_t_X2effID);
   fChain->SetBranchAddress("X2hits", &X2hits, &b_t_X2hits);
   fChain->SetBranchAddress("X2effall", &X2effall, &b_t_X2effall);
   fChain->SetBranchAddress("X2effdt", &X2effdt, &b_t_X2effdt);
   fChain->SetBranchAddress("X2effgroup", &X2effgroup, &b_t_X2effgroup);
   fChain->SetBranchAddress("X2effgood", &X2effgood, &b_t_X2effgood);
   fChain->SetBranchAddress("nX2wiresUsed", &nX2wiresUsed, &b_t_nX2wiresUsed);
   fChain->SetBranchAddress("X2doublewires", &X2doublewires, &b_t_X2doublewires);
   fChain->SetBranchAddress("X2multiplemin", &X2multiplemin, &b_t_X2multiplemin);
   fChain->SetBranchAddress("X2wireUsed", X2wireUsed, &b_X2wireUsed);
   fChain->SetBranchAddress("U2pos", &U2pos, &b_t_U2pos);
   fChain->SetBranchAddress("U2th", &U2th, &b_t_U2th);
   fChain->SetBranchAddress("U2flag", &U2flag, &b_t_U2flag);
   fChain->SetBranchAddress("U2chisq", &U2chisq, &b_t_U2chisq);
   fChain->SetBranchAddress("U2res0", &U2res0, &b_t_U2res0);
   fChain->SetBranchAddress("U2res1", &U2res1, &b_t_U2res1);
   fChain->SetBranchAddress("U2effID", &U2effID, &b_t_U2effID);
   fChain->SetBranchAddress("U2hits", &U2hits, &b_t_U2hits);
   fChain->SetBranchAddress("U2effall", &U2effall, &b_t_U2effall);
   fChain->SetBranchAddress("U2effdt", &U2effdt, &b_t_U2effdt);
   fChain->SetBranchAddress("U2effgroup", &U2effgroup, &b_t_U2effgroup);
   fChain->SetBranchAddress("U2effgood", &U2effgood, &b_t_U2effgood);
   fChain->SetBranchAddress("nU2wiresUsed", &nU2wiresUsed, &b_t_nU2wiresUsed);
   fChain->SetBranchAddress("U2doublewires", &U2doublewires, &b_t_U2doublewires);
   fChain->SetBranchAddress("U2multiplemin", &U2multiplemin, &b_t_U2multiplemin);
   fChain->SetBranchAddress("U2wireUsed", &U2wireUsed, &b_U2wireUsed);
   fChain->SetBranchAddress("thetaFP", &thetaFP, &b_t_thetaFP);
   fChain->SetBranchAddress("thetaFPx", &thetaFPx, &b_t_thetaFPx);
   fChain->SetBranchAddress("phiFP", &phiFP, &b_t_phiFP);
   fChain->SetBranchAddress("Y1", &Y1, &b_t_Y1);
   fChain->SetBranchAddress("Y2", &Y2, &b_t_Y2);
   fChain->SetBranchAddress("pulser", &pulser, &b_t_pulser);
   fChain->SetBranchAddress("X1posC", &X1posC, &b_t_X1posC);
   fChain->SetBranchAddress("Ex", &Ex, &b_t_Ex);
   fChain->SetBranchAddress("ExC", &ExC, &b_t_ExC);
   fChain->SetBranchAddress("T3", &T3, &b_t_T3);
   fChain->SetBranchAddress("rigidity3", &rigidity3, &b_t_rigidity3);
   fChain->SetBranchAddress("theta", &theta, &b_t_theta);
   fChain->SetBranchAddress("thetaSCAT", &thetaSCAT, &b_t_thetaSCAT);
   fChain->SetBranchAddress("phiSCAT", &phiSCAT, &b_t_phiSCAT);
   fChain->SetBranchAddress("SiliconHits", &SiliconHits, &b_SiliconInfo_SiliconHits);
   fChain->SetBranchAddress("SiliconEnergy", &SiliconEnergy, &b_SiliconInfo_SiliconEnergy);
   fChain->SetBranchAddress("SiliconTheta", &SiliconTheta, &b_SiliconInfo_SiliconTheta);
   fChain->SetBranchAddress("SiliconPhi", &SiliconPhi, &b_SiliconInfo_SiliconPhi);
   fChain->SetBranchAddress("SiliconTime", &SiliconTime, &b_SiliconInfo_SiliconTime);
   fChain->SetBranchAddress("SiliconTimeFront", &SiliconTimeFront, &b_SiliconInfo_SiliconTimeFront);
   fChain->SetBranchAddress("SiliconTimeBack", &SiliconTimeBack, &b_SiliconInfo_SiliconTimeBack);
   fChain->SetBranchAddress("SiliconTimeOffset", &SiliconTimeOffset, &b_SiliconInfo_SiliconTimeOffset);
   fChain->SetBranchAddress("DetectorHit", &DetectorHit, &b_SiliconInfo_DetectorHit);
   fChain->SetBranchAddress("ADCChannelFront", &ADCChannelFront, &b_SiliconInfo_ADCChannelFront);
   fChain->SetBranchAddress("ADCChannelBack", &ADCChannelBack, &b_SiliconInfo_ADCChannelBack);
   fChain->SetBranchAddress("TDCChannelFront", &TDCChannelFront, &b_SiliconInfo_TDCChannelFront);
   fChain->SetBranchAddress("TDCChannelBack", &TDCChannelBack, &b_SiliconInfo_TDCChannelBack);
   fChain->SetBranchAddress("ADCValueFront", &ADCValueFront, &b_SiliconInfo_ADCValueFront);
   fChain->SetBranchAddress("ADCValueBack", &ADCValueBack, &b_SiliconInfo_ADCValueBack);
   fChain->SetBranchAddress("TDCValueFront", &TDCValueFront, &b_SiliconInfo_TDCValueFront);
   fChain->SetBranchAddress("TDCValueBack", &TDCValueBack, &b_SiliconInfo_TDCValueBack);
   fChain->SetBranchAddress("StripFront", &StripFront, &b_SiliconInfo_StripFront);
   fChain->SetBranchAddress("StripBack", &StripBack, &b_SiliconInfo_StripBack);
   fChain->SetBranchAddress("EnergyFront", &EnergyFront, &b_SiliconInfo_EnergyFront);
   fChain->SetBranchAddress("EnergyBack", &EnergyBack, &b_SiliconInfo_EnergyBack);
   fChain->SetBranchAddress("TDCChannelMultiplicity", &TDCChannelMultiplicity, &b_SiliconInfo_TDCChannelMultiplicity);
   fChain->SetBranchAddress("GammaHits", &GammaHits, &b_GammaInfo_GammaHits);
   fChain->SetBranchAddress("GammaEnergy", &GammaEnergy, &b_GammaInfo_GammaEnergy);
   fChain->SetBranchAddress("GammaTime", &GammaTime, &b_GammaInfo_GammaTime);
   fChain->SetBranchAddress("GammaDetectorType", &GammaDetectorType, &b_GammaInfo_GammaDetectorType);
   fChain->SetBranchAddress("GammaDetectorLabel", &GammaDetectorLabel, &b_GammaInfo_GammaDetectorLabel);
   fChain->SetBranchAddress("GammaDetectorSegm", &GammaDetectorSegm, &b_GammaInfo_GammaDetectorSegm);
   fChain->SetBranchAddress("GammaRawADC", &GammaRawADC, &b_GammaInfo_GammaRawADC);
   fChain->SetBranchAddress("GammaADCChannel", &GammaADCChannel, &b_GammaInfo_GammaADCChannel);
   fChain->SetBranchAddress("GammaTDCChannel", &GammaTDCChannel, &b_GammaInfo_GammaTDCChannel);
   fChain->SetBranchAddress("GammaTDCMultiplicity", &GammaTDCMultiplicity, &b_GammaInfo_GammaTDCMultiplicity);
   fChain->SetBranchAddress("ADCValues", &ADCValues, &b_RawInfo_ADCValues);
   fChain->SetBranchAddress("ADCChannels", &ADCChannels, &b_RawInfo_ADCChannels);
   fChain->SetBranchAddress("TDCChannels", &TDCChannels, &b_RawInfo_TDCChannels);
   fChain->SetBranchAddress("TDCValues", &TDCValues, &b_RawInfo_TDCValues);
   fChain->SetBranchAddress("ADCCalibratedValues", &ADCCalibratedValues, &b_RawInfo_ADCCalibratedValues);
   fChain->SetBranchAddress("QDCValues", &QDCValues, &b_RawInfo_QDCValues);
}

Bool_t TDCAlign::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

#endif // #ifdef TDCAlign_cxx
