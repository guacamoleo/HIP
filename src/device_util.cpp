#include"hip_runtime.h"
#include<hc.hpp>
#include<grid_launch.h>

#include <hc_math.hpp>
// TODO: Choose whether default is precise math or fast math based on compilation flag.
#ifdef __HCC_ACCELERATOR__
using namespace hc::precise_math;
#endif

__device__ float acosf(float x)
{
    return hc::precise_math::acosf(x);
}
__device__ float acoshf(float x)
{
    return hc::precise_math::acoshf(x);
}
__device__ float asinf(float x)
{
    return hc::precise_math::asinf(x);
}
__device__ float asinhf(float x)
{
    return hc::precise_math::asinhf(x);
}
__device__ float atan2f(float y, float x)
{
    return hc::precise_math::atan2f(x, y);
}
__device__ float atanf(float x)
{
    return hc::precise_math::atanf(x);
}
__device__ float atanhf(float x)
{
    return hc::precise_math::atanhf(x);
}
__device__ float cbrtf(float x)
{
    return hc::precise_math::cbrtf(x);
}
__device__ float ceilf(float x)
{
    return hc::precise_math::ceilf(x);
}
__device__ float copysignf(float x, float y)
{
    return hc::precise_math::copysignf(x, y);
}
__device__ float cosf(float x)
{
    return hc::precise_math::cosf(x);
}
__device__ float coshf(float x)
{
    return hc::precise_math::coshf(x);
}
__device__ float cyl_bessel_i0f(float x);
__device__ float cyl_bessel_i1f(float x);
__device__ float erfcf(float x)
{
    return hc::precise_math::erfcf(x);
}
__device__ float erfcinvf(float y);
__device__ float erfcxf(float x);
__device__ float erff(float x)
{
    return hc::precise_math::erff(x);
}
__device__ float erfinvf(float y);
__device__ float exp10f(float x)
{
    return hc::precise_math::exp10f(x);
}
__device__ float exp2f(float x)
{
    return hc::precise_math::exp2f(x);
}
__device__ float expf(float x)
{
    return hc::precise_math::expf(x);
}
__device__ float expm1f(float x)
{
    return hc::precise_math::expm1f(x);
}
__device__ float fabsf(float x)
{
    return hc::precise_math::fabsf(x);
}
__device__ float fdimf(float x, float y)
{
    return hc::precise_math::fdimf(x, y);
}
__device__ float fdividef(float x, float y);
__device__ float floorf(float x)
{
    return hc::precise_math::floorf(x);
}
__device__ float fmaf(float x, float y, float z)
{
    return hc::precise_math::fmaf(x, y, z);
}
__device__ float fmaxf(float x, float y)
{
    return hc::precise_math::fmaxf(x, y);
}
__device__ float fminf(float x, float y)
{
    return hc::precise_math::fminf(x, y);
}
__device__ float fmodf(float x, float y)
{
    return hc::precise_math::fmodf(x, y);
}
__device__ float frexpf(float x, float y);
__device__ float hypotf(float x, float y)
{
    return hc::precise_math::hypotf(x, y);
}
__device__ float ilogbf(float x)
{
    return hc::precise_math::ilogbf(x);
}
__device__ unsigned isfinite(float a)
{
    return hc::precise_math::isfinite(a);
}
__device__ unsigned isinf(float a)
{
    return hc::precise_math::isinf(a);
}
__device__ unsigned isnan(float a)
{
    return hc::precise_math::isnan(a);
}
__device__ float j0f(float x);
__device__ float j1f(float x);
__device__ float jnf(int n, float x);
__device__ float ldexpf(float x, int exp)
{
    return hc::precise_math::ldexpf(x, exp);
}
__device__ float lgammaf(float x);
__device__ long long int llrintf(float x);
__device__ long long int llroundf(float x);
__device__ float log10f(float x)
{
    return hc::precise_math::log10f(x);
}
__device__ float log1pf(float x)
{
    return hc::precise_math::log1pf(x);
}
__device__ float log2f(float x)
{
    return hc::precise_math::log2f(x);
}
__device__ float logbf(float x)
{
    return hc::precise_math::logbf(x);
}
__device__ float logf(float x)
{
    return hc::precise_math::logf(x);
}
__device__ long int lrintf(float x);
__device__ long int lroundf(float x);
__device__ float modff(float x, float *iptr);
__device__ float nanf(const char* tagp)
{
    return hc::precise_math::nanf((int)*tagp);
}
__device__ float nearbyintf(float x)
{
    return hc::precise_math::nearbyintf(x);
}
__device__ float nextafterf(float x, float y);
__device__ float norm3df(float a, float b, float c);
__device__ float norm4df(float a, float b, float c, float d);
__device__ float normcdff(float y);
__device__ float normcdfinvf(float y);
__device__ float normf(int dim, const float *a);
__device__ float powf(float x, float y)
{
    return hc::precise_math::powf(x, y);
}
__device__ float rcbtrf(float x);
__device__ float remainderf(float x, float y)
{
    return hc::precise_math::remainderf(x, y);
}
__device__ float remquof(float x, float y, int *quo);
__device__ float rhypotf(float x, float y);
__device__ float rintf(float x);
__device__ float rnorm3df(float a, float b, float c);
__device__ float rnorm4df(float a, float b, float c, float d);
__device__ float rnormf(int dim, const float* a);
__device__ float roundf(float x)
{
    return hc::precise_math::roundf(x);
}
__device__ float scalblnf(float x, long int n);
__device__ float scalbnf(float x, int n)
{
    return hc::precise_math::scalbnf(x, n);
}
__device__ unsigned signbit(float a)
{
    return hc::precise_math::signbit(a);
}
__device__ void sincosf(float x, float *sptr, float *cptr);
__device__ void sincospif(float x, float *sptr, float *cptr);
__device__ float sinf(float x)
{
    return hc::precise_math::sinf(x);
}
__device__ float sinhf(float x)
{
    return hc::precise_math::sinhf(x);
}
__device__ float tanf(float x)
{
    return hc::precise_math::tanf(x);
}
__device__ float tanhf(float x)
{
    return hc::precise_math::tanhf(x);
}
__device__ float tgammaf(float x)
{
    return hc::precise_math::tgammaf(x);
}
__device__ float truncf(float x)
{
    return hc::precise_math::truncf(x);
}
__device__ float y0f(float x);
__device__ float y1f(float x);
__device__ float ynf(int n, float x);


