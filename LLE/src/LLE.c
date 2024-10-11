/// Test
///
/// This code is an implementation of the following paper:
/// https://physionet.org/files/lyapunov/1.0.0/RosensteinM93.pdf
///
/// I'm just writing the code. I did not create the algorithm.




#include <math.h>
#include "LLE.h"


/// We don't need this.
double fnd_calcKolomogorovEntropy(double *pad_lyapunovExpArr[], int i_arrLength)
{
	return 0.0;
}


/// The mean period is the reciprocal of the mean frequency of the power spectrum.

/// Just for testing, calculate the median frequency of the magnitude spectrum.
/// The authors postulate that they expect similar results.



/// Reconstruct the trajectory in the state-space.



/// X_i is the state of the system at discrete time i.
struct st_stateOfSystem_X_i
{
	double* pad_timeSeriesData[];
}


/// For an N-point time series, {x_1, x_2, ... x_n}, each X_i is given by
/// X_i = [x_i x_(i+J) ... x_((i + (m-2))J) x_((i + (m-1))J)]



/// Thus X is an Mxm matrix, where m, M, J and N are related as:
///		M = N - (m-1)J
///	J is the lag or reconstruction delay and m is the embedding dimension.
///	where m > 2n
