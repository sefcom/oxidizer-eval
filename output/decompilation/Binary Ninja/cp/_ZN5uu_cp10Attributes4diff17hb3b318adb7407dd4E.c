
  uint32_t uu_cp::Attributes::diff::hb3b318adb7407dd4(int64_t* arg1, int64_t* arg2, char* arg3)

{
    uint128_t zmm0 = _mm_insert_epi16(
        _mm_insert_epi16(_mm_insert_epi16(*arg3, arg3[2], 1), arg3[4], 2), arg3[6], 3);
    uint32_t zmm1[0x4] = _mm_slli_epi16(
        _mm_shuffle_epi32(
            _mm_shufflehi_epi16(_mm_shufflelo_epi16(_mm_unpacklo_epi8(zmm0, zmm0), 0xe8), 0xe8), 
            0xe8), 
        7);
    uint128_t zmm2 = data_4209d0;
    char temp0_8[0x10] = _mm_cmpgt_epi8({0}, zmm1 & zmm2);
    uint32_t result = arg3[8];
    uint32_t rcx_1 = arg3[0xa];
    *arg1 = ((temp0_8 & data_420a60[0x10][0]) | (temp0_8 & ~*arg2))[0];
    char zmm3[0x10] = _mm_unpacklo_epi32(result, rcx_1[0]);
    zmm0 = _mm_cmpgt_epi8({0}, 
        _mm_slli_epi16(
            _mm_shufflelo_epi16(_mm_shuffle_epi32(_mm_unpacklo_epi8(zmm3, zmm3[0]), 0xe8), 0xe8), 7)
            & zmm2);
    arg1[1] = ((zmm0 & data_420830[0x10][0]) | (zmm0 & ~arg2[1]));
    return result;
}
