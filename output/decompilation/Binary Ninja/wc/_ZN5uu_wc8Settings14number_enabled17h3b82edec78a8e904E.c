
  int64_t uu_wc::Settings::number_enabled::h3b82edec78a8e904(void* arg1)

{
    char rax = *(arg1 + 0x18);
    int64_t var_18 = 0;
    int64_t var_10 = 5;
    char var_8 = rax;
    uint128_t zmm0 = _mm_shufflelo_epi16(_mm_unpacklo_epi8(*(arg1 + 0x19), 0), 0xb4);
    int32_t var_7 = _mm_packus_epi16(zmm0, zmm0);
    return _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h40797cad0af1d735(&var_18);
}
