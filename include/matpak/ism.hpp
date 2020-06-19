#pragma once
// hprblas.hpp :  include file containing templated C++ interfaces to High-Performance Reproducible BLAS routines
//
// Copyright (C) 2017-2020 Stillwater Supercomputing, Inc.
//
// This file is part of the HPRBLAS project, which is released under an MIT Open Source license.
/*
% ---------------------------------------------------------------------- %
% MATLAB Version:        9.2.0.556344 (R2017a).  Update 04/30/2017       %
% Prev. Version:         9.1.0.441655 (R2016b)                           %
% Purpose:               Check if nxn matrix  is M-matrix      %
% Author:                James Quinlan                                   %
% Modified:              James Quinlan 2017-07-18                        %
% Notes:
% ---------------------------------------------------------------------- %

function y=ismmat(M)
%
% ISMMAT - Determines if a n x n is a M-matrix
%
% INPUT:
%       A = n x n Z-matrix (all off diagonal entries non positive)
%
% OUTPUT:
%       y = Boolean variable 0/1
%
% NOTES: A real symmetric M-matrix is POSITIVE DEFINITE
%
% ---------------------------------------------------------------------- %

y=0;

[m,n]=size(M);

% Square?
if m~=n
y=0;
return
end
I=eye(n);

% Check if Z-matrix (all off diag. entries are <=0)
%Z=M-diag(diag(M));
%if prod(prod(Z<=0))~=1
%    y=0;
%    return
%end

if ~iszmat(M)
y=0;
return
end

% Check if invertible
if det(M)==0
y=0;
return
end

% Check if specRadius(I-D^{-1}M)<1  <==> M-matrix
D=diag(diag(M));
D=inv(D);
if max(abs(eigs(I-D*M)))<1
y=1;
end

end
 */


#include <boost/numeric/mtl/mtl.hpp>

namespace sw {
namespace hprblas {

// TEST IF MATRIX IS AN M-Matrix

// sum of magnitudes of the vector elements
template<typename Matrix>
bool ism(const Matrix& A) {
    bool is_m_matrix = false;
    
    // body
    
    
    // Return
    return is_m_matrix;
}
    
    
    
    
    
} // namespace hprblas
} // namespace sw
