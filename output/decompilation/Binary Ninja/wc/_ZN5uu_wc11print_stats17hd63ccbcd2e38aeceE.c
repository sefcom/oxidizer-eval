
  int64_t uu_wc::print_stats::hd63ccbcd2e38aece(void* arg1, int64_t* arg2, void* arg3)

{
    std::io::stdio::stdout::h077da66234850927();
    int64_t* var_120 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
    int64_t* var_190 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&var_120);
    int64_t rcx_1 = arg2[2];
    char rdx = *(arg1 + 0x1b);
    int64_t rsi = arg2[3];
    char rdi_1 = *(arg1 + 0x18);
    char r8_1 = *(arg1 + 0x19);
    int64_t r9 = *arg2;
    int64_t r10 = arg2[1];
    char r11 = *(arg1 + 0x1c);
    int64_t rbx_1 = arg2[4];
    char var_80 = *(arg1 + 0x1a);
    int64_t var_78 = rcx_1;
    char var_70 = rdx;
    int64_t var_68 = rsi;
    char var_60 = r8_1;
    int64_t var_58 = r10;
    char var_50 = rdi_1;
    int64_t var_48 = r9;
    char var_40 = r11;
    int64_t var_38 = rbx_1;
    char const* const var_188 = 1;
    int64_t var_180 = 0;
    char* var_168 = &var_80;
    int64_t __saved_rbx;
    int64_t* var_160 = &__saved_rbx;
    int64_t* var_150;
    int128_t var_108;
    void* const var_b0;
    int64_t result;
    
    for (char* i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::ha2c1cf205952523e(&var_168); i; i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::ha2c1cf205952523e(&var_168))
    {
        void* var_158 = &i[8];
        var_150 = &var_188;
        int64_t (* var_148_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf11328e4cb3e1baf;
        void** var_140_1 = &var_158;
        int64_t (* var_138_1)(int64_t* arg1, int64_t* arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h401438c70327895c;
        int64_t r8;
        int64_t var_130_1 = r8;
        int64_t var_128_1 = 0;
        var_120 = 2;
        int64_t var_110_1 = 2;
        *var_108[8] = 0;
        int64_t var_f8_1 = 0x20;
        char var_f0_1 = 3;
        int64_t var_e8_1 = 2;
        int64_t var_d8;
        __builtin_memcpy(&var_d8, 
            "\x01\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x03", 0x21);
        var_b0 = &data_419ac8;
        int64_t var_a8_1 = 2;
        int64_t** var_90_1 = &var_120;
        int64_t var_88_1 = 2;
        int64_t** var_a0_1 = &var_150;
        int64_t var_98_1 = 3;
        int64_t result_1 = std::io::Write::write_fmt::h12d662560afab62b(&var_190, &var_b0);
        result = result_1;
        
        if (result_1)
            goto label_4bdfee;
        
        var_188 = " FilesDisabledextraStdinReprNotA…";
        int64_t var_180_1 = 1;
    }
    
    int64_t result_2;
    
    if (!arg3)
    {
        var_120 = &data_5311f8;
        int64_t var_118_2 = 1;
        int64_t var_110_3 = 8;
        int128_t var_108_1 = {0};
        result_2 = std::io::Write::write_fmt::h12d662560afab62b(&var_190, &var_120);
    }
    else
    {
        var_b0 = arg3;
        int64_t rcx;
        int64_t var_a8_2 = rcx;
        var_150 = &var_188;
        int64_t (* var_148_2)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf11328e4cb3e1baf;
        void* const* var_140_2 = &var_b0;
        int64_t (* var_138_2)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf11328e4cb3e1baf;
        var_120 = &data_531208;
        int64_t var_118_1 = 3;
        *var_108[8] = 0;
        int64_t** var_110_2 = &var_150;
        var_108 = 2;
        result_2 = std::io::Write::write_fmt::h12d662560afab62b(&var_190, &var_120);
    }
    
    result = result_2;
    label_4bdfee:
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::hf5250da0ddf6b680(var_190);
    return result;
}