__device__ float cospif(float x)
{
    return hc::precise_math::cospif(x);
}

__device__ float sinpif(float x)
{
    return hc::precise_math::sinpif(x);
}

__device__ float sqrtf(float x)
{
    return hc::precise_math::sqrtf(x);
}

__device__ float rsqrtf(float x)
{
    return hc::precise_math::rsqrtf(x);
}

/*
 * Double precision device math functions
 */

__device__ double acos(double x)
{
    return hc::precise_math::acos(x);
}

__device__ double acosh(double x)
{
    return hc::precise_math::acosh(x);
}
__device__ double asin(double x)
{
    return hc::precise_math::asin(x);
}
__device__ double asinh(double x)
{
    return hc::precise_math::asinh(x);
}
__device__ double atan(double x)
{
    return hc::precise_math::atan(x);
}
__device__ double atan2(double y, double x)
{
    return hc::precise_math::atan2(y, x);
}
__device__ double atanh(double x)
{
    return hc::precise_math::atanh(x);
}
__device__ double cbrt(double x)
{
    return hc::precise_math::cbrt(x);
}
__device__ double ceil(double x)
{
    return hc::precise_math::ceil(x);
}
__device__ double copysign(double x, double y)
{
    return hc::precise_math::copysign(x, y);
}
__device__ double cos(double x)
{
    return hc::precise_math::cos(x);
}
__device__ double cosh(double x)
{
    return hc::precise_math::cosh(x);
}
__device__ double cospi(double x)
{
    return hc::precise_math::cospi(x);
}
__device__ double erf(double x)
{
    return hc::precise_math::erf(x);
}
__device__ double erfc(double x)
{
    return hc::precise_math::erfc(x);
}
__device__ double exp(double x)
{
    return hc::precise_math::exp(x);
}
__device__ double exp10(double x)
{
    return hc::precise_math::exp10(x);
}
__device__ double exp2(double x)
{
    return hc::precise_math::exp2(x);
}
__device__ double expm1(double x)
{
    return hc::precise_math::expm1(x);
}
__device__ double fabs(double x)
{
    return hc::precise_math::fabs(x);
}
__device__ double fdim(double x, double y)
{
    return hc::precise_math::fdim(x, y);
}
__device__ double floor(double x)
{
    return hc::precise_math::floor(x);
}
__device__ double fma(double x, double y, double z)
{
    return hc::precise_math::fma(x, y, z);
}
__device__ double fmax(double x, double y)
{
    return hc::precise_math::fmax(x, y);
}
__device__ double fmin(double x, double y)
{
    return hc::precise_math::fmin(x, y);
}
__device__ double fmod(double x, double y)
{
    return hc::precise_math::fmod(x, y);
}
__device__ double hypot(double x, double y)
{
    return hc::precise_math::hypot(x, y);
}
__device__ double ilogb(double x)
{
    return hc::precise_math::ilogb(x);
}
__device__ unsigned isfinite(double x)
{
    return hc::precise_math::isfinite(x);
}
__device__ unsigned isinf(double x)
{
    return hc::precise_math::isinf(x);
}
__device__ unsigned isnan(double x)
{
    return hc::precise_math::isnan(x);
}
__device__ double ldexp(double x, int exp)
{
    return hc::precise_math::ldexp(x, exp);
}
__device__ double log(double x)
{
    return hc::precise_math::log(x);
}
__device__ double log10(double x)
{
    return hc::precise_math::log10(x);
}
__device__ double log1p(double x)
{
    return hc::precise_math::log1p(x);
}
__device__ double log2(double x)
{
    return hc::precise_math::log2(x);
}
__device__ double logb(double x)
{
    return hc::precise_math::logb(x);
}
__device__ double nan(const char *tagp)
{
    return hc::precise_math::nan((int)*tagp);
}
__device__ double nearbyint(double x)
{
    return hc::precise_math::nearbyint(x);
}
__device__ double pow(double x, double y)
{
    return hc::precise_math::pow(x, y);
}
__device__ double remainder(double x, double y)
{
    return hc::precise_math::remainder(x, y);
}
__device__ double round(double x)
{
    return hc::precise_math::round(x);
}
__device__ double rsqrt(double x)
{
    return hc::precise_math::rsqrt(x);
}
__device__ double scalbn(double x, int n)
{
    return hc::precise_math::scalbn(x, n);
}
__device__ unsigned signbit(double x)
{
    return hc::precise_math::signbit(x);
}
__device__ double sin(double x)
{
    return hc::precise_math::sin(x);
}
__device__ double sinh(double x)
{
    return hc::precise_math::sinh(x);
}
__device__ double sinpi(double x)
{
    return hc::precise_math::sinpi(x);
}
__device__ double sqrt(double x)
{
    return hc::precise_math::sqrt(x);
}
__device__ double tan(double x)
{
    return hc::precise_math::tan(x);
}
__device__ double tanh(double x)
{
    return hc::precise_math::tanh(x);
}
__device__ double tgamma(double x)
{
    return hc::precise_math::tgamma(x);
}
__device__ double trunc(double x)
{
    return hc::precise_math::trunc(x);
}


