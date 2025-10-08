
  uint64_t uu_stty::print_control_chars::hed7af0204ba7e7a6(char* arg1, char arg2)

{
    if (!(arg2 & 1))
        return 0x86;
    
    void** var_a0;
    void* const var_78;
    
    for (int64_t i = 0; i != 0x168; )
    {
        void* var_80 = &data_4e2e00 + i;
        int64_t var_48;
        uu_stty::control_char_to_string::hcb31aba3c5c265db(&var_48, arg1[*(i + 0x4e2e10)]);
        int64_t rax_3 = var_48;
        int32_t var_40;
        
        if (-(rax_3) == -0x8000000000000000)
            return var_40;
        
        int32_t var_34;
        int32_t var_a4_1 = var_34;
        int64_t var_3c;
        int64_t var_ac_1 = var_3c;
        int64_t var_b8 = rax_3;
        var_a0 = &var_80;
        int64_t (* var_98_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h73b50bfbd05958df;
        int64_t* var_90_1 = &var_b8;
        int64_t (* var_88_1)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_78 = &data_4e2da0;
        int64_t var_70_1 = 3;
        int64_t var_58_1 = 0;
        void*** var_68_1 = &var_a0;
        int64_t var_60_1 = 2;
        std::io::stdio::_print::h5e446ff973c02de6(&var_78);
        i += 0x18;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd804c925e1c3e6cf(var_b8, var_40);
    }
    
    var_a0 = &arg1[6];
    uint64_t (* var_98_2)(char* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h150c2a008a7de3c9;
    void* var_90_2 = &arg1[5];
    uint64_t (* var_88_2)(char* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h150c2a008a7de3c9;
    var_78 = &data_4e2dd0;
    int64_t var_70_2 = 3;
    int64_t var_58_2 = 0;
    void*** var_68_2 = &var_a0;
    int64_t var_60_2 = 2;
    std::io::stdio::_print::h5e446ff973c02de6(&var_78);
    return 0x86;
}
