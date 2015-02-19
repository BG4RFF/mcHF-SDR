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

#ifndef __I_RX_FILTER_H
#define __I_RX_FILTER_H

#define I_BLOCK_SIZE		1
#define I_NUM_TAPS			89

/*
 	 * Hilbert 0 Degree, "Phase-added" bandpass filter
     * Kaiser Window FIR Filter, Beta = 3.25, Raised Cosine = 9.30
     * Fc = 5.23 kHz
     * BW = 9.50 kHz
     * 89 Taps
     *
     * 20140926 by KA7OEI using Iowa Hills Hilbert Filter Designer
*/

const float i_rx_coeffs[I_NUM_TAPS] =
{
		 0.000101250517153683,
		-0.000515927338247317,
		-0.00176919806883,
		-0.001893116080949,
		-0.000577659000336806,
		 3.550079658197940E-6,
		-0.00172963585657513,
		-0.0038100999663584,
		-0.0031472032338157,
		-0.000586333586637393,
		-0.000494536851592284,
		-0.00415653740435641,
		-0.00680718523656846,
		-0.00429325456879721,
		-0.000273434114376999,
		-0.00181389209595478,
		-0.0082208278123836,
		-0.0105062537188667,
		-0.00469751224581168,
		 0.000452038013830452,
		-0.00454071945888382,
		-0.0142111518079221,
		-0.0142255278253247,
		-0.00344416232313822,
		 0.001565954170156727,
		-0.00947713768589062,
		-0.0222735621260352,
		-0.0167608122370822,
		 0.000803648164899460,
		 0.002905223684809450,
		-0.0179852797068097,
		-0.0327457542271941,
		-0.0160524441181231,
		 0.010701868004134297,
		 0.004196449024939201,
		-0.0338893802111143,
		-0.0479948819717114,
		-0.00683680444677724,
		 0.036441721082929118,
		 0.005133250668784600,
		-0.0804182627087614,
		-0.0919356431907568,
		 0.060333107936900596,
		 0.291908298625711771,
		 0.404029117624692125,
		 0.291908298625728535,
		 0.060333107936918977,
		-0.0919356431907509,
		-0.0804182627087674,
		 0.005133250668778217,
		 0.036441721082930000,
		-0.00683680444677221,
		-0.0479948819717094,
		-0.033889380211117,
		 0.004196449024936275,
		 0.010701868004134651,
		-0.016052444118121,
		-0.0327457542271935,
		-0.0179852797068109,
		 0.002905223684808852,
		 0.000803648164900392,
		-0.0167608122370813,
		-0.0222735621260356,
		-0.00947713768589167,
		 0.001565954170156743,
		-0.00344416232313721,
		-0.0142255278253243,
		-0.0142111518079231,
		-0.00454071945888512,
		 0.000452038013830350,
		-0.00469751224581064,
		-0.0105062537188658,
		-0.00822082781238365,
		-0.0018138920959553,
		-0.000273434114377146,
		-0.00429325456879692,
		-0.0068071852365683,
		-0.00415653740435665,
		-0.000494536851592651,
		-0.000586333586637503,
		-0.00314720323381554,
		-0.00381009996635821,
		-0.00172963585657509,
		 3.550079658144650E-6,
		-0.000577659000336875,
		-0.00189311608094905,
		-0.00176919806883003,
		-0.000515927338247313,
		 0.000101250517153702
};

/*
static float32_t 		FirState_I[128];
arm_fir_instance_f32 	FIR_I;
*/
#endif
