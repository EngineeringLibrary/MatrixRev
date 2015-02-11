#ifndef LINALG_H
#define LINALG_H

#include "matrix.h"

namespace LinAlg {
    template<typename Type>
    Type Trace (const LinAlg::Matrix<Type>& mat);

    template<typename Type>
    void QR_Factorization (const LinAlg::Matrix<Type>& input_matrix,
                           LinAlg::Matrix<Type>& output_Q_matrix,
                           LinAlg::Matrix<Type>& output_R_matrix);

    //Simplified away to call QR_Factorization.
    template<typename Type>
    void QR (const LinAlg::Matrix<Type>& input_matrix,
             LinAlg::Matrix<Type>& output_Q_matrix,
             LinAlg::Matrix<Type>& output_R_matrix);

}

#include "src/linalg.hpp"

#endif // LINALG_H



