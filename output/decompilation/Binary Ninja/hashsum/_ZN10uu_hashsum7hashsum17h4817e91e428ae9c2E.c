
  int64_t (*)(void* arg1, int64_t arg2) uu_hashsum::hashsum::h4817e91e428ae9c2(int64_t* arg1)

{
    char** rbp;
    char** var_8 = rbp;
    char const* const rcx = " *blake2bfailed to read inputfai…";
    
    if (arg1[5])
        rcx = "*blake2bfailed to read inputfail…";
    
    char const* const var_98 = rcx;
    int64_t var_90 = 1;
    char const* const var_88 = "-b2sumlengthbinary";
    int64_t var_80 = 1;
    char* rax;
    uint64_t rdx;
    rax = _$LT$core..iter..sources..once..Once$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h982a0c4a152de282(&var_88);
    
    if (rax)
    {
        char* r12_1 = rax;
        uint64_t r14_1 = rdx;
        int64_t* var_a0_1 = &arg1[2];
        
        while (true)
        {
            char* result_1;
            std::path::Path::components::hd0346d362206f2e9(&result_1, r12_1, r14_1);
            int128_t var_168;
            std::path::Path::components::hd0346d362206f2e9(&var_168, "-b2sumlengthbinary", 1);
            int64_t (* result)(void* arg1, int64_t arg2);
            int64_t (* result_2)(void* arg1, int64_t arg2);
            uint64_t rax_3;
            void* const rdx_2;
            
            if (!_$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::hd9623c64792f17b1(&result_1, &var_168))
            {
                std::fs::File::open::ha248bcfadf7db1bd(&var_168, r12_1);
                _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h3a6495f6b466d1cd(&result_1, &var_168);
                result = result_1;
                
                if (!result)
                {
                    rax_3 = alloc::boxed::Box$LT$T$GT$::new::hfaef7a3dce0ae3b8(result_2);
                    rdx_2 = &data_5505e8;
                    goto label_4772e7;
                }
            }
            else
            {
                std::io::stdio::stdin::h9a05a2c3e7544b2a();
                rax_3 = alloc::boxed::Box$LT$T$GT$::new::hadbb0503d2003617(
                    &std::io::stdio::stdin::INSTANCE::heccb3522b341563b);
                rdx_2 = &data_550640;
                label_4772e7:
                void var_68;
                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hda0e1f61fc52ab31(
                    &var_68, rax_3, rdx_2);
                uucore::features::checksum::digest_reader::hff1fba5c339e0b36(&var_168, var_a0_1, 
                    &var_68, arg1[5], arg1[4]);
                _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hf61b0de946dbe0fa(&result_1, &var_168);
                char* result_3 = result_1;
                result = result_2;
                
                if (-(result_3) == -0x8000000000000000)
                    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h256beb3357173075(&var_68);
                else
                {
                    char* result_4 = result_3;
                    char** var_118;
                    char** var_d8_1 = var_118;
                    uucore::features::checksum::escape_filename::h72613307eceef7dc(&var_168, r12_1, 
                        r14_1);
                    char const* const* var_158;
                    char const* const* var_a8_1 = var_158;
                    int128_t var_b8 = var_168;
                    int128_t var_150;
                    int128_t var_78 = var_150;
                    char* var_d0;
                    uint64_t var_c8;
                    
                    if (*(arg1 + 0x29))
                    {
                        int64_t r14_2 = *arg1;
                        uint64_t r15_1 = arg1[1];
                        
                        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h06d929c007262a5f(r14_2, r15_1, "blake2bfailed to read inputfaile…", 7))
                        {
                            alloc::str::_$LT$impl$u20$str$GT$::to_ascii_uppercase::h035e9d4252a297af(&var_d0, r14_2, r15_1);
                            var_168 = &var_78;
                            *var_168[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h65d6a60c9852059d;
                            var_158 = &var_d0;
                            var_150 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                            *var_150[8] = &var_b8;
                            int64_t (* var_140_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                            char** var_138_1 = &result_4;
                            int64_t (* var_130_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                            result_1 = &data_550508;
                            result_2 = 5;
                            int64_t var_108_1 = 0;
                            var_118 = &var_168;
                            int64_t var_110_2 = 4;
                            std::io::stdio::_print::h5e446ff973c02de6(&result_1);
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9f078563e9f476de(var_d0, var_c8);
                        }
                        else if ((*(arg1[3] + 0x30))(arg1[2]) != 0x200)
                        {
                            var_d0 = (*(arg1[3] + 0x30))(arg1[2]);
                            var_168 = &var_d0;
                            *var_168[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                            var_158 = &var_b8;
                            var_150 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                            *var_150[8] = &result_4;
                            int64_t (* var_140_4)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                            result_1 = &data_5504c8;
                            result_2 = 4;
                            int64_t var_108_4 = 0;
                            var_118 = &var_168;
                            int64_t var_110_5 = 3;
                            std::io::stdio::_print::h5e446ff973c02de6(&result_1);
                        }
                        else
                        {
                            result_1 = &var_b8;
                            result_2 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                            var_118 = &result_4;
                            int64_t (* var_110_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                            var_168 = &data_550498;
                            *var_168[8] = 3;
                            *var_150[8] = 0;
                            var_158 = &result_1;
                            var_150 = 2;
                            std::io::stdio::_print::h5e446ff973c02de6(&var_168);
                        }
                    }
                    else if (*(arg1 + 0x2a))
                    {
                        result_1 = &result_4;
                        result_2 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                        var_168 = &data_5503b8;
                        *var_168[8] = 2;
                        *var_150[8] = 0;
                        var_158 = &result_1;
                        var_150 = 1;
                        std::io::stdio::_print::h5e446ff973c02de6(&var_168);
                    }
                    else if (!*(arg1 + 0x2b))
                    {
                        var_168 = &var_78;
                        *var_168[8] =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h65d6a60c9852059d;
                        var_158 = &result_4;
                        var_150 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                        *var_150[8] = &var_98;
                        int64_t (* var_140_3)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h65d6a60c9852059d;
                        int128_t* var_138_2 = &var_b8;
                        int64_t (* var_130_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                        result_1 = &data_550598;
                        result_2 = 5;
                        int64_t var_108_3 = 0;
                        var_118 = &var_168;
                        int64_t var_110_4 = 4;
                        std::io::stdio::_print::h5e446ff973c02de6(&result_1);
                    }
                    else
                    {
                        var_d0 = r12_1;
                        var_c8 = r14_1;
                        var_168 = &result_4;
                        *var_168[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                        var_158 = &var_98;
                        var_150 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h65d6a60c9852059d;
                        *var_150[8] = &var_d0;
                        uint64_t (* var_140_2)(int64_t* arg1, int64_t arg2) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
                        result_1 = &data_550558;
                        result_2 = 4;
                        int64_t var_108_2 = 0;
                        var_118 = &var_168;
                        int64_t var_110_3 = 3;
                        std::io::stdio::_print::h5e446ff973c02de6(&result_1);
                    }
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9f078563e9f476de(
                        var_b8, *var_b8[8]);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9f078563e9f476de(
                        result_4, result);
                    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h256beb3357173075(&var_68);
                    char* rax_10;
                    uint64_t rdx_7;
                    rax_10 = _$LT$core..iter..sources..once..Once$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h982a0c4a152de282(&var_88);
                    r12_1 = rax_10;
                    r14_1 = rdx_7;
                    
                    if (!rax_10)
                        break;
                    
                    continue;
                }
            }
            core::ptr::drop_in_place$LT$uu_hashsum..Options$GT$::h43498a49004cb0ef(arg1[2], 
                arg1[3]);
            return result;
        }
    }
    
    core::ptr::drop_in_place$LT$uu_hashsum..Options$GT$::h43498a49004cb0ef(arg1[2], arg1[3]);
    return nullptr;
}
