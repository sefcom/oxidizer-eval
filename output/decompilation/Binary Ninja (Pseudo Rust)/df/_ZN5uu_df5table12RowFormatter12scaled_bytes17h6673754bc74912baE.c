
  fn uu_df::table::RowFormatter::scaled_bytes::h6673754bc74912ba(arg1: *mut i128, arg2: *mut c_void, arg3: i64) -> i64

{
    let rax_2: i8 = *arg2.byte_offset(0x54);
    
    if rax_2 != 2
    {
        /* tailcall */
        return uu_df::blocks::to_magnitude_and_suffix::hfc39cb976c1a05ed(arg1, arg3, 0, rax_2);
    }
    
    let mut zmm1: u128 = *arg2.byte_offset(0x48);
    let zmm3: i64 = data_40b900;
    let zmm2: [f64; 0x2] = _mm_unpacklo_epi32(arg3, zmm3);
    let zmm4: [f64; 0x2] = data_40b8a0;
    let temp0_1: [f64; 0x2] = _mm_sub_pd(zmm2, zmm4);
    let temp0_2: [f64; 0x2] = _mm_unpackhi_pd(temp0_1, temp0_1[0]);
    temp0_2[0] = temp0_2[0] + temp0_1[0];
    zmm1 = _mm_sub_pd(_mm_unpacklo_epi32(zmm1, zmm3), zmm4);
    let temp0_5: [f64; 0x2] = _mm_unpackhi_pd(zmm1, zmm1);
    temp0_5[0] = temp0_5[0] + zmm1;
    temp0_2[0] = temp0_2[0] / temp0_5[0];
    let mut var_10: i64 = ceil(temp0_2[0]);
    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h22804fad5dd1c657(arg1, &var_10)
}
