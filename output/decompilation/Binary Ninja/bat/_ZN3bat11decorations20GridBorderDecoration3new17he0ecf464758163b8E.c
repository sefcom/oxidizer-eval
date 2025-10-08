
  int64_t bat::decorations::GridBorderDecoration::new::he0ecf464758163b8(int128_t* arg1, int128_t* arg2)

{
    char var_10 = arg2[1];
    int128_t var_20 = *arg2;
    int64_t var_50 = -0x8000000000000000;
    void* const var_48 = &data_5a2896;
    int64_t var_40 = 3;
    int64_t var_38 = -0x7ffffffffffffffe;
    int128_t var_68;
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hf5336000855022da(&var_68, 
        &var_50);
    int64_t var_58;
    arg1[1] = var_58;
    *arg1 = var_68;
    *(arg1 + 0x18) = 1;
    return core::ptr::drop_in_place$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$GT$::hde6d3ec6e19234d6(&var_50);
}
