
  int64_t bat::error::default_error_handler::h2bda66878880b633(char* arg1, int64_t arg2, int64_t arg3)

{
    char* var_b0 = arg1;
    uint32_t rax = *arg1;
    void* var_b8;
    int64_t* var_a8;
    int64_t var_88;
    void* const var_38;
    
    if (!rax)
    {
        if (std::io::error::Error::kind::h135fe00c4e7365f3(*(arg1 + 8)) == 0xb)
        {
            std::process::exit::hcda678ff272dfed1(0);
            /* no return */
        }
    }
    else if (rax == 6)
    {
        char var_50 = 0;
        int64_t var_58 = 0;
        int64_t var_4f = 0x1500000002;
        var_88 = -0x8000000000000000;
        char const* const var_80 = "[bat error]: Error while parsing…";
        int64_t var_78 = 0xb;
        int64_t var_70 = -0x7ffffffffffffffe;
        var_a8 = &var_88;
        uint64_t (* var_a0)(int64_t* arg1, int64_t arg2) = _$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hc730c7572ee14c54;
        char** var_98 = &var_b0;
        int64_t (* var_90)(int64_t* arg1, int64_t* arg2, int64_t arg3) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5e3b3851b5941a74;
        var_38 = &data_ace428;
        int64_t var_30 = 3;
        int64_t var_18 = 0;
        int64_t** var_28 = &var_a8;
        int64_t var_20 = 2;
        void* rax_1 = (*(arg3 + 0x48))(arg2, &var_38);
        var_b8 = rax_1;
        
        if (rax_1)
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..io..error..Error$GT$$GT$::hd82f0dd660d43339(&var_b8);
        
        return core::ptr::drop_in_place$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$GT$::hde6d3ec6e19234d6(&var_88);
    }
    
    var_b8 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
    int64_t* var_c0 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_b8);
    char var_50_1 = 0;
    int64_t var_58_1 = 0;
    int64_t var_4f_1 = 0x1500000002;
    var_88 = -0x8000000000000000;
    char const* const var_80_1 = "[bat error]: Error while parsing…";
    int64_t var_78_1 = 0xb;
    int64_t var_70_1 = -0x7ffffffffffffffe;
    var_a8 = &var_88;
    uint64_t (* var_a0_1)(int64_t* arg1, int64_t arg2) = _$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hc730c7572ee14c54;
    char** var_98_1 = &var_b0;
    int64_t (* var_90_1)(int64_t* arg1, int64_t* arg2, int64_t arg3) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5e3b3851b5941a74;
    var_38 = &data_ace198;
    int64_t var_30_1 = 3;
    int64_t var_18_1 = 0;
    int64_t** var_28_1 = &var_a8;
    int64_t var_20_1 = 2;
    int64_t rax_5 = std::io::Write::write_fmt::hd735acb8b0f88d2c(&var_c0, &var_38);
    int64_t var_40 = rax_5;
    
    if (rax_5)
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..io..error..Error$GT$$GT$::hd82f0dd660d43339(&var_40);
    
    core::ptr::drop_in_place$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$GT$::hde6d3ec6e19234d6(&var_88);
    return core::ptr::drop_in_place$LT$std..io..stdio..StderrLock$GT$::hc6778b24ef661503(&var_c0);
}
