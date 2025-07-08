
  int64_t uu_numfmt::format::div_round::hcdae20ad69b44c09(char arg1, uint64_t arg2[0x2] @ zmm0, uint64_t arg3[0x2] @ zmm1)

{
    int64_t result_1;
    int64_t result = result_1;
    *result[7] = arg1;
    arg2[0] = arg2[0] / arg3[0];
    uint64_t temp0[0x2] = _mm_and_pd(data_415de0, arg2);
    int64_t zmm2 = 0x4024000000000000;
    
    if (zmm2 <= temp0[0])
    {
        uu_numfmt::options::RoundMethod::round::hb878c776bde79bde(&*result[7], arg2[0], temp0);
        return result;
    }
    
    arg2[0] = arg2[0] * zmm2;
    uu_numfmt::options::RoundMethod::round::hb878c776bde79bde(&*result[7], arg2[0], temp0);
    return result;
}
