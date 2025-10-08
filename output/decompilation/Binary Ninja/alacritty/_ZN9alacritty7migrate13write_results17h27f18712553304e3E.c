
  void* alacritty::migrate::write_results::h27f18712553304e3(void** arg1, char arg2, char arg3, void* arg4, int64_t arg5)

{
    int64_t var_50 = arg5;
    int64_t r9;
    int64_t var_48 = r9;
    void* result;
    int64_t rdx;
    result =
        _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::hd53aef2935859e43(arg4);
    void* result_3 = result;
    int64_t var_38 = rdx;
    int32_t var_118;
    int64_t* var_e0;
    char var_d0;
    
    if (!(arg2 & 1))
    {
        char* rax;
        int64_t rdx_1;
        rax = std::path::Path::parent::hef287f60afa56900(result, rdx);
        
        if (!rax)
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        int64_t var_f0_2 = 6;
        char const* const var_110_2 = ".tmptimein `tip:\x1b[3mj";
        int64_t var_108_2 = 4;
        int64_t var_100_2 = 1;
        int64_t var_f8_2 = 0;
        int16_t var_e8_1 = 0;
        var_118 = 0;
        uint64_t rdx_3 = tempfile::Builder::tempfile_in::h203e62019191885c(&var_e0, &var_118, rax);
        int128_t var_98;
        void* result_1;
        
        if (var_d0 != 2)
        {
            int128_t var_b8 = var_e0;
            int64_t rax_1;
            uint64_t rdx_5;
            rax_1 = std::fs::write::h66f59f1b9d3e3b3e(var_b8, *var_b8[8], arg5);
            
            if (rax_1)
            {
                alacritty::migrate::write_results::_$u7b$$u7b$closure$u7d$$u7d$::h2c77f94bac6cdc40(
                    &var_118, rax_1, rdx_5);
                void* rax_2 = var_118;
                *(arg1 + 8) = var_110_2;
                *arg1 = rax_2;
                return core::ptr::drop_in_place$LT$tempfile..file..NamedTempFile$GT$::h537a1cab63bc4ccb(&var_b8);
            }
            
            var_108_2 = var_d0;
            var_118 = var_b8;
            uint64_t rdx_7 = tempfile::file::NamedTempFile$LT$F$GT$::persist::hb8d3945b476b9032(
                &var_e0, &var_118, result);
            char var_c8;
            
            if (var_c8 != 2)
            {
                int64_t var_c0;
                int64_t var_f8_3 = var_c0;
                var_108_2 = var_d0;
                var_118 = var_e0;
                alacritty::migrate::write_results::_$u7b$$u7b$closure$u7d$$u7d$::h55ffbd0b9d4ba002(
                    &var_98, &var_118, rdx_7);
                result = var_98;
                int32_t fd = *var_98[8];
                int96_t var_78;
                var_78 = *var_98[0xc];
                *var_78[8] = *result_1[4];
                
                if (-(result) != -0x8000000000000000)
                {
                    *(arg1 + 0x14) = *var_78[8];
                    *(arg1 + 0xc) = var_78;
                    *arg1 = result;
                    arg1[1] = fd;
                }
                else
                {
                    result = core::ptr::drop_in_place$LT$std..fs..File$GT$::hb4e0882300dc626a(fd);
                    *arg1 = -0x8000000000000000;
                }
            }
            else
            {
                result = core::ptr::drop_in_place$LT$std..fs..File$GT$::hb4e0882300dc626a(var_e0);
                *arg1 = -0x8000000000000000;
            }
        }
        else
        {
            alacritty::migrate::write_results::_$u7b$$u7b$closure$u7d$$u7d$::hd303ff52691918ba(
                &var_98, var_e0, rdx_3);
            result = result_1;
            void* result_2 = result;
            int128_t zmm0_2 = var_98;
            int128_t var_78_1 = zmm0_2;
            arg1[2] = result;
            *arg1 = zmm0_2;
        }
    }
    else
    {
        if (!(arg3 & 1))
        {
            var_e0 = &result_3;
            int64_t (* var_d8_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h3a6a9966801425ec;
            var_d0 = &var_50;
            int64_t (* var_c8_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hde322f69d68256c4;
            var_118 = &data_c83740;
            int64_t var_110_1 = 4;
            void* const var_f8_1 = &data_503ab0;
            int64_t var_f0_1 = 3;
            int64_t** var_108_1 = &var_e0;
            int64_t var_100_1 = 2;
            result = std::io::stdio::_print::h5e446ff973c02de6(&var_118);
        }
        
        *arg1 = -0x8000000000000000;
    }
    return result;
}
