
  int64_t bat::decorations::LineNumberDecoration::new::h91e05e55b8444121(int128_t* arg1, void* arg2)

{
    void var_60;
    alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::h069f359f14668369(&var_60, 
        " \s +Failed to load one or more …", 1, 4);
    char var_20 = *(arg2 + 0x76);
    int128_t var_30 = *(arg2 + 0x66);
    int64_t var_48 = -0x7ffffffffffffffe;
    int128_t var_78;
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hf5336000855022da(&var_78, 
        &var_60);
    int64_t var_68;
    arg1[1] = var_68;
    *arg1 = var_78;
    *(arg1 + 0x38) = *(arg2 + 0x76);
    *(arg1 + 0x28) = *(arg2 + 0x66);
    *(arg1 + 0x18) = 4;
    arg1[2] = 0x2710;
    return core::ptr::drop_in_place$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$GT$::hde6d3ec6e19234d6(&var_60);
}
