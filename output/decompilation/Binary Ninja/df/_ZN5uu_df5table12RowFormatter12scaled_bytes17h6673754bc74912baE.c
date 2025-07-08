
  int64_t uu_df::table::RowFormatter::scaled_bytes::h6673754bc74912ba(int128_t* arg1, void* arg2, int64_t arg3)

{
    char rax_2 = *(arg2 + 0x54);
    
    if (rax_2 != 2)
        /* tailcall */
        return uu_df::blocks::to_magnitude_and_suffix::hfc39cb976c1a05ed(arg1, arg3, 0, rax_2);
    
    uint128_t zmm1 = *(arg2 + 0x48);
    int64_t zmm3 = data_40b900;
    double zmm2[0x2] = _mm_unpacklo_epi32(arg3, zmm3);
    double zmm4[0x2] = data_40b8a0;
    double temp0_1[0x2] = _mm_sub_pd(zmm2, zmm4);
    double temp0_2[0x2] = _mm_unpackhi_pd(temp0_1, temp0_1[0]);
    temp0_2[0] = temp0_2[0] + temp0_1[0];
    zmm1 = _mm_sub_pd(_mm_unpacklo_epi32(zmm1, zmm3), zmm4);
    double temp0_5[0x2] = _mm_unpackhi_pd(zmm1, zmm1);
    temp0_5[0] = temp0_5[0] + zmm1;
    temp0_2[0] = temp0_2[0] / temp0_5[0];
    int64_t var_10 = ceil(temp0_2[0]);
    return _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h22804fad5dd1c657(arg1, 
        &var_10);
}
