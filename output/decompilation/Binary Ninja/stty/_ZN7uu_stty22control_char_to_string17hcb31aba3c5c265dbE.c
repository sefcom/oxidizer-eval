
  int128_t* uu_stty::control_char_to_string::hcb31aba3c5c265db(int128_t* arg1, uint8_t arg2)

{
    if (!arg2)
        /* tailcall */
        return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hed2105606e4cf42e(arg1, "<undef>", 7);
    
    uint8_t rax = arg2 & 0x7f;
    void* const rdx = "M-^ = min = ; time = ;\neraseeof…";
    int64_t rcx = 1;
    
    if (arg2 >= 0)
        rdx = 1;
    
    void* const var_80 = rdx;
    uint64_t var_78 = arg2 >> 6 & 2;
    int32_t rdx_1;
    
    if (rax < 0x20)
    {
        rax |= 0x40;
        rdx_1 = 0x41b212;  /* "^ = min = ; time = ;\neraseeofeo…" */
    }
    else if (rax != 0x7f)
    {
        rdx_1 = 1;
        rcx = 0;
    }
    else
    {
        rdx_1 = 0x41b212;  /* "^ = min = ; time = ;\neraseeofeo…" */
        rax = 0x3f;
    }
    
    int64_t var_70 = rdx_1;
    int64_t var_68 = rcx;
    uint32_t var_84 = rax;
    void* const* var_60 = &var_80;
    int64_t (* var_58)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb65652a1c6501a73;
    int64_t* var_50 = &var_70;
    int64_t (* var_48)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb65652a1c6501a73;
    uint32_t* var_40 = &var_84;
    int64_t (* var_38)(int32_t* arg1, int64_t* arg2) =
        _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
    void* const var_30 = &data_41b1e0;
    int64_t var_28 = 3;
    int64_t var_10 = 0;
    void* const** var_20 = &var_60;
    int64_t var_18 = 3;
    return core::option::Option$LT$T$GT$::map_or_else::h151e00dca817615d(arg1, &var_30);
}
