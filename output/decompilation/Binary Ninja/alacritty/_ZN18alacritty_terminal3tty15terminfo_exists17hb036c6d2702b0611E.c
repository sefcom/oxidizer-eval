
  uint64_t alacritty_terminal::tty::terminfo_exists::hb036c6d2702b0611()

{
    uint64_t rbp;
    uint64_t var_8 = rbp;
    uint64_t rbx = 1;
    uint64_t rax;
    uint64_t rdx;
    rax = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(1, "alacrittyxterm-256colorCOLORTERM…", 9);
    
    if (!rax)
        rdx = rax;
    
    if (rax)
        rbx = rax;
    
    uint64_t var_168 = rdx;
    uint64_t var_158 = rbx;
    uint64_t var_150 = rbx + rdx;
    char rax_2;
    int32_t rdx_1;
    rax_2 = core::str::validations::next_code_point::hd6db6f63b50941c2(&var_158, rbx);
    int32_t rax_3 = 0x110000;
    
    if (rax_2 & 1)
        rax_3 = rdx_1;
    
    uint64_t rcx = 0;
    
    if (rax_3 != 0x110000)
        rcx = rax_3;
    
    uint64_t var_198 = rcx;
    int64_t* var_1c0 = &var_198;
    uint64_t (* var_1b8)(int64_t* arg1, int64_t* arg2) = core::fmt::num::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$i64$GT$::fmt::h790a60f40feefc95;
    int128_t* const var_110 = &data_4e8b60;
    int64_t var_108 = 1;
    int64_t var_f0 = 0;
    int64_t** var_100 = &var_1c0;
    int64_t var_f8 = 1;
    int64_t var_60;
    core::option::Option$LT$T$GT$::map_or_else::h2801a126379f10f2(&var_60, &var_110);
    std::env::var_os::hd7146e273ce03f5c(&var_198);
    uint64_t rcx_1 = var_198;
    uint64_t var_190;
    uint64_t var_188;
    uint64_t var_148;
    
    if (-(rcx_1) != -0x8000000000000000)
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h53b11fd4ed117188(&var_110, var_190, var_188);
        int128_t* const rax_7 = var_110;
        std::path::Path::join::hbae7534d0ed9947b(&var_158, var_108, var_100, rbx);
        std::path::Path::join::hbae7534d0ed9947b(&var_1c0, var_150, var_148, 
            "alacrittyxterm-256colorCOLORTERM…");
        std::fs::metadata::h37a5ee4ea4f3ae9d(&var_110, var_1b8);
        int128_t* const r12_1 = var_110;
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h89e95d7730a9ff6c(r12_1, var_108);
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_1c0, var_1b8);
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_158, var_150);
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(rax_7, var_108);
        int128_t* const r12_2;
        
        if (r12_1 == 2)
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h53b11fd4ed117188(&var_110, var_190, var_188);
            int128_t* const r13_2 = var_110;
            std::path::Path::join::h4e2a8e523b728149(&var_158, var_108, var_100, &var_60);
            std::path::Path::join::hbae7534d0ed9947b(&var_1c0, var_150, var_148, 
                "alacrittyxterm-256colorCOLORTERM…");
            rbp = var_1b8;
            std::fs::metadata::h37a5ee4ea4f3ae9d(&var_110, rbp);
            r12_2 = var_110;
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h89e95d7730a9ff6c(r12_2, var_108);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_1c0, rbp);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_158, var_150);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(r13_2, var_108);
        }
        
        if (r12_1 == 2 && r12_2 == 2)
        {
            core::ptr::drop_in_place$LT$regex_syntax..ast..Error$GT$::h39aaa2436f8056ac(rcx_1, 
                var_190);
            goto label_9c0172;
        }
        
        core::ptr::drop_in_place$LT$regex_syntax..ast..Error$GT$::h39aaa2436f8056ac(rcx_1, var_190);
        rbp = 1;
    }
    else
    {
        core::ptr::drop_in_place$LT$std..env..VarError$GT$::h6c301a3b1abefb3f(-0x8000000000000000, 
            var_190);
        uint64_t var_180;
        home::home_dir::hfa89a945395e3159(&var_180);
        uint64_t rax_6 = var_180;
        uint64_t var_1b0;
        uint64_t var_178;
        
        if (rax_6 != -0x8000000000000000)
        {
            uint64_t var_170;
            std::path::Path::join::hbae7534d0ed9947b(&var_158, var_178, var_170, 
                ".terminfoTERMINFO_DIRSPREFIXetc/…");
            std::path::Path::join::hbae7534d0ed9947b(&var_1c0, var_150, var_148, rbx);
            std::path::Path::join::hbae7534d0ed9947b(&var_198, var_1b8, var_1b0, 
                "alacrittyxterm-256colorCOLORTERM…");
            std::fs::metadata::h37a5ee4ea4f3ae9d(&var_110, var_190);
            int128_t* const r12_3 = var_110;
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h89e95d7730a9ff6c(r12_3, var_108);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_198, var_190);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_1c0, var_1b8);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_158, var_150);
            int128_t* const r12_4;
            
            if (r12_3 == 2)
            {
                std::path::Path::join::hbae7534d0ed9947b(&var_158, var_178, var_170, 
                    ".terminfoTERMINFO_DIRSPREFIXetc/…");
                std::path::Path::join::h4e2a8e523b728149(&var_1c0, var_150, var_148, &var_60);
                std::path::Path::join::hbae7534d0ed9947b(&var_198, var_1b8, var_1b0, 
                    "alacrittyxterm-256colorCOLORTERM…");
                std::fs::metadata::h37a5ee4ea4f3ae9d(&var_110, var_190);
                r12_4 = var_110;
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h89e95d7730a9ff6c(r12_4, var_108);
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_198, 
                    var_190);
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_1c0, 
                    var_1b8);
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_158, 
                    var_150);
            }
            
            if (r12_3 == 2 && r12_4 == 2)
            {
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(rax_6, 
                    var_178);
                goto label_9c0172;
            }
            
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(rax_6, var_178);
            rbp = 1;
        }
        else
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h180e710fdbc308b1(-0x8000000000000000, var_178);
            label_9c0172:
            std::env::var::hc40ca77fbae151c0(&var_1c0, "TERMINFO_DIRSPREFIXetc/terminfol…");
            int64_t* rax_8 = var_1c0;
            
            if (rax_8 != 1)
            {
                int64_t* var_38_1 = rax_8;
                uint64_t var_1a8;
                _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(&var_148, 0x3a, var_1b0, var_1a8);
                var_158 = 0;
                var_150 = var_1a8;
                int16_t var_118_1 = 1;
                
                while (true)
                {
                    int64_t rax_10;
                    uint64_t rdx_20;
                    rax_10 =
                        core::str::iter::SplitInternal$LT$P$GT$::next::hc7e8c662c5479c79(&var_158);
                    
                    if (!rax_10)
                    {
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h451460d2d1836db3(
                            var_1b8, var_1b0);
                        goto label_9c03db;
                    }
                    
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h53b11fd4ed117188(&var_110, rax_10, rdx_20);
                    int128_t* const rax_11 = var_110;
                    std::path::Path::join::hbae7534d0ed9947b(&var_198, var_108, var_100, rbx);
                    std::path::Path::join::hbae7534d0ed9947b(&var_180, var_190, var_188, 
                        "alacrittyxterm-256colorCOLORTERM…");
                    std::fs::metadata::h37a5ee4ea4f3ae9d(&var_110, var_178);
                    int128_t* const r13_5 = var_110;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h89e95d7730a9ff6c(r13_5, var_108);
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_180, 
                        var_178);
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_198, 
                        var_190);
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(rax_11, 
                        var_108);
                    
                    if (r13_5 == 2)
                    {
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h53b11fd4ed117188(&var_110, rax_10, rdx_20);
                        int128_t* const r13_6 = var_110;
                        std::path::Path::join::h4e2a8e523b728149(&var_198, var_108, var_100, 
                            &var_60);
                        std::path::Path::join::hbae7534d0ed9947b(&var_180, var_190, var_188, 
                            "alacrittyxterm-256colorCOLORTERM…");
                        std::fs::metadata::h37a5ee4ea4f3ae9d(&var_110, var_178);
                        int128_t* const r12_6 = var_110;
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h89e95d7730a9ff6c(r12_6, var_108);
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(
                            var_180, var_178);
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(
                            var_198, var_190);
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(
                            r13_6, var_108);
                        
                        if (r12_6 == 2)
                            continue;
                    }
                    
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h451460d2d1836db3(
                        var_1b8, var_1b0);
                    break;
                }
                
                rbp = 1;
            }
            else
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h19b25d647e78b692(&var_1c0);
                label_9c03db:
                std::env::var::hc40ca77fbae151c0(&var_158, "PREFIXetc/terminfolib/terminfosh…");
                
                if (var_158 != 1)
                {
                    uint64_t rsi_113 = var_148;
                    uint64_t var_140;
                    std::path::Path::join::hbae7534d0ed9947b(&var_1c0, rsi_113, var_140, 
                        "etc/terminfolib/terminfoshare/te…");
                    std::path::Path::join::hbae7534d0ed9947b(&var_198, var_1b8, var_1b0, rbx);
                    std::path::Path::join::hbae7534d0ed9947b(&var_180, var_190, var_188, 
                        "alacrittyxterm-256colorCOLORTERM…");
                    std::fs::metadata::h37a5ee4ea4f3ae9d(&var_110, var_178);
                    int128_t* const r12_15 = var_110;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h89e95d7730a9ff6c(r12_15, var_108);
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_180, 
                        var_178);
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_198, 
                        var_190);
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_1c0, 
                        var_1b8);
                    
                    if (r12_15 == 2)
                    {
                        std::path::Path::join::hbae7534d0ed9947b(&var_1c0, rsi_113, var_140, 
                            "etc/terminfolib/terminfoshare/te…");
                        std::path::Path::join::h4e2a8e523b728149(&var_198, var_1b8, var_1b0, 
                            &var_60);
                        std::path::Path::join::hbae7534d0ed9947b(&var_180, var_190, var_188, 
                            "alacrittyxterm-256colorCOLORTERM…");
                        std::fs::metadata::h37a5ee4ea4f3ae9d(&var_110, var_178);
                        int128_t* const r12_16 = var_110;
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h89e95d7730a9ff6c(r12_16, var_108);
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(
                            var_180, var_178);
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(
                            var_198, var_190);
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(
                            var_1c0, var_1b8);
                        
                        if (r12_16 == 2)
                        {
                            std::path::Path::join::hbae7534d0ed9947b(&var_1c0, rsi_113, var_140, 
                                "lib/terminfoshare/terminfo");
                            std::path::Path::join::hbae7534d0ed9947b(&var_198, var_1b8, var_1b0, 
                                rbx);
                            std::path::Path::join::hbae7534d0ed9947b(&var_180, var_190, var_188, 
                                "alacrittyxterm-256colorCOLORTERM…");
                            std::fs::metadata::h37a5ee4ea4f3ae9d(&var_110, var_178);
                            int128_t* const r12_17 = var_110;
                            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h89e95d7730a9ff6c(r12_17, var_108);
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(
                                var_180, var_178);
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(
                                var_198, var_190);
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(
                                var_1c0, var_1b8);
                            
                            if (r12_17 == 2)
                            {
                                std::path::Path::join::hbae7534d0ed9947b(&var_1c0, rsi_113, 
                                    var_140, "lib/terminfoshare/terminfo");
                                std::path::Path::join::h4e2a8e523b728149(&var_198, var_1b8, 
                                    var_1b0, &var_60);
                                std::path::Path::join::hbae7534d0ed9947b(&var_180, var_190, 
                                    var_188, "alacrittyxterm-256colorCOLORTERM…");
                                std::fs::metadata::h37a5ee4ea4f3ae9d(&var_110, var_178);
                                int128_t* const r12_18 = var_110;
                                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h89e95d7730a9ff6c(r12_18, var_108);
                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_180, var_178);
                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_198, var_190);
                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_1c0, var_1b8);
                                
                                if (r12_18 == 2)
                                {
                                    std::path::Path::join::hbae7534d0ed9947b(&var_1c0, rsi_113, 
                                        var_140, "share/terminfo");
                                    std::path::Path::join::hbae7534d0ed9947b(&var_198, var_1b8, 
                                        var_1b0, rbx);
                                    std::path::Path::join::hbae7534d0ed9947b(&var_180, var_190, 
                                        var_188, "alacrittyxterm-256colorCOLORTERM…");
                                    std::fs::metadata::h37a5ee4ea4f3ae9d(&var_110, var_178);
                                    int128_t* const r12_19 = var_110;
                                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h89e95d7730a9ff6c(r12_19, var_108);
                                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_180, var_178);
                                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_198, var_190);
                                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_1c0, var_1b8);
                                    
                                    if (r12_19 == 2)
                                    {
                                        std::path::Path::join::hbae7534d0ed9947b(&var_1c0, rsi_113, 
                                            var_140, "share/terminfo");
                                        std::path::Path::join::h4e2a8e523b728149(&var_198, var_1b8, 
                                            var_1b0, &var_60);
                                        std::path::Path::join::hbae7534d0ed9947b(&var_180, var_190, 
                                            var_188, "alacrittyxterm-256colorCOLORTERM…");
                                        std::fs::metadata::h37a5ee4ea4f3ae9d(&var_110, var_178);
                                        int128_t* const r12_20 = var_110;
                                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h89e95d7730a9ff6c(r12_20, var_108);
                                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_180, var_178);
                                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_198, var_190);
                                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_1c0, var_1b8);
                                        
                                        if (r12_20 == 2)
                                        {
                                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_150, rsi_113);
                                            goto label_9c040d;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_150, 
                        rsi_113);
                    rbp = 1;
                }
                else
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h19b25d647e78b692(&var_158);
                    label_9c040d:
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h53b11fd4ed117188(&var_110, "/etc/terminfo/lib/terminfo/usr/s…", 0xd);
                    int128_t* const r15_5 = var_110;
                    std::path::Path::join::hbae7534d0ed9947b(&var_158, var_108, var_100, rbx);
                    std::path::Path::join::hbae7534d0ed9947b(&var_1c0, var_150, var_148, 
                        "alacrittyxterm-256colorCOLORTERM…");
                    std::fs::metadata::h37a5ee4ea4f3ae9d(&var_110, var_1b8);
                    int128_t* const r13_7 = var_110;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h89e95d7730a9ff6c(r13_7, var_108);
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_1c0, 
                        var_1b8);
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_158, 
                        var_150);
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(r15_5, 
                        var_108);
                    rbp = 1;
                    
                    if (r13_7 == 2)
                    {
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h53b11fd4ed117188(&var_110, "/etc/terminfo/lib/terminfo/usr/s…", 0xd);
                        int128_t* const r15_6 = var_110;
                        std::path::Path::join::h4e2a8e523b728149(&var_158, var_108, var_100, 
                            &var_60);
                        std::path::Path::join::hbae7534d0ed9947b(&var_1c0, var_150, var_148, 
                            "alacrittyxterm-256colorCOLORTERM…");
                        std::fs::metadata::h37a5ee4ea4f3ae9d(&var_110, var_1b8);
                        int128_t* const r13_8 = var_110;
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h89e95d7730a9ff6c(r13_8, var_108);
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(
                            var_1c0, var_1b8);
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(
                            var_158, var_150);
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(
                            r15_6, var_108);
                        
                        if (r13_8 == 2)
                        {
                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h53b11fd4ed117188(&var_110, "/lib/terminfo/usr/share/terminfo…", 0xd);
                            int128_t* const r15_7 = var_110;
                            std::path::Path::join::hbae7534d0ed9947b(&var_158, var_108, var_100, 
                                rbx);
                            std::path::Path::join::hbae7534d0ed9947b(&var_1c0, var_150, var_148, 
                                "alacrittyxterm-256colorCOLORTERM…");
                            std::fs::metadata::h37a5ee4ea4f3ae9d(&var_110, var_1b8);
                            int128_t* const r13_9 = var_110;
                            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h89e95d7730a9ff6c(r13_9, var_108);
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(
                                var_1c0, var_1b8);
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(
                                var_158, var_150);
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(
                                r15_7, var_108);
                            
                            if (r13_9 == 2)
                            {
                                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h53b11fd4ed117188(&var_110, "/lib/terminfo/usr/share/terminfo…", 0xd);
                                int128_t* const r15_8 = var_110;
                                std::path::Path::join::h4e2a8e523b728149(&var_158, var_108, 
                                    var_100, &var_60);
                                std::path::Path::join::hbae7534d0ed9947b(&var_1c0, var_150, 
                                    var_148, "alacrittyxterm-256colorCOLORTERM…");
                                std::fs::metadata::h37a5ee4ea4f3ae9d(&var_110, var_1b8);
                                int128_t* const r13_10 = var_110;
                                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h89e95d7730a9ff6c(r13_10, var_108);
                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_1c0, var_1b8);
                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_158, var_150);
                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(r15_8, var_108);
                                
                                if (r13_10 == 2)
                                {
                                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h53b11fd4ed117188(&var_110, "/usr/share/terminfo/boot/system/…", 0x13);
                                    int128_t* const r15_9 = var_110;
                                    std::path::Path::join::hbae7534d0ed9947b(&var_158, var_108, 
                                        var_100, rbx);
                                    std::path::Path::join::hbae7534d0ed9947b(&var_1c0, var_150, 
                                        var_148, "alacrittyxterm-256colorCOLORTERM…");
                                    std::fs::metadata::h37a5ee4ea4f3ae9d(&var_110, var_1b8);
                                    int128_t* const r13_11 = var_110;
                                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h89e95d7730a9ff6c(r13_11, var_108);
                                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_1c0, var_1b8);
                                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_158, var_150);
                                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(r15_9, var_108);
                                    
                                    if (r13_11 == 2)
                                    {
                                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h53b11fd4ed117188(&var_110, "/usr/share/terminfo/boot/system/…", 0x13);
                                        int128_t* const r15_10 = var_110;
                                        std::path::Path::join::h4e2a8e523b728149(&var_158, var_108, 
                                            var_100, &var_60);
                                        std::path::Path::join::hbae7534d0ed9947b(&var_1c0, var_150, 
                                            var_148, "alacrittyxterm-256colorCOLORTERM…");
                                        std::fs::metadata::h37a5ee4ea4f3ae9d(&var_110, var_1b8);
                                        int128_t* const r13_12 = var_110;
                                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h89e95d7730a9ff6c(r13_12, var_108);
                                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_1c0, var_1b8);
                                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_158, var_150);
                                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(r15_10, var_108);
                                        
                                        if (r13_12 == 2)
                                        {
                                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h53b11fd4ed117188(&var_110, "/boot/system/data/terminfo.termi…", 0x1a);
                                            int128_t* const r15_11 = var_110;
                                            std::path::Path::join::hbae7534d0ed9947b(&var_158, 
                                                var_108, var_100, rbx);
                                            std::path::Path::join::hbae7534d0ed9947b(&var_1c0, 
                                                var_150, var_148, 
                                                "alacrittyxterm-256colorCOLORTERM…");
                                            std::fs::metadata::h37a5ee4ea4f3ae9d(&var_110, var_1b8);
                                            int128_t* const r13_13 = var_110;
                                            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h89e95d7730a9ff6c(r13_13, var_108);
                                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_1c0, var_1b8);
                                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_158, var_150);
                                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(r15_11, var_108);
                                            
                                            if (r13_13 == 2)
                                            {
                                                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h53b11fd4ed117188(&var_110, "/boot/system/data/terminfo.termi…", 
                                                    0x1a);
                                                int128_t* const r15_12 = var_110;
                                                std::path::Path::join::h4e2a8e523b728149(&var_158, 
                                                    var_108, var_100, &var_60);
                                                std::path::Path::join::hbae7534d0ed9947b(&var_1c0, 
                                                    var_150, var_148, 
                                                    "alacrittyxterm-256colorCOLORTERM…");
                                                std::fs::metadata::h37a5ee4ea4f3ae9d(&var_110, 
                                                    var_1b8);
                                                int128_t* const r13_14 = var_110;
                                                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h89e95d7730a9ff6c(r13_14, var_108);
                                                rbp = r13_14 != 2;
                                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_1c0, var_1b8);
                                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_158, var_150);
                                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(r15_12, var_108);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    int64_t var_58;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h451460d2d1836db3(var_60, var_58);
    return rbp;
}
