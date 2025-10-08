
  fn uu_wc::Settings::number_enabled::h3b82edec78a8e904(arg1: *mut c_void) -> i64

{
    let rax: i8 = *arg1.byte_offset(0x18);
    let mut var_18: i64 = 0;
    let var_10: i64 = 5;
    let var_8: i8 = rax;
    let zmm0: u128 = _mm_shufflelo_epi16(_mm_unpacklo_epi8(*arg1.byte_offset(0x19), 0), 0xb4);
    let var_7: i32 = _mm_packus_epi16(zmm0, zmm0);
    _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h40797cad0af1d735(&var_18)
}