const int warpSize = 64;

__device__ long long int clock64() { return (long long int)hc::__clock_u64(); };
__device__ clock_t clock() { return (clock_t)hc::__clock_u64(); };


//atomicAdd()
__device__  int atomicAdd(int* address, int val)
{
	return hc::atomic_fetch_add(address,val);
}
__device__  unsigned int atomicAdd(unsigned int* address,
                       unsigned int val)
{
   return hc::atomic_fetch_add(address,val);
}
__device__  unsigned long long int atomicAdd(unsigned long long int* address,
                                 unsigned long long int val)
{
 return (long long int)hc::atomic_fetch_add((uint64_t*)address,(uint64_t)val);
}
__device__  float atomicAdd(float* address, float val)
{
	return hc::atomic_fetch_add(address,val);
}

//atomicSub()
__device__  int atomicSub(int* address, int val)
{
	return hc::atomic_fetch_sub(address,val);
}
__device__  unsigned int atomicSub(unsigned int* address,
                       unsigned int val)
{
   return hc::atomic_fetch_sub(address,val);
}

//atomicExch()
__device__  int atomicExch(int* address, int val)
{
	return hc::atomic_exchange(address,val);
}
__device__  unsigned int atomicExch(unsigned int* address,
                        unsigned int val)
{
	return hc::atomic_exchange(address,val);
}
__device__  unsigned long long int atomicExch(unsigned long long int* address,
                                  unsigned long long int val)
{
	return (long long int)hc::atomic_exchange((uint64_t*)address,(uint64_t)val);
}
__device__  float atomicExch(float* address, float val)
{
	return hc::atomic_exchange(address,val);
}

