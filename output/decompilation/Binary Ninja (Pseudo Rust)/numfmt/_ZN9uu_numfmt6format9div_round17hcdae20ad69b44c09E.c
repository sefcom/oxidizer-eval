
  fn uu_numfmt::format::div_round::hcdae20ad69b44c09(arg1: i8, arg2: [u64; 0x2] @ zmm0, arg3: [u64; 0x2] @ zmm1) -> i64

{
    let result_1: i64;
    let mut result: i64 = result_1;
    *result[7] = arg1;
    arg2[0] = arg2[0] / arg3[0];
    let temp0: [u64; 0x2] = _mm_and_pd(data_415de0, arg2);
    let zmm2: i64 = 0x4024000000000000;
    
    if zmm2 <= temp0[0]
    {
        uu_numfmt::options::RoundMethod::round::hb878c776bde79bde(&*result[7], arg2[0], temp0);
        return result;
    }
    
    arg2[0] = arg2[0] * zmm2;
    uu_numfmt::options::RoundMethod::round::hb878c776bde79bde(&*result[7], arg2[0], temp0);
    result
}
