
  fn uu_cp::Attributes::diff::hb3b318adb7407dd4(arg1: *mut i64, arg2: *mut i64, arg3: *mut i8) -> u32

{
    let mut zmm0: u128 = _mm_insert_epi16(
        _mm_insert_epi16(_mm_insert_epi16(*arg3, arg3[2], 1), arg3[4], 2), arg3[6], 3);
    let zmm1: [u32; 0x4] = _mm_slli_epi16(
        _mm_shuffle_epi32(
            _mm_shufflehi_epi16(_mm_shufflelo_epi16(_mm_unpacklo_epi8(zmm0, zmm0), 0xe8), 0xe8), 
            0xe8), 
        7);
    let zmm2: u128 = data_4209d0;
    let temp0_8: [i8; 0x10] = _mm_cmpgt_epi8({0}, zmm1 & zmm2);
    let result: u32 = arg3[8];
    let rcx_1: u32 = arg3[0xa];
    *arg1 = ((temp0_8 & data_420a60[0x10][0]) | (temp0_8 & !*arg2))[0];
    let zmm3: [i8; 0x10] = _mm_unpacklo_epi32(result, rcx_1[0]);
    zmm0 = _mm_cmpgt_epi8({0}, 
        _mm_slli_epi16(
            _mm_shufflelo_epi16(_mm_shuffle_epi32(_mm_unpacklo_epi8(zmm3, zmm3[0]), 0xe8), 0xe8), 7)
            & zmm2);
    arg1[1] = ((zmm0 & data_420830[0x10][0]) | (zmm0 & !arg2[1]));
    result
}