//atomicMin()
__device__  int atomicMin(int* address, int val)
{
	return hc::atomic_fetch_min(address,val);
}
__device__  unsigned int atomicMin(unsigned int* address,
                       unsigned int val)
{
	return hc::atomic_fetch_min(address,val);
}
__device__  unsigned long long int atomicMin(unsigned long long int* address,
                                 unsigned long long int val)
{
	return (long long int)hc::atomic_fetch_min((uint64_t*)address,(uint64_t)val);
}

//atomicMax()
__device__  int atomicMax(int* address, int val)
{
	return hc::atomic_fetch_max(address,val);
}
__device__  unsigned int atomicMax(unsigned int* address,
                       unsigned int val)
{
	return hc::atomic_fetch_max(address,val);
}
__device__  unsigned long long int atomicMax(unsigned long long int* address,
                                 unsigned long long int val)
{
	return (long long int)hc::atomic_fetch_max((uint64_t*)address,(uint64_t)val);
}

//atomicCAS()
__device__  int atomicCAS(int* address, int compare, int val)
{
	hc::atomic_compare_exchange(address,&compare,val);
	return *address;
}
__device__  unsigned int atomicCAS(unsigned int* address,
                       unsigned int compare,
                       unsigned int val)
{
	hc::atomic_compare_exchange(address,&compare,val);
	return *address;
}
__device__  unsigned long long int atomicCAS(unsigned long long int* address,
                                 unsigned long long int compare,
                                 unsigned long long int val)
{
	hc::atomic_compare_exchange((uint64_t*)address,(uint64_t*)&compare,(uint64_t)val);
	return *address;
}

//atomicAnd()
__device__  int atomicAnd(int* address, int val)
{
	return hc::atomic_fetch_and(address,val);
}
__device__  unsigned int atomicAnd(unsigned int* address,
                       unsigned int val)
{
	return hc::atomic_fetch_and(address,val);
}
__device__  unsigned long long int atomicAnd(unsigned long long int* address,
                                 unsigned long long int val)
{
	return (long long int)hc::atomic_fetch_and((uint64_t*)address,(uint64_t)val);
}

//atomicOr()
__device__  int atomicOr(int* address, int val)
{
	return hc::atomic_fetch_or(address,val);
}
__device__  unsigned int atomicOr(unsigned int* address,
                      unsigned int val)
{
	return hc::atomic_fetch_or(address,val);
}
__device__  unsigned long long int atomicOr(unsigned long long int* address,
                                unsigned long long int val)
{
	return (long long int)hc::atomic_fetch_or((uint64_t*)address,(uint64_t)val);
}

//atomicXor()
__device__  int atomicXor(int* address, int val)
{
	return hc::atomic_fetch_xor(address,val);
}
__device__  unsigned int atomicXor(unsigned int* address,
                       unsigned int val)
{
	return hc::atomic_fetch_xor(address,val);
}
__device__  unsigned long long int atomicXor(unsigned long long int* address,
                                 unsigned long long int val)
{
	return (long long int)hc::atomic_fetch_xor((uint64_t*)address,(uint64_t)val);
}




__device__ unsigned int test__popc(unsigned int input)
{
    return hc::__popcount_u32_b32(input);
}

// integer intrinsic function __poc __clz __ffs __brev
__device__ unsigned int __popc( unsigned int input)
{
    return hc::__popcount_u32_b32(input);
}

__device__ unsigned int test__popc(unsigned int input);

__device__ unsigned int __popcll( unsigned long long int input)
{
	return hc::__popcount_u32_b64(input);
}

__device__ unsigned int __clz(unsigned int input)
{
	return hc::__firstbit_u32_u32( input);
}

__device__ unsigned int __clzll(unsigned long long int input)
{
	return hc::__firstbit_u32_u64( input);
}

