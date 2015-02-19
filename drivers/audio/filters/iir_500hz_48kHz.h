/************************************************************************************
**                                                                                 **
**                               mcHF QRP Transceiver                              **
**                             K Atanassov - M0NKA 2014                            **
**                                                                                 **
**---------------------------------------------------------------------------------**
**                                                                                 **
**  File name:                                                                     **
**  Description:                                                                   **
**  Last Modified:                                                                 **
**  Licence:		For radio amateurs experimentation, non-commercial use only!   **
************************************************************************************/

#ifndef __IIR_500HZ
#define __IIR_500HZ
//
// Filter designed 20140915 by C. Turner, KA7OEI using MatLAB fdatools
//
// NOTE:
//	- IIR structure is Lattice Autoregressive Moving-Average (ARMA)
//	- ARM FIR/IIR algorithms require time reverse-order coefficients!!!
//
//	Example of the nominal 750 Hz center-frequency Filter:
//
//
//	10th order Least p-th Norm. bandpass filter
//	Fstop:  200, 1290 Hz
//	Fpass:  525, 1000 Hz
//	-6dB points:  480, 1034 Hz
//	-20dB points:  410, 1084 Hz
//	-40dB points:  <304, 1184 Hz
//	-60dB point:  >1283 Hz
//
#define NCoef 10
const uint16_t IIR_500hz_numStages = NCoef;
const float IIR_500hz_750_pkCoeffs[] =
{
		0.9036661247583,
		-0.9931677607126,
		0.998104124713,
		-0.9956767401088,
		0.9989866149599,
		-0.9953225523403,
		0.9992741565935,
		-0.995035930366,
		0.9990549746264,
	    -0.9960977809669
};

const float IIR_500hz_750_pvCoeffs[] =
{
		1.476201603278e-10,
		2.122061205857e-08,
		2.183241620875e-07,
		9.197110055465e-08,
		1.331217475821e-07,
		-4.652579469735e-08,
		1.878575318535e-08,
		-4.094041583798e-10,
		2.12438167483e-10,
		2.619983924772e-12,
		-2.545256883673e-12
};
//
// 850 Hz center
//
const float IIR_500hz_850_pkCoeffs[] =
{
		2.457633036527e-05,
		-0.009156901751442,
		0.9323681653908,
		-0.9926490300646,
		0.998599248074,
		-0.994113718057,
		0.9992022999479,
		-0.9937685123212,
		0.9990793858072,
		-0.9943635642893
};

const float IIR_500hz_850_pvCoeffs[] =
{
		-4.162641721704e-11,
		-1.364764547521e-10,
		1.065274184605e-08,
		-2.306967719915e-08,
		-3.654362258262e-07,
		1.863785644082e-06,
		-2.661296010464e-06,
		-1.026197998526e-08,
		-3.208122356622e-08,
		1.02227386241e-09,
		7.290755648308e-10
};
//
// 950 Hz center
//
const float IIR_500hz_950_pkCoeffs[] =
{
		0.8999982319495,
		-0.9900850363296,
		0.9978441307091,
		-0.992914053874,
		0.9989666983298,
		-0.9924425169491,
		0.9992517943115,
		-0.9920304393007,
		0.9990456494217,
		-0.9932343953547
};

const float IIR_500hz_950_pvCoeffs[] =
{
		5.492911155736e-10,
		-1.450269999514e-09,
		8.753561430336e-09,
		-2.784143301883e-08,
		6.069611618691e-08,
		-1.056201774637e-07,
		3.835550000719e-08,
		-6.4679146992e-10,
		4.958045030154e-10,
		6.899357216385e-12,
		-9.43476548392e-12
};
//
// 650 Hz center
//
const float IIR_500hz_650_pkCoeffs[] =
{
		0.8166140053455,
		-0.9031639337104,
		0.9470714003819,
		-0.9928688877865,
		0.9986361934941,
		-0.99674891769,
		0.9992108532866,
		-0.9964106247449,
		0.9992218555597,
		-0.9974160886076
};

const float IIR_500hz_650_pvCoeffs[] =
{
		1.470831307512e-10,
		-3.351701466933e-09,
		1.459113748803e-08,
		-1.962266708894e-08,
		1.172568739469e-07,
		-4.549306574575e-07,
		3.287542441348e-07,
		-2.961862858353e-09,
		7.53968357686e-09,
		-3.194221602139e-11,
		-5.097117065081e-11
};
//
// 550 Hz center
//
const float IIR_500hz_550_pkCoeffs[] =
{
		0.3146899532252,
		-0.7681175931518,
		0.9809407862943,
		-0.9964428139598,
		0.9986622161357,
		-0.9977529810307,
		0.9991585355743,
		-0.9974378978566,
		0.9992089425409,
		-0.9985033385585
};

const float IIR_500hz_550_pvCoeffs[] =
{
		1.46206530116e-11,
		-2.17523420489e-10,
		1.761059136134e-08,
		-5.567147917442e-08,
		6.456840288739e-09,
		-2.536167774337e-07,
		4.063827615165e-07,
		-1.05533158052e-09,
		7.295661930692e-09,
		-3.257161511923e-11,
		-2.799262145781e-11
};
#endif
