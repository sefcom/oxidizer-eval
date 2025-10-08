
  int64_t alacritty::migrate::yaml::migrate::h7955a864104fb60d(int64_t* arg1, void* arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6, int64_t arg7)

{
    int64_t var_208 = arg6;
    int64_t var_200 = arg7;
    char rbp = *(arg2 + 0x18);
    int32_t var_f8;
    uint64_t rdx_1 =
        alacritty::config::deserialize_config::h5c79ebe9ac2f1598(&var_f8, arg3, arg4, rbp ^ 1);
    int64_t* var_298;
    void** const var_238;
    int128_t var_1f8;
    int128_t var_1d8;
    int128_t var_e8;
    int128_t var_d8;
    
    if (var_f8 != 7)
    {
        int64_t var_a8;
        int64_t var_1a8_1 = var_a8;
        int128_t var_b8;
        int128_t var_1b8_1 = var_b8;
        int128_t zmm0 = var_f8;
        int128_t var_c8;
        int128_t var_1c8_1 = var_c8;
        var_1d8 = var_d8;
        int128_t var_1e8_1 = var_e8;
        var_1f8 = zmm0;
        var_298 = &var_1f8;
        int64_t (* var_290_1)(int64_t* arg1, int64_t* arg2) =
            _$LT$alacritty..config..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h8f6deb2eaa2aacd3;
        var_238 = &data_c83280;
        int64_t var_230_1 = 1;
        int64_t var_218_1 = 0;
        int64_t** var_228_1 = &var_298;
        int64_t var_220_1 = 1;
        int128_t var_110;
        core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_110, 0, rdx_1, &var_238);
        int64_t var_100;
        arg1[3] = var_100;
        *(arg1 + 8) = var_110;
        *arg1 = 1;
        return core::ptr::drop_in_place$LT$alacritty..config..Error$GT$::hc0565752af3cd056(
            &var_1f8);
    }
    
    int64_t var_228;
    var_228 = var_e8;
    int128_t var_f0;
    var_238 = var_f0;
    
    if (!*(arg2 + 0x19))
        alacritty::migrate::yaml::migrate_imports::he16b1e9186b09947(&var_1f8, arg2, &var_238, 
            arg3, arg4, arg5);
    
    int128_t var_1e8;
    
    if (!*(arg2 + 0x19) && !(0 + -(var_1f8)))
    {
        arg1[3] = var_1e8;
        *(arg1 + 8) = var_1f8;
        *arg1 = 1;
    }
    else
    {
        uint64_t rdx_3 = toml::ser::to_string::hd0ad620e8ee3c864(&var_1f8, &var_238);
        int128_t var_278;
        
        if (var_1f8 != 1)
        {
            int128_t var_258 = var_1f8;
            int64_t var_248_1 = *var_1e8[8];
            var_298 = &var_208;
            int64_t (* var_290_2)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hde322f69d68256c4;
            var_1f8 = &data_c83290;
            *var_1f8[8] = 2;
            var_1d8 = 0;
            var_1e8 = &var_298;
            *var_1e8[8] = 1;
            core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_f8, 0, rdx_3, 
                &var_1f8);
            var_278 = var_f8;
            int64_t rax_5 = var_e8;
            alacritty::migrate::migrate_toml::h20014181f4101fc3(&var_1f8, &var_258);
            int64_t r15_1 = var_1f8;
            var_298 = var_1f8;
            int64_t rax_6 = *var_1e8[8];
            int128_t* rdi_8;
            
            if (r15_1 != 0xc)
            {
                memcpy(&var_d8, &var_1d8, 0xa8);
                int128_t var_f0_1 = var_298;
                *var_e8[8] = rax_6;
                var_f8 = r15_1;
                int128_t var_128;
                _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hfd01effef2c7df3f(&var_128, &var_f8);
                int64_t var_118;
                int64_t var_248_2 = var_118;
                var_258 = var_128;
                core::ptr::drop_in_place$LT$toml_edit..document..DocumentMut$GT$::h9bb944d092de2eb6(
                    &var_f8);
                alacritty::migrate::write_results::h27f18712553304e3(&var_1f8, rbp, *(arg2 + 0x1b), 
                    &var_278, *var_258[8]);
                int64_t rax_11 = var_1f8;
                
                if (-(rax_11) != -0x8000000000000000)
                {
                    *(arg1 + 0x10) = var_1f8;
                    arg1[1] = rax_11;
                    *arg1 = 1;
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(
                        &var_278);
                }
                else
                {
                    arg1[3] = rax_5;
                    *(arg1 + 8) = var_278;
                    *arg1 = 0;
                }
                
                rdi_8 = &var_258;
            }
            else
            {
                arg1[3] = rax_6;
                *(arg1 + 8) = var_298;
                *arg1 = 1;
                rdi_8 = &var_278;
            }
            
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(rdi_8);
        }
        else
        {
            var_e8 = *var_1e8[8];
            var_f8 = var_1f8;
            alacritty::migrate::yaml::migrate::_$u7b$$u7b$closure$u7d$$u7d$::hc6ee86b888e3d3cb(
                &var_298, &var_f8, rdx_3);
            int128_t zmm0_1 = var_298;
            var_278 = zmm0_1;
            int64_t var_288;
            int64_t var_268_1 = var_288;
            arg1[3] = var_288;
            *(arg1 + 8) = zmm0_1;
            *arg1 = 1;
        }
    }
    return core::ptr::drop_in_place$LT$toml..value..Value$GT$::h7761fefc14a7cec1(&var_238);
}
