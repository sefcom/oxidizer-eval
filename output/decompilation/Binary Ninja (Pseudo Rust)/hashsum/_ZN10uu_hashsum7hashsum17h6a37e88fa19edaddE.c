
  fn uu_hashsum::hashsum::h6a37e88fa19edadd(arg1: *mut i64) -> fn(arg1: *mut c_void, arg2: i64) -> i64

{
    let mut r15: *mut *mut i8;
    let var_10: *mut *mut i8 = r15;
    let mut r13: *mut i64 = arg1;
    let mut rcx: *const i8 = "*blake2bdescription() is depreca…";
    
    if arg1[5] == 0
    {
        rcx = " *blake2bdescription() is deprec…";
    }
    
    let mut var_b0: *const i8 = rcx;
    let var_a8: i64 = 1;
    let mut var_a0: *const i8 = "-b2sumbinarycheckstatusquietstri…";
    let var_98: i64 = 1;
    let mut rax: *mut i8;
    let mut rdx: size_t;
    rax = _$LT$core..iter..sources..once..Once$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0caeee1655188592(&var_a0);
    let mut result: fn(arg1: *mut c_void, arg2: i64) -> i64;
    let mut r13_1: *mut *mut i8;
    let mut r14_1: *mut i64;
    
    if rax == 0
    {
        'label_5786ce:
        r13_1 = &r13[2];
        r14_1 = &r13[3];
        result = nullptr;
    }
    else
    {
        let mut r12_1: *mut i8 = rax;
        let mut rbx_1: size_t = rdx;
        r15 = &r13[2];
        let rax_1: *mut i64 = &r13[3];
        let var_e8_1: *mut i64 = r13;
        
        loop
        {
            let mut result_1: *mut i8;
            std::path::Path::components::h4f3217acf0fc8653(&result_1, r12_1, rbx_1);
            let mut var_170: i128;
            std::path::Path::components::h4f3217acf0fc8653(&var_170, 
                "-b2sumbinarycheckstatusquietstri…", 1);
            let mut result_2: fn(arg1: *mut c_void, arg2: i64) -> i64;
            let mut rax_3: *mut i64;
            let mut rcx_1: *mut c_void;
            
            if _$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5cac1ec2999e76da(&result_1, &var_170) == 0
            {
                std::fs::File::open::hf67acec63d9b4762(&var_170, r12_1);
                _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h71e7b9096ef9ab27(&result_1, &var_170);
                result = result_1;
                
                if result == 0
                {
                    rax_3 = alloc::boxed::Box$LT$T$GT$::new::hc466181734c65edc(result_2);
                    rcx_1 = &data_73bb90;
                    goto 'label_578230;
                }
                
                r13_1 = r15;
            }
            else
            {
                std::io::stdio::stdin::h7215cc131abb55d8();
                rax_3 = alloc::boxed::Box$LT$T$GT$::new::h371a05b7099bb6c8(
                    &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5);
                rcx_1 = &data_73bbe8;
                'label_578230:
                let mut var_68: ();
                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hb9a751f4ce087bfe(
                    &var_68, 0x2000, rax_3, rcx_1);
                uucore::features::checksum::digest_reader::hc839b2e876c05e33(&var_170, r15, 
                    &var_68, r13[5], r13[4]);
                _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h864ec134f8e6c354(&result_1, &var_170);
                r13_1 = r15;
                let result_4: *mut i8 = result_1;
                result = result_2;
                
                if result_4 == -0x8000000000000000
                {
                    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h250a87cb04812376(&var_68);
                }
                else
                {
                    let mut result_5: *mut i8 = result_4;
                    let result_3: fn(arg1: *mut c_void, arg2: i64) -> i64 = result;
                    let mut var_118: *mut *mut i8;
                    let var_d0_1: *mut *mut i8 = var_118;
                    r15 = r13_1;
                    uucore::features::checksum::escape_filename::hbc3241c83415153b(&var_170, r12_1, 
                        rbx_1);
                    let mut var_160: *const *const i8;
                    let var_b8_1: *const *const i8 = var_160;
                    let mut var_c8: i128 = var_170;
                    let mut var_158: i128;
                    let mut var_78: i128 = var_158;
                    let mut var_90: *mut i8;
                    
                    if *var_e8_1.byte_offset(0x29) != 0
                    {
                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h1bae7f9ea29a26b8(*var_e8_1, var_e8_1[1], "blake2bdescription() is deprecat…", 7) == 0
                        {
                            alloc::str::_$LT$impl$u20$str$GT$::to_ascii_uppercase::h60b631a23b970e6a(&var_90, *var_e8_1, var_e8_1[1]);
                            var_170 = &var_78;
                            *var_170[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h215de39c55175587;
                            var_160 = &var_90;
                            var_158 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            *var_158[8] = &var_c8;
                            let var_148_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            let var_140_1: *mut *mut i8 = &result_5;
                            let var_138_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            result_1 = &data_73bab0;
                            result_2 = 5;
                            let var_108_1: i64 = 0;
                            var_118 = &var_170;
                            let var_110_2: i64 = 4;
                            std::io::stdio::_print::he918bceb0c89db46(&result_1);
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3e7a1bd31eb01303(&var_90);
                        }
                        else if (*(*rax_1 + 0x30))(*r15) != 0x200
                        {
                            var_90 = (*(*rax_1 + 0x30))(*r15);
                            var_170 = &var_90;
                            *var_170[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                            var_160 = &var_c8;
                            var_158 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            *var_158[8] = &result_5;
                            let var_148_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            result_1 = &data_73ba70;
                            result_2 = 4;
                            let var_108_2: i64 = 0;
                            var_118 = &var_170;
                            let var_110_3: i64 = 3;
                            std::io::stdio::_print::he918bceb0c89db46(&result_1);
                        }
                        else
                        {
                            result_1 = &var_c8;
                            result_2 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            var_118 = &result_5;
                            let var_110_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            var_170 = &data_73ba40;
                            *var_170[8] = 3;
                            *var_158[8] = 0;
                            var_160 = &result_1;
                            var_158 = 2;
                            std::io::stdio::_print::he918bceb0c89db46(&var_170);
                        }
                    }
                    else if *var_e8_1.byte_offset(0x2a) != 0
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
                    else if *var_e8_1.byte_offset(0x2b) == 0
                    {
                        var_170 = &var_78;
                        *var_170[8] =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h215de39c55175587;
                        var_160 = &result_5;
                        var_158 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        *var_158[8] = &var_b0;
                        let var_148_4: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h215de39c55175587;
                        let var_140_2: *mut i128 = &var_c8;
                        let var_138_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        result_1 = &data_73bb40;
                        result_2 = 5;
                        let var_108_4: i64 = 0;
                        var_118 = &var_170;
                        let var_110_5: i64 = 4;
                        std::io::stdio::_print::he918bceb0c89db46(&result_1);
                    }
                    else
                    {
                        var_90 = r12_1;
                        let var_88_1: size_t = rbx_1;
                        var_170 = &result_5;
                        *var_170[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        var_160 = &var_b0;
                        var_158 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h215de39c55175587;
                        *var_158[8] = &var_90;
                        let var_148_3: fn(arg1: *mut i64, arg2: *mut c_void) -> i64 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                        result_1 = &data_73bb00;
                        result_2 = 4;
                        let var_108_3: i64 = 0;
                        var_118 = &var_170;
                        let var_110_4: i64 = 3;
                        std::io::stdio::_print::he918bceb0c89db46(&result_1);
                    }
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3e7a1bd31eb01303(
                        &var_c8);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3e7a1bd31eb01303(
                        &result_5);
                    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h250a87cb04812376(&var_68);
                    r13 = var_e8_1;
                    let mut rax_14: *mut i8;
                    let mut rdx_7: size_t;
                    rax_14 = _$LT$core..iter..sources..once..Once$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0caeee1655188592(&var_a0);
                    r12_1 = rax_14;
                    rbx_1 = rdx_7;
                    
                    if rax_14 == 0
                    {
                        goto 'label_5786ce;
                    }
                    
                    continue;
                }
            }
            r14_1 = rax_1;
            break;
        }
    }
    
    core::ptr::drop_in_place$LT$uu_hashsum..Options$GT$::h786198480f8a4310(*r13_1, *r14_1);
    result
}
