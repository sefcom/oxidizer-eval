
  int64_t alacritty::logging::create_log_message::h5f938c1edaf2ff46(int128_t* arg1, void* arg2, int64_t arg3, int64_t arg4, int64_t arg5)

{
    int64_t var_c8 = arg3;
    int64_t var_c0 = arg4;
    int64_t var_b8 = arg5;
    int32_t r9;
    int32_t var_b0 = r9;
    int64_t rax;
    uint64_t rdx;
    rax = std::time::Instant::elapsed::h537da767ad82472a(&var_b8);
    int64_t var_180 = rax;
    int32_t var_1b4 = rdx;
    int64_t* var_a8 = *(arg2 + 0x30);
    int64_t* var_110 = &var_180;
    uint64_t (* var_108)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
    int32_t* var_100 = &var_1b4;
    uint64_t (* var_f8)(int32_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4ee7c3ea607dee75;
    int64_t* var_f0 = &var_a8;
    int64_t (* var_e8)(int64_t* arg1, int64_t* arg2) =
        _$LT$log..Level$u20$as$u20$core..fmt..Display$GT$::fmt::hf3e2f8abd8007cc2;
    int64_t* var_e0 = &var_c8;
    int64_t (* var_d8)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hde322f69d68256c4;
    void** const var_178 = &data_c830e8;
    int64_t var_170 = 5;
    void* const var_158 = &data_5036d8;
    int64_t var_150 = 4;
    int64_t** var_168 = &var_110;
    int64_t var_160 = 4;
    int128_t var_1b0;
    core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_1b0, 0, rdx, &var_178);
    uint64_t rdx_1 = *(arg2 + 0x58);
    int64_t rax_2 = *(arg2 + 0x68);
    int64_t rsi;
    
    if (rdx_1 == 1)
    {
        if (!rax_2)
        {
            int64_t* rax_6 = *(arg2 + 0x50);
            rsi = *rax_6;
            rdx_1 = rax_6[1];
        }
        else
            rsi = 0;
    }
    else if (rdx_1 || rax_2)
        rsi = 0;
    else
    {
        rsi = 1;
        rdx_1 = 0;
    }
    
    void var_128;
    core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_128, rsi, rdx_1, 
        arg2 + 0x50);
    int64_t var_120;
    int64_t var_118;
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(
        &var_100, 0xa, var_120, var_118);
    var_110 = nullptr;
    int64_t var_108_1 = var_118;
    int16_t var_d0 = 1;
    int64_t var_1a0;
    int64_t rsi_2;
    int64_t var_198;
    
    if (var_1a0 > 0xffff)
    {
        int64_t rax_7;
        int64_t rdx_6;
        rax_7 = core::str::iter::SplitInternal$LT$P$GT$::next::hbbc56282d5af3f97(&var_110);
        rsi_2 = var_1a0;
        
        if (rax_7)
        {
            var_198 = rax_7;
            int64_t var_190_2 = rdx_6;
            var_178 = &data_c827a0;
            int64_t var_170_1 = 1;
            int64_t var_168_1 = 8;
            var_160 = {0};
            core::panicking::panic_fmt::h96f341d36638c225(&var_178);
            /* no return */
        }
    }
    else
    {
        while (true)
        {
            int64_t rax_3;
            uint64_t rdx_3;
            rax_3 = core::str::iter::SplitInternal$LT$P$GT$::next::hbbc56282d5af3f97(&var_110);
            
            if (!rax_3)
                break;
            
            var_198 = rax_3;
            uint64_t var_190_1 = rdx_3;
            var_a8 = &var_198;
            int64_t (* var_a0_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hde322f69d68256c4;
            int128_t* const var_98_1 = &data_4e8b60;
            int64_t (* var_90_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hde322f69d68256c4;
            int64_t var_88_1 = 0;
            int16_t var_80_1 = var_1a0;
            void* const var_78 = &data_c82f40;
            int64_t var_70_1 = 2;
            void* const var_58_1 = &data_503798;
            int64_t var_50_1 = 2;
            int64_t** var_68_1 = &var_a8;
            int64_t var_60_1 = 3;
            int128_t var_48;
            core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_48, 0, rdx_3, 
                &var_78);
            int128_t var_148 = var_48;
            int64_t var_38;
            int64_t var_138_1 = var_38;
            int64_t rsi_1 = *var_148[8];
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h219f3b3c50208c25(&var_1b0, rsi_1, var_38 + rsi_1);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_148);
        }
        
        rsi_2 = var_1a0;
    }
    alloc::string::String::truncate::h4c9243e558c5f483(&var_1b0, rsi_2 - var_1a0);
    arg1[1] = var_1a0;
    *arg1 = var_1b0;
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_128);
}
