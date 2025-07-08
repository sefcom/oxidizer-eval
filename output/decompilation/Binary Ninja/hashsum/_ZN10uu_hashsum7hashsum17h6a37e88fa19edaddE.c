
  int64_t (*)(void* arg1, int64_t arg2) uu_hashsum::hashsum::h6a37e88fa19edadd(int64_t* arg1)

{
    char** r15;
    char** var_10 = r15;
    int64_t* r13 = arg1;
    char const* const rcx = "*blake2bdescription() is depreca…";
    
    if (!arg1[5])
        rcx = " *blake2bdescription() is deprec…";
    
    char const* const var_b0 = rcx;
    int64_t var_a8 = 1;
    char const* const var_a0 = "-b2sumbinarycheckstatusquietstri…";
    int64_t var_98 = 1;
    char* rax;
    size_t rdx;
    rax = _$LT$core..iter..sources..once..Once$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0caeee1655188592(&var_a0);
    int64_t (* result)(void* arg1, int64_t arg2);
    char** r13_1;
    int64_t* r14_1;
    
    if (!rax)
    {
        label_5786ce:
        r13_1 = &r13[2];
        r14_1 = &r13[3];
        result = nullptr;
    }
    else
    {
        char* r12_1 = rax;
        size_t rbx_1 = rdx;
        r15 = &r13[2];
        int64_t* rax_1 = &r13[3];
        int64_t* var_e8_1 = r13;
        
        while (true)
        {
            char* result_1;
            std::path::Path::components::h4f3217acf0fc8653(&result_1, r12_1, rbx_1);
            int128_t var_170;
            std::path::Path::components::h4f3217acf0fc8653(&var_170, 
                "-b2sumbinarycheckstatusquietstri…", 1);
            int64_t (* result_2)(void* arg1, int64_t arg2);
            int64_t* rax_3;
            void* const rcx_1;
            
            if (!_$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5cac1ec2999e76da(&result_1, &var_170))
            {
                std::fs::File::open::hf67acec63d9b4762(&var_170, r12_1);
                _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h71e7b9096ef9ab27(&result_1, &var_170);
                result = result_1;
                
                if (!result)
                {
                    rax_3 = alloc::boxed::Box$LT$T$GT$::new::hc466181734c65edc(result_2);
                    rcx_1 = &data_73bb90;
                    goto label_578230;
                }
                
                r13_1 = r15;
            }
            else
            {
                std::io::stdio::stdin::h7215cc131abb55d8();
                rax_3 = alloc::boxed::Box$LT$T$GT$::new::h371a05b7099bb6c8(
                    &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5);
                rcx_1 = &data_73bbe8;
                label_578230:
                void var_68;
                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hb9a751f4ce087bfe(
                    &var_68, 0x2000, rax_3, rcx_1);
                uucore::features::checksum::digest_reader::hc839b2e876c05e33(&var_170, r15, 
                    &var_68, r13[5], r13[4]);
                _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h864ec134f8e6c354(&result_1, &var_170);
                r13_1 = r15;
                char* result_4 = result_1;
                result = result_2;
                
                if (result_4 == -0x8000000000000000)
                    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h250a87cb04812376(&var_68);
                else
                {
                    char* result_5 = result_4;
                    int64_t (* result_3)(void* arg1, int64_t arg2) = result;
                    char** var_118;
                    char** var_d0_1 = var_118;
                    r15 = r13_1;
                    uucore::features::checksum::escape_filename::hbc3241c83415153b(&var_170, r12_1, 
                        rbx_1);
                    char const* const* var_160;
                    char const* const* var_b8_1 = var_160;
                    int128_t var_c8 = var_170;
                    int128_t var_158;
                    int128_t var_78 = var_158;
                    char* var_90;
                    
                    if (*(var_e8_1 + 0x29))
                    {
                        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h1bae7f9ea29a26b8(*var_e8_1, var_e8_1[1], "blake2bdescription() is deprecat…", 7))
                        {
                            alloc::str::_$LT$impl$u20$str$GT$::to_ascii_uppercase::h60b631a23b970e6a(&var_90, *var_e8_1, var_e8_1[1]);
                            var_170 = &var_78;
                            *var_170[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h215de39c55175587;
                            var_160 = &var_90;
                            var_158 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            *var_158[8] = &var_c8;
                            int64_t (* var_148_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            char** var_140_1 = &result_5;
                            int64_t (* var_138_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            result_1 = &data_73bab0;
                            result_2 = 5;
                            int64_t var_108_1 = 0;
                            var_118 = &var_170;
                            int64_t var_110_2 = 4;
                            std::io::stdio::_print::he918bceb0c89db46(&result_1);
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3e7a1bd31eb01303(&var_90);
                        }
                        else if ((*(*rax_1 + 0x30))(*r15) != 0x200)
                        {
                            var_90 = (*(*rax_1 + 0x30))(*r15);
                            var_170 = &var_90;
                            *var_170[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                            var_160 = &var_c8;
                            var_158 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            *var_158[8] = &result_5;
                            int64_t (* var_148_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            result_1 = &data_73ba70;
                            result_2 = 4;
                            int64_t var_108_2 = 0;
                            var_118 = &var_170;
                            int64_t var_110_3 = 3;
                            std::io::stdio::_print::he918bceb0c89db46(&result_1);
                        }
                        else
                        {
                            result_1 = &var_c8;
                            result_2 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            var_118 = &result_5;
                            int64_t (* var_110_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            var_170 = &data_73ba40;
                            *var_170[8] = 3;
                            *var_158[8] = 0;
                            var_160 = &result_1;
                            var_158 = 2;
                            std::io::stdio::_print::he918bceb0c89db46(&var_170);
                        }
                    }
                    else if (*(var_e8_1 + 0x2a))
                    {
                        result_1 = &result_5;
                        result_2 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        var_170 = &data_73b958;
                        *var_170[8] = 2;
                        *var_158[8] = 0;
                        var_160 = &result_1;
                        var_158 = 1;
                        std::io::stdio::_print::he918bceb0c89db46(&var_170);
                    }
                    else if (!*(var_e8_1 + 0x2b))
                    {
                        var_170 = &var_78;
                        *var_170[8] =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h215de39c55175587;
                        var_160 = &result_5;
                        var_158 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        *var_158[8] = &var_b0;
                        int64_t (* var_148_4)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h215de39c55175587;
                        int128_t* var_140_2 = &var_c8;
                        int64_t (* var_138_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        result_1 = &data_73bb40;
                        result_2 = 5;
                        int64_t var_108_4 = 0;
                        var_118 = &var_170;
                        int64_t var_110_5 = 4;
                        std::io::stdio::_print::he918bceb0c89db46(&result_1);
                    }
                    else
                    {
                        var_90 = r12_1;
                        size_t var_88_1 = rbx_1;
                        var_170 = &result_5;
                        *var_170[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        var_160 = &var_b0;
                        var_158 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h215de39c55175587;
                        *var_158[8] = &var_90;
                        int64_t (* var_148_3)(int64_t* arg1, void* arg2) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                        result_1 = &data_73bb00;
                        result_2 = 4;
                        int64_t var_108_3 = 0;
                        var_118 = &var_170;
                        int64_t var_110_4 = 3;
                        std::io::stdio::_print::he918bceb0c89db46(&result_1);
                    }
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3e7a1bd31eb01303(
                        &var_c8);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3e7a1bd31eb01303(
                        &result_5);
                    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h250a87cb04812376(&var_68);
                    r13 = var_e8_1;
                    char* rax_14;
                    size_t rdx_7;
                    rax_14 = _$LT$core..iter..sources..once..Once$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0caeee1655188592(&var_a0);
                    r12_1 = rax_14;
                    rbx_1 = rdx_7;
                    
                    if (!rax_14)
                        goto label_5786ce;
                    
                    continue;
                }
            }
            r14_1 = rax_1;
            break;
        }
    }
    
    core::ptr::drop_in_place$LT$uu_hashsum..Options$GT$::h786198480f8a4310(*r13_1, *r14_1);
    return result;
}