__device__ unsigned int __clz(int input)
{
	return hc::__firstbit_u32_s32(  input);
}

__device__ unsigned int __clzll(long long int input)
{
	return hc::__firstbit_u32_s64( input);
}

__device__ unsigned int __ffs(unsigned int input)
{
	return hc::__lastbit_u32_u32( input)+1;
}

__device__ unsigned int __ffsll(unsigned long long int input)
{
	return hc::__lastbit_u32_u64( input)+1;
}

__device__ unsigned int __ffs(int input)
{
	return hc::__lastbit_u32_s32( input)+1;
}

__device__ unsigned int __ffsll(long long int input)
{
	return hc::__lastbit_u32_s64( input)+1;
}

__device__ unsigned int __brev( unsigned int input)
{
	return hc::__bitrev_b32( input);
}

__device__ unsigned long long int __brevll( unsigned long long int input)
{
	return hc::__bitrev_b64( input);
}

// warp vote function __all __any __ballot
__device__ int __all(  int input)
{
	return hc::__all( input);
}


__device__ int __any( int input)
{
	if( hc::__any( input)!=0) return 1;
	else return 0;
}

__device__ unsigned long long int __ballot( int input)
{
	return hc::__ballot( input);
}

// warp shuffle functions
__device__ int __shfl(int input, int lane, int width)
{
  return hc::__shfl(input,lane,width);
}

__device__  int __shfl_up(int input, unsigned int lane_delta, int width)
{
  return hc::__shfl_up(input,lane_delta,width);
}

__device__  int __shfl_down(int input, unsigned int lane_delta, int width)
{
  return hc::__shfl_down(input,lane_delta,width);
}

__device__  int __shfl_xor(int input, int lane_mask, int width)
{
  return hc::__shfl_xor(input,lane_mask,width);
}

__device__  float __shfl(float input, int lane, int width)
{
  return hc::__shfl(input,lane,width);
}

__device__  float __shfl_up(float input, unsigned int lane_delta, int width)
{
  return hc::__shfl_up(input,lane_delta,width);
}

__device__  float __shfl_down(float input, unsigned int lane_delta, int width)
{
  return hc::__shfl_down(input,lane_delta,width);
}

__device__  float __shfl_xor(float input, int lane_mask, int width)
{
  return hc::__shfl_xor(input,lane_mask,width);
}

__host__ __device__ int min(int arg1, int arg2) 
{ 
  return (int)(hc::precise_math::fmin((float)arg1, (float)arg2));
}
__host__ __device__ int max(int arg1, int arg2) 
{
  return (int)(hc::precise_math::fmax((float)arg1, (float)arg2));
}



//TODO - add a couple fast math operations here, the set here will grow :
__device__  float __cosf(float x) {return hc::fast_math::cosf(x); };
__device__  float __expf(float x) {return hc::fast_math::expf(x); };
__device__  float __frsqrt_rn(float x) {return hc::fast_math::rsqrt(x); };
__device__  float __fsqrt_rd(float x) {return hc::fast_math::sqrt(x); };
__device__  float __fsqrt_rn(float x) {return hc::fast_math::sqrt(x); };
__device__  float __fsqrt_ru(float x) {return hc::fast_math::sqrt(x); };
__device__  float __fsqrt_rz(float x) {return hc::fast_math::sqrt(x); };
__device__  float __log10f(float x) {return hc::fast_math::log10f(x); };
__device__  float __log2f(float x) {return hc::fast_math::log2f(x); };
__device__  float __logf(float x) {return hc::fast_math::logf(x); };
__device__  float __powf(float base, float exponent) {return hc::fast_math::powf(base, exponent); };
__device__  void __sincosf(float x, float *s, float *c) {return hc::fast_math::sincosf(x, s, c); };
__device__  float __sinf(float x) {return hc::fast_math::sinf(x); };
__device__  float __tanf(float x) {return hc::fast_math::tanf(x); };
__device__  float __dsqrt_rd(double x) {return hc::fast_math::sqrt(x); };
__device__  float __dsqrt_rn(double x) {return hc::fast_math::sqrt(x); };
__device__  float __dsqrt_ru(double x) {return hc::fast_math::sqrt(x); };
__device__  float __dsqrt_rz(double x) {return hc::fast_math::sqrt(x); };


