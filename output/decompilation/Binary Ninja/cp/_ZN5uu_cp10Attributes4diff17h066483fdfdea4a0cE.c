
  uint32_t uu_cp::Attributes::diff::h066483fdfdea4a0c(int64_t* arg1, int64_t* arg2, char* arg3)

{
    uint32_t result = arg3[8];
    uint128_t zmm1 = arg3[6] << 0x18 | arg3[4] << 0x10 | arg3[2] << 8 | *arg3;
    zmm1 = _mm_unpacklo_epi8(zmm1, zmm1);
    zmm1 = _mm_slli_epi16(
        _mm_shuffle_epi32(
            _mm_shufflehi_epi16(
                _mm_shufflelo_epi16(_mm_cmpeq_epi8(_mm_unpacklo_epi8(zmm1, zmm1), {0}), 0xe8), 
                0xe8), 
            0xe8), 
        7);
    int128_t zmm2 = data_41e930;
    char temp0_7[0x10] = _mm_cmpgt_epi8({0}, zmm1 & zmm2);
    uint32_t rcx_3 = arg3[0xa];
    *arg1 = ((temp0_7 & ~data_41e990) | (*arg2 & temp0_7))[0];
    zmm1 = rcx_3 << 8 | result;
    zmm1 = _mm_shufflelo_epi16(_mm_cmpeq_epi8(_mm_unpacklo_epi8(zmm1, zmm1), {0}), 0x54);
    char temp0_14[0x10] = _mm_cmpgt_epi8({0}, 
        _mm_slli_epi16(_mm_shufflelo_epi16(_mm_unpacklo_epi8(zmm1, zmm1), 0xe8), 7) & zmm2);
    arg1[1] = ((temp0_14 & ~data_41e730) | (arg2[1] & temp0_14))[0];
    return result;
}
