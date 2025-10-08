
  int64_t just::compiler::Compiler::compile::h029c05ce59997e38(int64_t* arg1, int64_t* arg2, int64_t arg3, uint64_t arg4)

{
    int64_t* r15 = arg1;
    int64_t rax;
    int64_t rdx;
    rax = std::thread::local::LocalKey$LT$T$GT$::with::hdd70f1898d43baa2();
    int128_t var_8c8 = *data_82bd10;
    int128_t zmm0 = data_82bd20;
    int64_t var_8a0 = rdx;
    int64_t var_920 = 0;
    int64_t var_918 = 8;
    int64_t var_910 = 0;
    int64_t rax_1;
    int64_t rdx_1;
    rax_1 = std::thread::local::LocalKey$LT$T$GT$::with::hdd70f1898d43baa2();
    int128_t var_808 = data_82bd20;
    int128_t var_818 = *data_82bd10;
    int64_t var_7f8 = rax_1;
    int64_t var_7f0 = rdx_1;
    int64_t rax_2;
    int64_t rdx_2;
    rax_2 = std::thread::local::LocalKey$LT$T$GT$::with::hdd70f1898d43baa2();
    int128_t var_7d8 = data_82bd20;
    int128_t var_7e8 = *data_82bd10;
    int64_t var_7c0 = rdx_2;
    int64_t var_9b8 = 0;
    int128_t* var_9b0 = 8;
    int64_t var_9a8 = 0;
    int64_t var_718;
    just::source::Source::root::hc15322b4e8fc1460(&var_718, arg3, arg4);
    alloc::vec::Vec$LT$T$C$A$GT$::push::hdd9fa74465954247(&var_9b8, &var_718);
    int64_t rbx = var_9a8;
    int128_t var_998;
    uint64_t var_988;
    int64_t var_898;
    int128_t var_710;
    int128_t var_700;
    int128_t var_6f0;
    int128_t var_6e0;
    int128_t var_6d0;
    int128_t var_6c0;
    int64_t var_398;
    int128_t var_370;
    int128_t var_350;
    
    if (!rbx)
    {
        label_65ac4a:
        var_898 = -0x8000000000000000;
    }
    else
    {
        int64_t* var_a20_1 = r15;
        
        while (true)
        {
            rbx -= 1;
            int64_t rcx_1 = rbx << 7;
            int128_t zmm1_1 = *(var_9b0 + rcx_1 + 0x10);
            int128_t zmm2_1 = *(var_9b0 + rcx_1 + 0x20);
            int128_t zmm3_1 = *(var_9b0 + rcx_1 + 0x30);
            var_898 = *(var_9b0 + rcx_1);
            int128_t var_858_1 = *(var_9b0 + rcx_1 + 0x40);
            int128_t var_848_1 = *(var_9b0 + rcx_1 + 0x50);
            
            if (var_898 == -0x8000000000000000)
                break;
            
            int96_t var_328_1 = (*(var_9b0 + rcx_1 + 0x70));
            int128_t var_338 = *(var_9b0 + rcx_1 + 0x60);
            var_350 = var_848_1;
            char var_358;
            var_358 = var_858_1;
            int128_t zmm0_3 = var_898;
            var_370 = zmm3_1;
            var_398 = zmm0_3;
            
            if (!hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h0362f06993c1c474(
                &var_818, &*var_370[8]))
            {
                int64_t var_360;
                just::loader::Loader::load::hbf3396d2a4dee187(&var_718, arg2, arg3, arg4, var_360, 
                    var_358);
                char rax_5 = var_718;
                
                if (rax_5 != 0x38)
                {
                    int32_t rcx_25 = *var_718[1];
                    *(r15 + 0xc) = *var_718[4];
                    *(r15 + 9) = rcx_25;
                    *(r15 + 0x30) = var_6f0;
                    *(r15 + 0x40) = var_6e0;
                    *(r15 + 0x50) = var_6d0;
                    *(r15 + 0x60) = var_6c0;
                    r15[1] = rax_5;
                    *(r15 + 0x10) = var_710;
                    *(r15 + 0x20) = var_700;
                    label_65b420:
                    *r15 = -0x8000000000000000;
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h31c8eb8c4d0056c0(&var_398);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$just..binding..Binding$LT$just..expression..Expression$GT$$GT$$GT$::hfc639b08ed3124bb(zmm2_1, *zmm2_1[8]);
                    core::ptr::drop_in_place$LT$core..option..Option$LT$just..namepath..Namepath$GT$$GT$::h24538336dfc925c3(&var_338);
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(
                        &*var_370[8]);
                }
                else
                {
                    int64_t r12_1 = var_710;
                    uint64_t rbx_1 = *var_710[8];
                    int64_t rbp_1 = var_700;
                    int64_t rax_6 = *var_700[8];
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_718, r12_1, rbx_1);
                    int64_t var_988_1 = *var_710[8];
                    var_998 = var_718;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hfd422a69ba548d71(&var_920, &var_998);
                    int64_t r8_3 = just::lexer::Lexer::lex::h69602b08cd4f3247(&var_718, r12_1, 
                        rbx_1, rbp_1, rax_6);
                    char rcx_4 = var_6d0;
                    int64_t rax_8 = var_718;
                    int64_t r9_2 = var_710;
                    int64_t rax_9 = *var_710[8];
                    
                    if (rcx_4 != 0x25)
                    {
                        *(r15 + 0x48) = var_6e0;
                        *(r15 + 0x38) = var_6f0;
                        *(r15 + 0x28) = var_700;
                        *(r15 + 0x59) = *var_6d0[1];
                        *(r15 + 0x5c) = *var_6d0[4];
                        r15[1] = 0xc;
                        r15[2] = rax_8;
                        r15[3] = r9_2;
                        r15[4] = rax_9;
                        r15[0xb] = rcx_4;
                        goto label_65b420;
                    }
                    
                    if (var_338 == -0x8000000000000000)
                        r8_3 = 0;
                    
                    r15 = 1;
                    int64_t var_a40;
                    var_a40 = var_350;
                    just::parser::Parser::parse::hc11613bffd6ff44c(&var_718, *var_328_1[8], 
                        *zmm2_1[8], var_370, r8_3, r9_2, rax_9);
                    int64_t rax_10 = var_718;
                    
                    if (rax_10 == -0x8000000000000000)
                    {
                        *var_718[7] = var_710;
                        var_a20_1[1] = 0xc;
                        *(var_a20_1 + 9) = var_718;
                        *(var_a20_1 + 0x19) = var_700;
                        *(var_a20_1 + 0x29) = var_6f0;
                        *(var_a20_1 + 0x39) = var_6e0;
                        *(var_a20_1 + 0x49) = var_6d0;
                        var_a20_1[0xb] = *var_6d0[7];
                        *var_a20_1 = -0x8000000000000000;
                        r15 = 1;
                    }
                    else
                    {
                        int128_t var_6b0;
                        int128_t var_40_1 = var_6b0;
                        int128_t var_50_1 = var_6c0;
                        int128_t var_60_1 = var_6d0;
                        int128_t var_70_1 = var_6e0;
                        int128_t var_80_1 = var_6f0;
                        int128_t var_90_1 = var_700;
                        int64_t var_a8 = rax_10;
                        r15 = 1;
                        _$LT$just..module_path..ModulePath$u20$as$u20$core..convert..TryFrom$LT$$RF$$u5b$$RF$str$u5d$$GT$$GT$::try_from::_$u7b$$u7b$closure$u7d$$u7d$::ha7dde365619bc2c0(&var_718, var_360, var_358);
                        uint64_t var_9e8_1 = *var_710[8];
                        int128_t var_9f8 = var_718;
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_718, r12_1, rbx_1);
                        int64_t var_988_2 = *var_710[8];
                        var_998 = var_718;
                        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h31c492fe8a635b34(
                            &var_718, &var_818, &var_9f8, &var_998);
                        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h35203c2827c71cb0(&var_718);
                        _$LT$just..module_path..ModulePath$u20$as$u20$core..convert..TryFrom$LT$$RF$$u5b$$RF$str$u5d$$GT$$GT$::try_from::_$u7b$$u7b$closure$u7d$$u7d$::ha7dde365619bc2c0(&var_718, var_360, var_358);
                        var_988 = *var_710[8];
                        var_998 = var_718;
                        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h88dfb442d3e81d98(
                            &var_7e8, &var_998, rbp_1, rax_6);
                        int64_t r14_1 = *var_710[8];
                        
                        if (!r14_1)
                        {
                            label_65ab7c:
                            int64_t var_9e8_2 = var_358;
                            var_9f8 = var_370;
                            _$LT$just..ast..Ast$u20$as$u20$core..clone..Clone$GT$::clone::h20039f0ff4dbb51e(&var_718, &var_a8);
                            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hb5294498aec23d08(
                                &var_998, &var_8c8, &var_9f8, &var_718);
                            core::ptr::drop_in_place$LT$core..option..Option$LT$just..ast..Ast$GT$$GT$::h7f200deecf76b3a0(&var_998);
                            core::ptr::drop_in_place$LT$just..ast..Ast$GT$::he88877c928d48d3e(
                                &var_a8);
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..name..Name$GT$$GT$::h3abfcfc45501c2a2(rax_8, r9_2);
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h31c8eb8c4d0056c0(&var_398);
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$just..binding..Binding$LT$just..expression..Expression$GT$$GT$$GT$::hfc639b08ed3124bb(zmm2_1, *zmm2_1[8]);
                            core::ptr::drop_in_place$LT$core..option..Option$LT$just..namepath..Namepath$GT$$GT$::h24538336dfc925c3(&var_338);
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(
                                &var_350);
                            r15 = var_a20_1;
                            
                            if (!rbx)
                                goto label_65ac4a;
                            
                            continue;
                        }
                        else
                        {
                            void* rax_14 = var_710;
                            int64_t rbp_2 = 0;
                            
                            while (true)
                            {
                                int64_t rax_17 =
                                    *(rax_14 + 0xc8 + rbp_2 - 0xc8) ^ 0x8000000000000000;
                                int128_t var_a18;
                                char* var_a10;
                                uint64_t var_a08;
                                
                                if (rax_17 == 3)
                                {
                                    char* rax_22;
                                    uint64_t rdx_17;
                                    rax_22 = std::path::Path::parent::hef287f60afa56900(var_360, 
                                        var_358);
                                    
                                    if (!rax_22)
                                    {
                                        core::option::unwrap_failed::h893f57cb7db71cb7();
                                        /* no return */
                                    }
                                    
                                    just::compiler::Compiler::expand_tilde::he94855b8847afd9b(
                                        &var_718, *(rax_14 + 0xc8 + rbp_2 - 0xb8), 
                                        *(rax_14 + 0xc8 + rbp_2 - 0xb0));
                                    char rax_23 = var_718;
                                    
                                    if (rax_23 != 0x38)
                                    {
                                        int128_t zmm0_13 = *var_718[1];
                                        var_998 = var_710;
                                        var_998 = zmm0_13;
                                        var_a20_1[0xd] = *var_6c0[8];
                                        *(var_a20_1 + 0x58) = var_6d0;
                                        *(var_a20_1 + 0x48) = var_6e0;
                                        *(var_a20_1 + 0x38) = var_6f0;
                                        *(var_a20_1 + 0x28) = var_700;
                                        *(var_a20_1 + 0x18) = var_998;
                                        *(var_a20_1 + 9) = var_998;
                                        var_a20_1[1] = rax_23;
                                        *var_a20_1 = -0x8000000000000000;
                                        r15 = 1;
                                        core::ptr::drop_in_place$LT$just..ast..Ast$GT$::he88877c928d48d3e(&var_a8);
                                        break;
                                    }
                                    
                                    var_988 = var_700;
                                    var_998 = var_710;
                                    int128_t var_3b8 = var_998;
                                    uint64_t var_3a8_1 = var_988;
                                    std::path::Path::join::h8b41166b2967df99(&var_9f8, rax_22, 
                                        rdx_17, &var_3b8);
                                    _$LT$$RF$std..path..Path$u20$as$u20$lexiclean..Lexiclean$GT$::lexiclean::h6a5ff6ae87480de6(&var_a18, *var_9f8[8], var_9e8_1);
                                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_9f8);
                                    
                                    if (!std::path::Path::is_file::h6e28d87ff76ffc41(var_a10, 
                                        var_a08))
                                    {
                                        if (!*(rax_14 + 0xc8 + rbp_2 - 0x30))
                                        {
                                            *var_6e0[0xf] = *(rax_14 + rbp_2 + 0x90);
                                            int128_t zmm1_7 = *(rax_14 + rbp_2 + 0x60);
                                            int128_t zmm2_7 = *(rax_14 + rbp_2 + 0x70);
                                            int128_t zmm3_6 = *(rax_14 + rbp_2 + 0x80);
                                            *var_718[7] = *(rax_14 + rbp_2 + 0x50);
                                            var_a20_1[1] = 0x21;
                                            *(var_a20_1 + 9) = var_718;
                                            *(var_a20_1 + 0x19) = zmm1_7;
                                            *(var_a20_1 + 0x29) = zmm2_7;
                                            *(var_a20_1 + 0x39) = zmm3_6;
                                            var_a20_1[9] = *var_6e0[7];
                                            var_a20_1[0xa] = *var_6e0[0xf];
                                            *var_a20_1 = -0x8000000000000000;
                                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_a18);
                                            r15 = 1;
                                            core::ptr::drop_in_place$LT$just..ast..Ast$GT$::he88877c928d48d3e(&var_a8);
                                            break;
                                        }
                                        
                                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_a18);
                                    }
                                    else
                                    {
                                        if (_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::hba127b94f5894115(&var_a18, zmm1_1, *zmm1_1[8]))
                                        {
                                            var_a20_1[7] = var_a08;
                                            *(var_a20_1 + 0x28) = var_a18;
                                            *var_718[7] = var_370;
                                            *var_710[0xf] = var_358;
                                            var_a20_1[1] = 8;
                                            *(var_a20_1 + 9) = var_718;
                                            var_a20_1[3] = *var_710[7];
                                            var_a20_1[4] = *var_710[0xf];
                                            *var_a20_1 = -0x8000000000000000;
                                            r15 = nullptr;
                                            core::ptr::drop_in_place$LT$just..ast..Ast$GT$::he88877c928d48d3e(&var_a8);
                                            break;
                                        }
                                        
                                        _$LT$just..module_path..ModulePath$u20$as$u20$core..convert..TryFrom$LT$$RF$$u5b$$RF$str$u5d$$GT$$GT$::try_from::_$u7b$$u7b$closure$u7d$$u7d$::ha7dde365619bc2c0(&var_718, var_a10, var_a08);
                                        var_998 = var_718;
                                        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h35203c2827c71cb0(rax_14 + 0x38 + rbp_2);
                                        *(rax_14 + 0xc8 + rbp_2 - 0x80) = *var_710[8];
                                        *(rax_14 + 0xc8 + rbp_2 - 0x90) = var_998;
                                        var_988 = var_a08;
                                        var_998 = var_a18;
                                        just::source::Source::import::h2eeb856d6368391e(&var_718, 
                                            &var_398, &var_998, *(rax_14 + 0xc8 + rbp_2 - 0x40));
                                        alloc::vec::Vec$LT$T$C$A$GT$::push::hdd9fa74465954247(
                                            &var_9b8, &var_718);
                                    }
                                }
                                else if (rax_17 == 4)
                                {
                                    char* rax_18;
                                    uint64_t rdx_15;
                                    rax_18 = std::path::Path::parent::hef287f60afa56900(var_360, 
                                        var_358);
                                    
                                    if (!rax_18)
                                    {
                                        core::option::unwrap_failed::h893f57cb7db71cb7();
                                        /* no return */
                                    }
                                    
                                    int64_t rsi_14 = -0x8000000000000000;
                                    int128_t zmm0_12;
                                    
                                    if (*(rax_14 + 0xc8 + rbp_2 - 0x78) != -0x8000000000000000)
                                    {
                                        just::compiler::Compiler::expand_tilde::he94855b8847afd9b(
                                            &var_718, *(rax_14 + 0xc8 + rbp_2 - 0x70), 
                                            *(rax_14 + 0xc8 + rbp_2 - 0x68));
                                        uint32_t rax_20 = var_718;
                                        int32_t rcx_9 = *var_718[1];
                                        int32_t rsi_16 = *var_718[4];
                                        int64_t rcx_10 = var_710;
                                        var_9f8 = var_710;
                                        int64_t rsi_17 = *var_6c0[8];
                                        var_988 = var_6f0;
                                        var_998 = var_700;
                                        rsi_14 = -0x8000000000000000;
                                        
                                        if (rax_20 != 0x39)
                                        {
                                            if (rax_20 != 0x38)
                                            {
                                                *(var_a20_1 + 0xc) = rsi_16;
                                                *(var_a20_1 + 9) = rcx_9;
                                                var_a18 = var_9f8;
                                                var_a20_1[0xd] = rsi_17;
                                                zmm0_12 = var_998;
                                                *(var_a20_1 + 0x58) = var_6d0;
                                                *(var_a20_1 + 0x48) = var_6e0;
                                                *(var_a20_1 + 0x38) = var_988;
                                                *(var_a20_1 + 0x28) = zmm0_12;
                                                zmm0_12 = var_a18;
                                                int128_t var_8e8_3 = zmm0_12;
                                                *(var_a20_1 + 0x18) = zmm0_12;
                                                var_a20_1[1] = rax_20;
                                                var_a20_1[2] = rcx_10;
                                                *var_a20_1 = -0x8000000000000000;
                                                r15 = 1;
                                                core::ptr::drop_in_place$LT$just..ast..Ast$GT$::he88877c928d48d3e(&var_a8);
                                                break;
                                                break;
                                            }
                                            
                                            var_a18 = var_9f8;
                                            rsi_14 = rcx_10;
                                        }
                                    }
                                    
                                    zmm0_12 = var_a18;
                                    int128_t var_8e8_1 = zmm0_12;
                                    int64_t var_900 = rsi_14;
                                    int64_t var_958_2 = *(rax_14 + 0xc8 + rbp_2 - 8);
                                    int128_t var_968_2 = *(rax_14 + 0xc8 + rbp_2 - 0x18);
                                    int128_t var_978_2 = *(rax_14 + 0xc8 + rbp_2 - 0x28);
                                    var_988 = *(rax_14 + 0xc8 + rbp_2 - 0x38);
                                    var_998 = *(rax_14 + 0xc8 + rbp_2 - 0x48);
                                    int64_t r8_4;
                                    
                                    if (rsi_14 == -0x8000000000000000)
                                        r8_4 = 0;
                                    else
                                        r8_4 = zmm0_12;
                                    
                                    just::compiler::Compiler::find_module_file::h693ba5e762d20c81(
                                        &var_718, rax_18, rdx_15, &var_998, r8_4, *zmm0_12[8]);
                                    char rax_32 = var_718;
                                    
                                    if (rax_32 != 0x38)
                                    {
                                        int32_t rcx_17 = *var_718[1];
                                        *(var_a20_1 + 0xc) = *var_718[4];
                                        *(var_a20_1 + 9) = rcx_17;
                                        var_9f8 = var_710;
                                        var_a20_1[0xd] = *var_6c0[8];
                                        *(var_a20_1 + 0x58) = var_6d0;
                                        *(var_a20_1 + 0x48) = var_6e0;
                                        *(var_a20_1 + 0x38) = var_6f0;
                                        *(var_a20_1 + 0x28) = var_700;
                                        *(var_a20_1 + 0x18) = var_9f8;
                                        var_a20_1[1] = rax_32;
                                        var_a20_1[2] = var_710;
                                        *var_a20_1 = -0x8000000000000000;
                                        r15 = 1;
                                        label_65b2f4:
                                        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h35203c2827c71cb0(&var_900);
                                        core::ptr::drop_in_place$LT$just..ast..Ast$GT$::he88877c928d48d3e(&var_a8);
                                        break;
                                    }
                                    
                                    int64_t rax_33 = var_710;
                                    
                                    if (rax_33 == -0x8000000000000000)
                                    {
                                        if (!*(rax_14 + 0xc8 + rbp_2))
                                        {
                                            *var_6e0[0xf] = *(rax_14 + rbp_2 + 0xc0);
                                            int128_t zmm1_8 = *(rax_14 + rbp_2 + 0x90);
                                            int128_t zmm2_8 = *(rax_14 + rbp_2 + 0xa0);
                                            int128_t zmm3_7 = *(rax_14 + rbp_2 + 0xb0);
                                            *var_718[7] = *(rax_14 + rbp_2 + 0x80);
                                            var_a20_1[1] = 0x22;
                                            *(var_a20_1 + 9) = var_718;
                                            *(var_a20_1 + 0x19) = zmm1_8;
                                            *(var_a20_1 + 0x29) = zmm2_8;
                                            *(var_a20_1 + 0x39) = zmm3_7;
                                            var_a20_1[9] = *var_6e0[7];
                                            var_a20_1[0xa] = *var_6e0[0xf];
                                            *var_a20_1 = -0x8000000000000000;
                                            r15 = 1;
                                            goto label_65b2f4;
                                        }
                                        
                                        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h35203c2827c71cb0(&var_900);
                                    }
                                    else
                                    {
                                        var_a18 = rax_33;
                                        var_a10 = var_710;
                                        
                                        if (_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::hba127b94f5894115(&var_a18, zmm1_1, *zmm1_1[8]))
                                        {
                                            var_a20_1[7] = var_a08;
                                            *(var_a20_1 + 0x28) = var_a18;
                                            *var_718[7] = var_370;
                                            *var_710[0xf] = var_358;
                                            var_a20_1[1] = 8;
                                            *(var_a20_1 + 9) = var_718;
                                            var_a20_1[3] = *var_710[7];
                                            var_a20_1[4] = *var_710[0xf];
                                            *var_a20_1 = -0x8000000000000000;
                                            r15 = nullptr;
                                            goto label_65b2f4;
                                        }
                                        
                                        _$LT$just..module_path..ModulePath$u20$as$u20$core..convert..TryFrom$LT$$RF$$u5b$$RF$str$u5d$$GT$$GT$::try_from::_$u7b$$u7b$closure$u7d$$u7d$::ha7dde365619bc2c0(&var_718, var_a10, var_a08);
                                        var_998 = var_718;
                                        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h35203c2827c71cb0(rax_14 + 0x20 + rbp_2);
                                        *(rax_14 + 0xc8 + rbp_2 - 0x98) = *var_710[8];
                                        *(rax_14 + 0xc8 + rbp_2 - 0xa8) = var_998;
                                        int64_t var_958_3 = *(rax_14 + 0xc8 + rbp_2 - 8);
                                        int128_t var_968_3 = *(rax_14 + 0xc8 + rbp_2 - 0x18);
                                        int128_t var_978_3 = *(rax_14 + 0xc8 + rbp_2 - 0x28);
                                        var_988 = *(rax_14 + 0xc8 + rbp_2 - 0x38);
                                        var_998 = *(rax_14 + 0xc8 + rbp_2 - 0x48);
                                        var_9e8_1 = var_a08;
                                        var_9f8 = var_a18;
                                        just::source::Source::module::h8a09876a3d20f69d(&var_718, 
                                            &var_398, &var_998, &var_9f8);
                                        alloc::vec::Vec$LT$T$C$A$GT$::push::hdd9fa74465954247(
                                            &var_9b8, &var_718);
                                        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h35203c2827c71cb0(&var_900);
                                    }
                                }
                                rbp_2 += 0x100;
                                
                                if (r14_1 << 8 == rbp_2)
                                    goto label_65ab7c;
                            }
                        }
                    }
                    
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..name..Name$GT$$GT$::h3abfcfc45501c2a2(rax_8, r9_2);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h31c8eb8c4d0056c0(&var_398);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$just..binding..Binding$LT$just..expression..Expression$GT$$GT$$GT$::hfc639b08ed3124bb(zmm2_1, *zmm2_1[8]);
                    core::ptr::drop_in_place$LT$core..option..Option$LT$just..namepath..Namepath$GT$$GT$::h24538336dfc925c3(&var_338);
                    
                    if (r15)
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(
                            &*var_370[8]);
                }
                
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_350);
                goto label_65b471;
            }
            
            core::ptr::drop_in_place$LT$just..source..Source$GT$::hba42e36bd79a254e(&var_398);
            
            if (!rbx)
                goto label_65ac4a;
        }
    }
    
    core::ptr::drop_in_place$LT$core..option..Option$LT$just..source..Source$GT$$GT$::h40df8fb550687323(&var_898);
    var_898 = -0x8000000000000000;
    char var_358_1 = 0x25;
    just::analyzer::Analyzer::analyze::h647d89e635aa2068(&var_718, &var_8c8, &var_898, 8, 0, 
        var_918, var_910, &var_398, &var_818, arg3, arg4);
    int64_t rbx_6 = var_718;
    
    if (rbx_6 == -0x8000000000000000)
    {
        *var_718[7] = var_710;
        r15[1] = 0xc;
        *(r15 + 9) = var_718;
        *(r15 + 0x19) = var_700;
        *(r15 + 0x29) = var_6f0;
        *(r15 + 0x39) = var_6e0;
        *(r15 + 0x49) = var_6d0;
        r15[0xb] = *var_6d0[7];
        *r15 = -0x8000000000000000;
        label_65b471:
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..source..Source$GT$$GT$::h03225a9cc1e5fa8e(&var_9b8);
        core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$std..path..PathBuf$C$$RF$str$GT$$GT$::h28152c6871ee959f(&var_7e8);
        core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$std..path..PathBuf$C$std..path..PathBuf$GT$$GT$::hc5a70bc35adf0222(&var_818);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h31c8eb8c4d0056c0(&var_920);
        return core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$std..path..PathBuf$C$just..ast..Ast$GT$$GT$::h9c0425c40e3c1f24(&var_8c8);
    }
    
    void var_340;
    memcpy(&var_340, &var_6c0, 0x290);
    int128_t var_390_1 = var_710;
    int128_t var_380_1 = var_700;
    var_370 = var_6f0;
    int128_t var_360_1 = var_6e0;
    var_350 = var_6d0;
    var_898 = var_8c8;
    var_398 = rbx_6;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_998, arg3, arg4);
    uint64_t var_420_1 = var_988;
    int128_t var_430_1 = var_998;
    int128_t var_3e8_1 = var_7e8;
    int128_t var_3d8_1 = var_7d8;
    int128_t var_3c8_1 = rax_2;
    int128_t var_418_1 = var_898;
    int128_t var_408_1 = zmm0;
    int128_t var_3f8_1 = rax;
    memcpy(&var_718, &var_398, 0x2e8);
    memcpy(r15, &var_718, 0x360);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..source..Source$GT$$GT$::h03225a9cc1e5fa8e(
        &var_9b8);
    core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$std..path..PathBuf$C$std..path..PathBuf$GT$$GT$::hc5a70bc35adf0222(&var_818);
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h31c8eb8c4d0056c0(&var_920);
}
