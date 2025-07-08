
  uint64_t uu_wc::Settings::number_enabled::he133dd856851d2dc(void* arg1)

{
    char var_8 = *(arg1 + 0x18);
    uint128_t zmm0 = _mm_shufflelo_epi16(_mm_unpacklo_epi8(*(arg1 + 0x19), 0), 0xb4);
    int32_t var_7 = _mm_packus_epi16(zmm0, zmm0);
    int64_t var_18 = 0;
    int64_t var_10 = 5;
    return _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hadc7269f3b59da04(&var_18);
}
