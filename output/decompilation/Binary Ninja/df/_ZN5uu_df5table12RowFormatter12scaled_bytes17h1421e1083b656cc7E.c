
  int64_t uu_df::table::RowFormatter::scaled_bytes::h1421e1083b656cc7(int128_t* arg1, void* arg2, int64_t arg3)

{
    char rax_2 = *(arg2 + 0x54);
    
    if (rax_2 != 2)
        /* tailcall */
        return uu_df::blocks::to_magnitude_and_suffix::hab68afb684dfcc4e(arg1, arg3, 0, rax_2);
    
    uint128_t zmm1 = *(arg2 + 0x48);
    int64_t zmm3 = 0x4530000043300000;
    double zmm2[0x2] = _mm_unpacklo_epi32(arg3, zmm3);
    double zmm4[0x2] = data_4190e0;
    double temp0_1[0x2] = _mm_sub_pd(zmm2, zmm4);
    double temp0_2[0x2] = _mm_unpackhi_pd(temp0_1, temp0_1[0]);
    temp0_2[0] = temp0_2[0] + temp0_1[0];
    zmm1 = _mm_sub_pd(_mm_unpacklo_epi32(zmm1, zmm3), zmm4);
    double temp0_5[0x2] = _mm_unpackhi_pd(zmm1, zmm1);
    temp0_5[0] = temp0_5[0] + zmm1;
    temp0_2[0] = temp0_2[0] / temp0_5[0];
    int64_t var_10 = ceil(temp0_2[0]);
    return _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h089b99e5dbd02ab0(
        arg1, &var_10);
}
