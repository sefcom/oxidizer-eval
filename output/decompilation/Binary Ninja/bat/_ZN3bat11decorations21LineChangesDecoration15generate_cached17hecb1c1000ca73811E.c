
  int64_t bat::decorations::LineChangesDecoration::generate_cached::hecb1c1000ca73811(int128_t* arg1, int128_t* arg2, char* arg3, void* arg4)

{
    char var_20 = arg2[1];
    int128_t var_30 = *arg2;
    int64_t var_60 = -0x8000000000000000;
    char* var_58 = arg3;
    void* var_50 = arg4;
    int64_t var_48 = -0x7ffffffffffffffe;
    int128_t var_78;
    *(arg1 + 0x18) = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::h41a8767c0185b7ec(arg3, arg4 + arg3, 
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hf5336000855022da(
            &var_78, &var_60));
    *arg1 = var_78;
    int64_t var_68;
    arg1[1] = var_68;
    return core::ptr::drop_in_place$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$GT$::hde6d3ec6e19234d6(&var_60);
}
