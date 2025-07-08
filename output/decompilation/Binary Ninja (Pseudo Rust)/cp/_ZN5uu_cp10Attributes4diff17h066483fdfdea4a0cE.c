
  fn uu_cp::Attributes::diff::h066483fdfdea4a0c(arg1: *mut i64, arg2: *mut i64, arg3: *mut i8) -> u32

{
    let result: u32 = arg3[8];
    let mut zmm1: u128 = arg3[6] << 0x18 | arg3[4] << 0x10 | arg3[2] << 8 | *arg3;
    zmm1 = _mm_unpacklo_epi8(zmm1, zmm1);
    zmm1 = _mm_slli_epi16(
        _mm_shuffle_epi32(
            _mm_shufflehi_epi16(
                _mm_shufflelo_epi16(_mm_cmpeq_epi8(_mm_unpacklo_epi8(zmm1, zmm1), {0}), 0xe8), 
                0xe8), 
            0xe8), 
        7);
    let zmm2: i128 = data_41e930;
    let temp0_7: [i8; 0x10] = _mm_cmpgt_epi8({0}, zmm1 & zmm2);
    let rcx_3: u32 = arg3[0xa];
    *arg1 = ((temp0_7 & !data_41e990) | (*arg2 & temp0_7))[0];
    zmm1 = rcx_3 << 8 | result;
    zmm1 = _mm_shufflelo_epi16(_mm_cmpeq_epi8(_mm_unpacklo_epi8(zmm1, zmm1), {0}), 0x54);
    let temp0_14: [i8; 0x10] = _mm_cmpgt_epi8({0}, 
        _mm_slli_epi16(_mm_shufflelo_epi16(_mm_unpacklo_epi8(zmm1, zmm1), 0xe8), 7) & zmm2);
    arg1[1] = ((temp0_14 & !data_41e730) | (arg2[1] & temp0_14))[0];
    result
}
