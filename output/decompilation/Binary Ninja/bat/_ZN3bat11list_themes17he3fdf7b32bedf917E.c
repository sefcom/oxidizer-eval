
  int64_t bat::list_themes::he3fdf7b32bedf917(char* arg1, uint128_t* arg2, int64_t arg3, uint64_t arg4, int64_t arg5, uint64_t arg6)

{
    int64_t result_2;
    bat::assets::assets_from_cache_or_binary::h4bfa381507131f37(&result_2, *(arg2 + 0x127), arg5, 
        arg6);
    int64_t result = result_2;
    int128_t var_158;
    int128_t var_3e8 = var_158;
    int128_t var_148;
    int128_t var_138;
    int128_t var_128;
    int128_t var_118;
    
    if (result == -0x7fffffffffffffff)
    {
        *(arg1 + 0x40) = var_118;
        int128_t zmm0 = var_3e8;
        *(arg1 + 0x30) = var_128;
        *(arg1 + 0x20) = var_138;
        *(arg1 + 0x10) = var_148;
        *arg1 = zmm0;
        return result;
    }
    
    int64_t var_d8;
    int64_t var_168_1 = var_d8;
    int128_t var_e8;
    uint64_t var_178_1 = var_e8;
    int128_t var_108;
    int128_t var_198_1 = var_108;
    int128_t var_1e8_1 = var_3e8;
    int128_t var_1d8_1 = var_148;
    int128_t var_1c8_1 = var_138;
    int128_t var_1b8_1 = var_128;
    int128_t var_1a8_1 = var_118;
    int64_t result_1 = result;
    _$LT$bat..config..Config$u20$as$u20$core..clone..Clone$GT$::clone::h6b32da5f80f8f0d1(&result_2, 
        arg2);
    _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::ha612b0421c6d552b(&var_3e8);
    int128_t var_258 = var_3e8;
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h719ca529f86fe852(&var_258, 0xb);
    char const* const var_70_1 = &data_480e94[4];
    int64_t var_68_1 = 4;
    int128_t var_3d8_1 = var_148;
    var_3e8 = var_258;
    int64_t var_a0;
    int64_t var_98;
    core::ptr::drop_in_place$LT$bat..style..StyleComponents$GT$::h231077cf22413a4b(var_a0, var_98);
    int128_t var_80_1 = var_138;
    int128_t var_90_1 = var_3d8_1;
    var_a0 = var_3e8;
    char var_37;
    char var_36;
    bat::output::OutputType::from_mode::h26c543a4809b2489(&var_3e8, var_36, var_37);
    char rax = var_3e8;
    int128_t var_438;
    
    if (rax != 0xd)
    {
        var_438 = var_3e8;
        *(arg1 + 0x40) = var_118;
        *(arg1 + 0x30) = var_128;
        int128_t zmm0_4 = var_438;
        *(arg1 + 0x21) = var_138;
        *(arg1 + 0x11) = var_3d8_1;
        *(arg1 + 1) = zmm0_4;
        *arg1 = rax;
    }
    else
    {
        int64_t rax_1 = *var_128[8];
        int128_t var_409;
        *var_409[8] = rax_1;
        int128_t var_228 = var_3e8;
        int128_t var_218_1 = var_3d8_1;
        int128_t var_208_1 = var_138;
        int64_t var_1f8_1 = rax_1;
        bat::output::OutputType::handle::h5316410587048584(&var_3e8, &var_228);
        char rax_2 = var_3e8;
        int128_t zmm0_5;
        
        if (rax_2 != 0xd)
        {
            zmm0_5 = var_3e8;
            var_438 = var_3d8_1;
            var_438 = zmm0_5;
            *(arg1 + 0x40) = var_118;
            *(arg1 + 0x30) = var_128;
            *(arg1 + 0x20) = var_138;
            *(arg1 + 0x10) = var_438;
            zmm0_5 = var_438;
            label_7af087:
            *(arg1 + 1) = zmm0_5;
            *arg1 = rax_2;
        }
        else
        {
            int128_t var_308 = var_3e8;
            int64_t var_2f8_1 = *var_3d8_1[8];
            char const* const rdx_2 = "Monokai Extended";
            char temp0_1 = bat::theme::color_scheme::hfabd3e0c61a4854a(0) & 1;
            
            if (temp0_1)
                rdx_2 = "Monokai Extended Lightthemes (de…";
            
            uint64_t rcx_2 = 0x10;
            
            if (temp0_1)
                rcx_2 = 0x16;
            
            int128_t var_f8;
            uint64_t rax_5 = var_f8;
            int64_t rcx_3 = *var_f8[8];
            uint64_t rsi_5 = rax_5;
            
            if (rax_5)
                rsi_5 = var_178_1;
            
            int64_t rdx_3;
            rdx_3 = rax_5;
            int64_t var_2a0 = rdx_3;
            int64_t var_298_1 = 0;
            int64_t var_288_1 = rcx_3;
            int64_t var_280_1 = rdx_3;
            int64_t var_278_1 = 0;
            uint64_t var_270_1 = rax_5;
            int64_t var_268_1 = rcx_3;
            uint64_t var_260_1 = rsi_5;
            
            while (true)
            {
                void* rax_6 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf1310911128cd430(&var_2a0);
                char const* const* var_428;
                int128_t var_418;
                int128_t var_348;
                int128_t* var_2c0;
                char var_3c;
                
                if (!rax_6)
                {
                    if (var_3c)
                    {
                        std::path::Path::join::hea24a9da038aebd6(&var_2a0, arg3, arg4, 
                            "themes (default dark) (default)");
                        alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_348, 
                            var_298_1, rax_5);
                        var_2c0 = &var_348;
                        int64_t (* var_2b8_2)(int64_t* arg1, int64_t* arg2) = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::ha152f904fae7110e;
                        var_438 = &data_ac88b8;
                        *var_438[8] = 2;
                        var_418 = 0;
                        var_428 = &var_2c0;
                        var_428 = 1;
                        bat::output::OutputHandle::write_fmt::hec1e6f03d02f41b4(&var_3e8, &var_308, 
                            &var_438);
                        char rax_16 = var_3e8;
                        
                        if (rax_16 != 0xd)
                        {
                            *(arg1 + 0x40) = var_118;
                            int128_t zmm0_11 = var_3e8;
                            *(arg1 + 0x31) = var_128;
                            *(arg1 + 0x21) = var_138;
                            *(arg1 + 0x11) = var_3d8_1;
                            *(arg1 + 1) = zmm0_11;
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
                
                int64_t r15_1 = *(rax_6 + 8);
                uint64_t r13_1 = *(rax_6 + 0x10);
                int64_t var_318 = r15_1;
                uint64_t rcx_5 = 0xa;
                char const* const rdx_6 = " (default)";
                
                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(rdx_2, rcx_2, r15_1, r13_1))
                {
                    rcx_5 = 0xf;
                    rdx_6 = " (default dark) (default)";
                    
                    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809("Monokai Extended", 0x10, r15_1, r13_1))
                    {
                        uint32_t rax_10 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809("Monokai Extended Lightthemes (de…", 0x16, r15_1, r13_1);
                        rcx_5 = rax_10 << 4;
                        rdx_6 = 1;
                        
                        if (rax_10)
                            rdx_6 = " (default light)the subcommand '…";
                    }
                }
                
                char const* const var_2d0 = rdx_6;
                uint64_t var_2c8_1 = rcx_5;
                char var_3d;
                char const* const* var_338;
                
                if (var_3c)
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hab28b98124005ba5(&var_348, r15_1, r13_1);
                    var_428 = var_338;
                    var_438 = var_348;
                    *var_409[1] = 1;
                    *var_409[2] = 0;
                    *var_409[0xa] = 0x1500000015;
                    var_428 = -0x7ffffffffffffffe;
                    var_2c0 = &var_438;
                    uint64_t (* var_2b8_1)(int64_t* arg1, int64_t arg2) = _$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hc730c7572ee14c54;
                    char const* const* var_2b0_1 = &var_2d0;
                    int64_t (* var_2a8_1)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf38b2ed4feebf29b;
                    var_348 = &data_ac8848;
                    *var_348[8] = 3;
                    int64_t var_328_1 = 0;
                    var_338 = &var_2c0;
                    int64_t var_330_1 = 2;
                    bat::output::OutputHandle::write_fmt::hec1e6f03d02f41b4(&var_3e8, &var_308, 
                        &var_348);
                    char rax_12 = var_3e8;
                    
                    if (rax_12 != 0xd)
                    {
                        *(arg1 + 0x40) = var_118;
                        int128_t zmm0_8 = var_3e8;
                        *(arg1 + 0x31) = var_128;
                        *(arg1 + 0x21) = var_138;
                        *(arg1 + 0x11) = var_3d8_1;
                        *(arg1 + 1) = zmm0_8;
                        *arg1 = rax_12;
                        core::ptr::drop_in_place$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$GT$::hf79116e6dab6a5da(&var_438);
                        goto label_7af095;
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
                    uint64_t rax_15 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0xa0);
                    
                    if (!rax_15)
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
                    
                    if (var_3e8 != 0xd)
                        core::ptr::drop_in_place$LT$core..result..Result$LT$bat..assets..SyntaxReferenceInSet$C$bat..error..Error$GT$$GT$::h2313c1560ca5a289(&var_3e8);
                    
                    var_438 = &data_ac8878;
                    *var_438[8] = 1;
                    var_428 = 8;
                    *var_428[8] = {0};
                    bat::output::OutputHandle::write_fmt::hec1e6f03d02f41b4(&var_3e8, &var_308, 
                        &var_438);
                }
                else if (!var_3d)
                {
                    var_348 = &var_318;
                    *var_348[8] =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf38b2ed4feebf29b;
                    var_338 = &var_2d0;
                    int64_t (* var_330_2)(int64_t* arg1, int64_t arg2) =
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
                
                if (rax_2 != 0xd)
                {
                    *(arg1 + 0x40) = var_118;
                    zmm0_5 = var_3e8;
                    *(arg1 + 0x31) = var_128;
                    *(arg1 + 0x21) = var_138;
                    *(arg1 + 0x11) = var_3d8_1;
                    goto label_7af087;
                }
            }
        }
        label_7af095:
        core::ptr::drop_in_place$LT$bat..output..OutputType$GT$::h9f1c584db13fb1bb(&var_228);
    }
    core::ptr::drop_in_place$LT$bat..config..Config$GT$::h23bd1f0acbc51dc0(&result_2);
    return core::ptr::drop_in_place$LT$bat..assets..HighlightingAssets$GT$::h6be43cd2c3f1f295(
        &result_1);
}
