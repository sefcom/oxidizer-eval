
  fn bat::list_themes::he3fdf7b32bedf917(arg1: *mut i8, arg2: *mut u128, arg3: i64, arg4: u64, arg5: i64, arg6: u64) -> i64

{
    let mut result_2: i64;
    bat::assets::assets_from_cache_or_binary::h4bfa381507131f37(&result_2, 
        *arg2.byte_offset(0x127), arg5, arg6);
    let result: i64 = result_2;
    let mut var_158: i128;
    let mut var_3e8: i128 = var_158;
    let mut var_148: i128;
    let var_138: i128;
    let var_128: i128;
    let var_118: i128;
    
    if result == -0x7fffffffffffffff
    {
        *arg1.byte_offset(0x40) = var_118;
        let zmm0: i128 = var_3e8;
        *arg1.byte_offset(0x30) = var_128;
        *arg1.byte_offset(0x20) = var_138;
        *arg1.byte_offset(0x10) = var_148;
        *arg1 = zmm0;
        return result;
    }
    
    let var_d8: i64;
    let var_168_1: i64 = var_d8;
    let var_e8: i128;
    let var_178_1: u64 = var_e8;
    let var_108: i128;
    let var_198_1: i128 = var_108;
    let var_1e8_1: i128 = var_3e8;
    let var_1d8_1: i128 = var_148;
    let var_1c8_1: i128 = var_138;
    let var_1b8_1: i128 = var_128;
    let var_1a8_1: i128 = var_118;
    let mut result_1: i64 = result;
    _$LT$bat..config..Config$u20$as$u20$core..clone..Clone$GT$::clone::h6b32da5f80f8f0d1(&result_2, 
        arg2);
    _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::ha612b0421c6d552b(&var_3e8);
    let mut var_258: i128 = var_3e8;
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h719ca529f86fe852(&var_258, 0xb);
    let var_70_1: *const i8 = &data_480e94[4];
    let var_68_1: i64 = 4;
    let var_3d8_1: i128 = var_148;
    var_3e8 = var_258;
    let mut var_a0: i64;
    let var_98: i64;
    core::ptr::drop_in_place$LT$bat..style..StyleComponents$GT$::h231077cf22413a4b(var_a0, var_98);
    let var_80_1: i128 = var_138;
    let var_90_1: i128 = var_3d8_1;
    var_a0 = var_3e8;
    let var_37: i8;
    let var_36: i8;
    bat::output::OutputType::from_mode::h26c543a4809b2489(&var_3e8, var_36, var_37);
    let rax: i8 = var_3e8;
    let mut var_438: i128;
    
    if rax != 0xd
    {
        var_438 = var_3e8;
        *arg1.byte_offset(0x40) = var_118;
        *arg1.byte_offset(0x30) = var_128;
        let zmm0_4: i128 = var_438;
        *arg1.byte_offset(0x21) = var_138;
        *arg1.byte_offset(0x11) = var_3d8_1;
        *arg1.byte_offset(1) = zmm0_4;
        *arg1 = rax;
    }
    else
    {
        let rax_1: i64 = *var_128[8];
        let mut var_409: i128;
        *var_409[8] = rax_1;
        let mut var_228: i128 = var_3e8;
        let var_218_1: i128 = var_3d8_1;
        let var_208_1: i128 = var_138;
        let var_1f8_1: i64 = rax_1;
        bat::output::OutputType::handle::h5316410587048584(&var_3e8, &var_228);
        let mut rax_2: i8 = var_3e8;
        let mut zmm0_5: i128;
        
        if rax_2 != 0xd
        {
            zmm0_5 = var_3e8;
            var_438 = var_3d8_1;
            var_438 = zmm0_5;
            *arg1.byte_offset(0x40) = var_118;
            *arg1.byte_offset(0x30) = var_128;
            *arg1.byte_offset(0x20) = var_138;
            *arg1.byte_offset(0x10) = var_438;
            zmm0_5 = var_438;
            'label_7af087:
            *arg1.byte_offset(1) = zmm0_5;
            *arg1 = rax_2;
        }
        else
        {
            let mut var_308: i128 = var_3e8;
            let var_2f8_1: i64 = *var_3d8_1[8];
            let mut rdx_2: *const i8 = "Monokai Extended";
            let temp0_1: i8 = bat::theme::color_scheme::hfabd3e0c61a4854a(0) & 1;
            
            if temp0_1 != 0
            {
                rdx_2 = "Monokai Extended Lightthemes (de…";
            }
            
            let mut rcx_2: u64 = 0x10;
            
            if temp0_1 != 0
            {
                rcx_2 = 0x16;
            }
            
            let var_f8: i128;
            let rax_5: u64 = var_f8;
            let rcx_3: i64 = *var_f8[8];
            let mut rsi_5: u64 = rax_5;
            
            if rax_5 != 0
            {
                rsi_5 = var_178_1;
            }
            
            let mut rdx_3: i64;
            rdx_3 = rax_5 != 0;
            let mut var_2a0: i64 = rdx_3;
            let var_298_1: i64 = 0;
            let var_288_1: i64 = rcx_3;
            let var_280_1: i64 = rdx_3;
            let var_278_1: i64 = 0;
            let var_270_1: u64 = rax_5;
            let var_268_1: i64 = rcx_3;
            let var_260_1: u64 = rsi_5;
            
            loop
            {
                let rax_6: *mut c_void = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf1310911128cd430(&var_2a0);
                let mut var_428: *const *const i8;
                let mut var_418: i128;
                let mut var_348: i128;
                let mut var_2c0: *mut i128;
                let var_3c: i8;
                
                if rax_6 == 0
                {
                    if var_3c != 0
                    {
                        std::path::Path::join::hea24a9da038aebd6(&var_2a0, arg3, arg4, 
                            "themes (default dark) (default)");
                        alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_348, 
                            var_298_1, rax_5);
                        var_2c0 = &var_348;
                        let var_2b8_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::ha152f904fae7110e;
                        var_438 = &data_ac88b8;
                        *var_438[8] = 2;
                        var_418 = 0;
                        var_428 = &var_2c0;
                        var_428 = 1;
                        bat::output::OutputHandle::write_fmt::hec1e6f03d02f41b4(&var_3e8, &var_308, 
                            &var_438);
                        let rax_16: i8 = var_3e8;
                        
                        if rax_16 != 0xd
                        {
                            *arg1.byte_offset(0x40) = var_118;
                            let zmm0_11: i128 = var_3e8;
                            *arg1.byte_offset(0x31) = var_128;
                            *arg1.byte_offset(0x21) = var_138;
                            *arg1.byte_offset(0x11) = var_3d8_1;
                            *arg1.byte_offset(1) = zmm0_11;
                            *arg1 = rax_16;
                            core::ptr::drop_in_place$LT$regex..error..Error$GT$::h466767d2e8f86b90(
                                &var_348);
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd0005799f5f2e1be(
                                &var_2a0);
                            break;
                        }
                        
                        core::ptr::drop_in_place$LT$regex..error..Error$GT$::h466767d2e8f86b90(
                            &var_348);
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd0005799f5f2e1be(
                            &var_2a0);
                    }
                    
                    *arg1 = 0xd;
                    core::ptr::drop_in_place$LT$bat..output..OutputType$GT$::h9f1c584db13fb1bb(
                        &var_228);
                    core::ptr::drop_in_place$LT$bat..config..Config$GT$::h23bd1f0acbc51dc0(
                        &result_2);
                    return core::ptr::drop_in_place$LT$bat..assets..HighlightingAssets$GT$::h6be43cd2c3f1f295(&result_1);
                }
                
                let r15_1: i64 = *rax_6.byte_offset(8);
                let r13_1: u64 = *rax_6.byte_offset(0x10);
                let mut var_318: i64 = r15_1;
                let mut rcx_5: u64 = 0xa;
                let mut rdx_6: *const i8 = " (default)";
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(rdx_2, rcx_2, r15_1, r13_1) == 0
                {
                    rcx_5 = 0xf;
                    rdx_6 = " (default dark) (default)";
                    
                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809("Monokai Extended", 0x10, r15_1, r13_1) == 0
                    {
                        let rax_10: u32 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809("Monokai Extended Lightthemes (de…", 0x16, r15_1, r13_1);
                        rcx_5 = rax_10 << 4;
                        rdx_6 = 1;
                        
                        if rax_10 != 0
                        {
                            rdx_6 = " (default light)the subcommand '…";
                        }
                    }
                }
                
                let mut var_2d0: *const i8 = rdx_6;
                let var_2c8_1: u64 = rcx_5;
                let var_3d: i8;
                let mut var_338: *const *const i8;
                
                if var_3c != 0
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hab28b98124005ba5(&var_348, r15_1, r13_1);
                    var_428 = var_338;
                    var_438 = var_348;
                    *var_409[1] = 1;
                    *var_409[2] = 0;
                    *var_409[0xa] = 0x1500000015;
                    var_428 = -0x7ffffffffffffffe;
                    var_2c0 = &var_438;
                    let var_2b8_1: fn(arg1: *mut i64, arg2: i64) -> u64 = _$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hc730c7572ee14c54;
                    let var_2b0_1: *const *const i8 = &var_2d0;
                    let var_2a8_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf38b2ed4feebf29b;
                    var_348 = &data_ac8848;
                    *var_348[8] = 3;
                    let var_328_1: i64 = 0;
                    var_338 = &var_2c0;
                    let var_330_1: i64 = 2;
                    bat::output::OutputHandle::write_fmt::hec1e6f03d02f41b4(&var_3e8, &var_308, 
                        &var_348);
                    let rax_12: i8 = var_3e8;
                    
                    if rax_12 != 0xd
                    {
                        *arg1.byte_offset(0x40) = var_118;
                        let zmm0_8: i128 = var_3e8;
                        *arg1.byte_offset(0x31) = var_128;
                        *arg1.byte_offset(0x21) = var_138;
                        *arg1.byte_offset(0x11) = var_3d8_1;
                        *arg1.byte_offset(1) = zmm0_8;
                        *arg1 = rax_12;
                        core::ptr::drop_in_place$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$GT$::hf79116e6dab6a5da(&var_438);
                        goto 'label_7af095;
                    }
                    
                    core::ptr::drop_in_place$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$GT$::hf79116e6dab6a5da(&var_438);
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hab28b98124005ba5(&var_3e8, var_318, r13_1);
                    var_438 = var_3e8;
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9a1f4db89f5bf603(
                        &*var_158[8]);
                    *var_148[8] = var_3d8_1;
                    var_158 = var_438;
                    var_348 = &result_2;
                    *var_348[8] = &result_1;
                    let rax_15: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0xa0);
                    
                    if rax_15 == 0
                    {
                        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                        /* no return */
                    }
                    
                    bat::theme_preview_file::h6842949e81115e63(&var_3e8);
                    memcpy(rax_15, &var_3e8, 0xa0);
                    var_438 = 1;
                    *var_438[8] = rax_15;
                    var_428 = 1;
                    bat::controller::Controller::run::h2c1d1acaa272306e(&var_3e8, &var_348, 
                        &var_438, &var_308);
                    
                    if var_3e8 != 0xd
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$bat..assets..SyntaxReferenceInSet$C$bat..error..Error$GT$$GT$::h2313c1560ca5a289(&var_3e8);
                    }
                    
                    var_438 = &data_ac8878;
                    *var_438[8] = 1;
                    var_428 = 8;
                    *var_428[8] = {0};
                    bat::output::OutputHandle::write_fmt::hec1e6f03d02f41b4(&var_3e8, &var_308, 
                        &var_438);
                }
                else if var_3d == 0
                {
                    var_348 = &var_318;
                    *var_348[8] =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf38b2ed4feebf29b;
                    var_338 = &var_2d0;
                    let var_330_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf38b2ed4feebf29b;
                    var_438 = &data_ac8888;
                    *var_438[8] = 3;
                    var_418 = 0;
                    var_428 = &var_348;
                    var_428 = 2;
                    bat::output::OutputHandle::write_fmt::hec1e6f03d02f41b4(&var_3e8, &var_308, 
                        &var_438);
                }
                else
                {
                    var_348 = &var_318;
                    *var_348[8] =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf38b2ed4feebf29b;
                    var_438 = &data_ac8198;
                    *var_438[8] = 2;
                    var_418 = 0;
                    var_428 = &var_348;
                    var_428 = 1;
                    bat::output::OutputHandle::write_fmt::hec1e6f03d02f41b4(&var_3e8, &var_308, 
                        &var_438);
                }
                rax_2 = var_3e8;
                
                if rax_2 != 0xd
                {
                    *arg1.byte_offset(0x40) = var_118;
                    zmm0_5 = var_3e8;
                    *arg1.byte_offset(0x31) = var_128;
                    *arg1.byte_offset(0x21) = var_138;
                    *arg1.byte_offset(0x11) = var_3d8_1;
                    goto 'label_7af087;
                }
            }
        }
        'label_7af095:
        core::ptr::drop_in_place$LT$bat..output..OutputType$GT$::h9f1c584db13fb1bb(&var_228);
    }
    core::ptr::drop_in_place$LT$bat..config..Config$GT$::h23bd1f0acbc51dc0(&result_2);
    core::ptr::drop_in_place$LT$bat..assets..HighlightingAssets$GT$::h6be43cd2c3f1f295(&result_1)
}
