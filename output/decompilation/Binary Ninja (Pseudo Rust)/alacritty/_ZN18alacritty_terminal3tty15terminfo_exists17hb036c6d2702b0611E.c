
  fn alacritty_terminal::tty::terminfo_exists::hb036c6d2702b0611() -> u64

{
    let mut rbp: u64;
    let var_8: u64 = rbp;
    let mut rbx: u64 = 1;
    let mut rax: u64;
    let mut rdx: u64;
    rax = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(1, "alacrittyxterm-256colorCOLORTERM…", 9);
    
    if rax == 0
    {
        rdx = rax;
    }
    
    if rax != 0
    {
        rbx = rax;
    }
    
    let var_168: u64 = rdx;
    let mut var_158: u64 = rbx;
    let mut var_150: u64 = rbx + rdx;
    let mut rax_2: i8;
    let mut rdx_1: i32;
    rax_2 = core::str::validations::next_code_point::hd6db6f63b50941c2(&var_158, rbx);
    let mut rax_3: i32 = 0x110000;
    
    if (rax_2 & 1) != 0
    {
        rax_3 = rdx_1;
    }
    
    let mut rcx: u64 = 0;
    
    if rax_3 != 0x110000
    {
        rcx = rax_3;
    }
    
    let mut var_198: u64 = rcx;
    let mut var_1c0: *mut i64 = &var_198;
    let var_1b8: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$i64$GT$::fmt::h790a60f40feefc95;
    let mut var_110: *mut i128 = &data_4e8b60;
    let var_108: i64 = 1;
    let var_f0: i64 = 0;
    let var_100: *mut *mut i64 = &var_1c0;
    let var_f8: i64 = 1;
    let mut var_60: i64;
    core::option::Option$LT$T$GT$::map_or_else::h2801a126379f10f2(&var_60, &var_110);
    std::env::var_os::hd7146e273ce03f5c(&var_198);
    let rcx_1: u64 = var_198;
    let var_190: u64;
    let var_188: u64;
    let mut var_148: u64;
    
    if -(rcx_1) != -0x8000000000000000
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h53b11fd4ed117188(&var_110, var_190, var_188);
        let rax_7: *mut i128 = var_110;
        std::path::Path::join::hbae7534d0ed9947b(&var_158, var_108, var_100, rbx);
        std::path::Path::join::hbae7534d0ed9947b(&var_1c0, var_150, var_148, 
            "alacrittyxterm-256colorCOLORTERM…");
        std::fs::metadata::h37a5ee4ea4f3ae9d(&var_110, var_1b8);
        let r12_1: *mut i128 = var_110;
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h89e95d7730a9ff6c(r12_1, var_108);
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_1c0, var_1b8);
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_158, var_150);
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(rax_7, var_108);
        let mut r12_2: *mut i128;
        
        if r12_1 == 2
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h53b11fd4ed117188(&var_110, var_190, var_188);
            let r13_2: *mut i128 = var_110;
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
        
        if r12_1 == 2 && r12_2 == 2
        {
            core::ptr::drop_in_place$LT$regex_syntax..ast..Error$GT$::h39aaa2436f8056ac(rcx_1, 
                var_190);
            goto 'label_9c0172;
        }
        
        core::ptr::drop_in_place$LT$regex_syntax..ast..Error$GT$::h39aaa2436f8056ac(rcx_1, var_190);
        rbp = 1;
    }
    else
    {
        core::ptr::drop_in_place$LT$std..env..VarError$GT$::h6c301a3b1abefb3f(-0x8000000000000000, 
            var_190);
        let mut var_180: u64;
        home::home_dir::hfa89a945395e3159(&var_180);
        let rax_6: u64 = var_180;
        let var_1b0: u64;
        let var_178: u64;
        
        if rax_6 != -0x8000000000000000
        {
            let var_170: u64;
            std::path::Path::join::hbae7534d0ed9947b(&var_158, var_178, var_170, 
                ".terminfoTERMINFO_DIRSPREFIXetc/…");
            std::path::Path::join::hbae7534d0ed9947b(&var_1c0, var_150, var_148, rbx);
            std::path::Path::join::hbae7534d0ed9947b(&var_198, var_1b8, var_1b0, 
                "alacrittyxterm-256colorCOLORTERM…");
            std::fs::metadata::h37a5ee4ea4f3ae9d(&var_110, var_190);
            let r12_3: *mut i128 = var_110;
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h89e95d7730a9ff6c(r12_3, var_108);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_198, var_190);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_1c0, var_1b8);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_158, var_150);
            let mut r12_4: *mut i128;
            
            if r12_3 == 2
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
            
            if r12_3 == 2 && r12_4 == 2
            {
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(rax_6, 
                    var_178);
                goto 'label_9c0172;
            }
            
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(rax_6, var_178);
            rbp = 1;
        }
        else
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h180e710fdbc308b1(-0x8000000000000000, var_178);
            'label_9c0172:
            std::env::var::hc40ca77fbae151c0(&var_1c0, "TERMINFO_DIRSPREFIXetc/terminfol…");
            let rax_8: *mut i64 = var_1c0;
            
            if rax_8 != 1
            {
                let var_38_1: *mut i64 = rax_8;
                let var_1a8: u64;
                _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(&var_148, 0x3a, var_1b0, var_1a8);
                var_158 = 0;
                var_150 = var_1a8;
                let var_118_1: i16 = 1;
                
                loop
                {
                    let mut rax_10: i64;
                    let mut rdx_20: u64;
                    rax_10 =
                        core::str::iter::SplitInternal$LT$P$GT$::next::hc7e8c662c5479c79(&var_158);
                    
                    if rax_10 == 0
                    {
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h451460d2d1836db3(
                            var_1b8, var_1b0);
                        goto 'label_9c03db;
                    }
                    
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h53b11fd4ed117188(&var_110, rax_10, rdx_20);
                    let rax_11: *mut i128 = var_110;
                    std::path::Path::join::hbae7534d0ed9947b(&var_198, var_108, var_100, rbx);
                    std::path::Path::join::hbae7534d0ed9947b(&var_180, var_190, var_188, 
                        "alacrittyxterm-256colorCOLORTERM…");
                    std::fs::metadata::h37a5ee4ea4f3ae9d(&var_110, var_178);
                    let r13_5: *mut i128 = var_110;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h89e95d7730a9ff6c(r13_5, var_108);
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_180, 
                        var_178);
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_198, 
                        var_190);
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(rax_11, 
                        var_108);
                    
                    if r13_5 == 2
                    {
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h53b11fd4ed117188(&var_110, rax_10, rdx_20);
                        let r13_6: *mut i128 = var_110;
                        std::path::Path::join::h4e2a8e523b728149(&var_198, var_108, var_100, 
                            &var_60);
                        std::path::Path::join::hbae7534d0ed9947b(&var_180, var_190, var_188, 
                            "alacrittyxterm-256colorCOLORTERM…");
                        std::fs::metadata::h37a5ee4ea4f3ae9d(&var_110, var_178);
                        let r12_6: *mut i128 = var_110;
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h89e95d7730a9ff6c(r12_6, var_108);
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(
                            var_180, var_178);
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(
                            var_198, var_190);
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(
                            r13_6, var_108);
                        
                        if r12_6 == 2
                        {
                            continue;
                        }
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
                'label_9c03db:
                std::env::var::hc40ca77fbae151c0(&var_158, "PREFIXetc/terminfolib/terminfosh…");
                
                if var_158 != 1
                {
                    let rsi_113: u64 = var_148;
                    let var_140: u64;
                    std::path::Path::join::hbae7534d0ed9947b(&var_1c0, rsi_113, var_140, 
                        "etc/terminfolib/terminfoshare/te…");
                    std::path::Path::join::hbae7534d0ed9947b(&var_198, var_1b8, var_1b0, rbx);
                    std::path::Path::join::hbae7534d0ed9947b(&var_180, var_190, var_188, 
                        "alacrittyxterm-256colorCOLORTERM…");
                    std::fs::metadata::h37a5ee4ea4f3ae9d(&var_110, var_178);
                    let r12_15: *mut i128 = var_110;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h89e95d7730a9ff6c(r12_15, var_108);
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_180, 
                        var_178);
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_198, 
                        var_190);
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_1c0, 
                        var_1b8);
                    
                    if r12_15 == 2
                    {
                        std::path::Path::join::hbae7534d0ed9947b(&var_1c0, rsi_113, var_140, 
                            "etc/terminfolib/terminfoshare/te…");
                        std::path::Path::join::h4e2a8e523b728149(&var_198, var_1b8, var_1b0, 
                            &var_60);
                        std::path::Path::join::hbae7534d0ed9947b(&var_180, var_190, var_188, 
                            "alacrittyxterm-256colorCOLORTERM…");
                        std::fs::metadata::h37a5ee4ea4f3ae9d(&var_110, var_178);
                        let r12_16: *mut i128 = var_110;
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h89e95d7730a9ff6c(r12_16, var_108);
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(
                            var_180, var_178);
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(
                            var_198, var_190);
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(
                            var_1c0, var_1b8);
                        
                        if r12_16 == 2
                        {
                            std::path::Path::join::hbae7534d0ed9947b(&var_1c0, rsi_113, var_140, 
                                "lib/terminfoshare/terminfo");
                            std::path::Path::join::hbae7534d0ed9947b(&var_198, var_1b8, var_1b0, 
                                rbx);
                            std::path::Path::join::hbae7534d0ed9947b(&var_180, var_190, var_188, 
                                "alacrittyxterm-256colorCOLORTERM…");
                            std::fs::metadata::h37a5ee4ea4f3ae9d(&var_110, var_178);
                            let r12_17: *mut i128 = var_110;
                            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h89e95d7730a9ff6c(r12_17, var_108);
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(
                                var_180, var_178);
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(
                                var_198, var_190);
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(
                                var_1c0, var_1b8);
                            
                            if r12_17 == 2
                            {
                                std::path::Path::join::hbae7534d0ed9947b(&var_1c0, rsi_113, 
                                    var_140, "lib/terminfoshare/terminfo");
                                std::path::Path::join::h4e2a8e523b728149(&var_198, var_1b8, 
                                    var_1b0, &var_60);
                                std::path::Path::join::hbae7534d0ed9947b(&var_180, var_190, 
                                    var_188, "alacrittyxterm-256colorCOLORTERM…");
                                std::fs::metadata::h37a5ee4ea4f3ae9d(&var_110, var_178);
                                let r12_18: *mut i128 = var_110;
                                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h89e95d7730a9ff6c(r12_18, var_108);
                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_180, var_178);
                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_198, var_190);
                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_1c0, var_1b8);
                                
                                if r12_18 == 2
                                {
                                    std::path::Path::join::hbae7534d0ed9947b(&var_1c0, rsi_113, 
                                        var_140, "share/terminfo");
                                    std::path::Path::join::hbae7534d0ed9947b(&var_198, var_1b8, 
                                        var_1b0, rbx);
                                    std::path::Path::join::hbae7534d0ed9947b(&var_180, var_190, 
                                        var_188, "alacrittyxterm-256colorCOLORTERM…");
                                    std::fs::metadata::h37a5ee4ea4f3ae9d(&var_110, var_178);
                                    let r12_19: *mut i128 = var_110;
                                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h89e95d7730a9ff6c(r12_19, var_108);
                                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_180, var_178);
                                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_198, var_190);
                                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_1c0, var_1b8);
                                    
                                    if r12_19 == 2
                                    {
                                        std::path::Path::join::hbae7534d0ed9947b(&var_1c0, rsi_113, 
                                            var_140, "share/terminfo");
                                        std::path::Path::join::h4e2a8e523b728149(&var_198, var_1b8, 
                                            var_1b0, &var_60);
                                        std::path::Path::join::hbae7534d0ed9947b(&var_180, var_190, 
                                            var_188, "alacrittyxterm-256colorCOLORTERM…");
                                        std::fs::metadata::h37a5ee4ea4f3ae9d(&var_110, var_178);
                                        let r12_20: *mut i128 = var_110;
                                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h89e95d7730a9ff6c(r12_20, var_108);
                                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_180, var_178);
                                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_198, var_190);
                                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_1c0, var_1b8);
                                        
                                        if r12_20 == 2
                                        {
                                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_150, rsi_113);
                                            goto 'label_9c040d;
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
                    'label_9c040d:
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h53b11fd4ed117188(&var_110, "/etc/terminfo/lib/terminfo/usr/s…", 0xd);
                    let r15_5: *mut i128 = var_110;
                    std::path::Path::join::hbae7534d0ed9947b(&var_158, var_108, var_100, rbx);
                    std::path::Path::join::hbae7534d0ed9947b(&var_1c0, var_150, var_148, 
                        "alacrittyxterm-256colorCOLORTERM…");
                    std::fs::metadata::h37a5ee4ea4f3ae9d(&var_110, var_1b8);
                    let r13_7: *mut i128 = var_110;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h89e95d7730a9ff6c(r13_7, var_108);
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_1c0, 
                        var_1b8);
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_158, 
                        var_150);
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(r15_5, 
                        var_108);
                    rbp = 1;
                    
                    if r13_7 == 2
                    {
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h53b11fd4ed117188(&var_110, "/etc/terminfo/lib/terminfo/usr/s…", 0xd);
                        let r15_6: *mut i128 = var_110;
                        std::path::Path::join::h4e2a8e523b728149(&var_158, var_108, var_100, 
                            &var_60);
                        std::path::Path::join::hbae7534d0ed9947b(&var_1c0, var_150, var_148, 
                            "alacrittyxterm-256colorCOLORTERM…");
                        std::fs::metadata::h37a5ee4ea4f3ae9d(&var_110, var_1b8);
                        let r13_8: *mut i128 = var_110;
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h89e95d7730a9ff6c(r13_8, var_108);
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(
                            var_1c0, var_1b8);
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(
                            var_158, var_150);
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(
                            r15_6, var_108);
                        
                        if r13_8 == 2
                        {
                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h53b11fd4ed117188(&var_110, "/lib/terminfo/usr/share/terminfo…", 0xd);
                            let r15_7: *mut i128 = var_110;
                            std::path::Path::join::hbae7534d0ed9947b(&var_158, var_108, var_100, 
                                rbx);
                            std::path::Path::join::hbae7534d0ed9947b(&var_1c0, var_150, var_148, 
                                "alacrittyxterm-256colorCOLORTERM…");
                            std::fs::metadata::h37a5ee4ea4f3ae9d(&var_110, var_1b8);
                            let r13_9: *mut i128 = var_110;
                            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h89e95d7730a9ff6c(r13_9, var_108);
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(
                                var_1c0, var_1b8);
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(
                                var_158, var_150);
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(
                                r15_7, var_108);
                            
                            if r13_9 == 2
                            {
                                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h53b11fd4ed117188(&var_110, "/lib/terminfo/usr/share/terminfo…", 0xd);
                                let r15_8: *mut i128 = var_110;
                                std::path::Path::join::h4e2a8e523b728149(&var_158, var_108, 
                                    var_100, &var_60);
                                std::path::Path::join::hbae7534d0ed9947b(&var_1c0, var_150, 
                                    var_148, "alacrittyxterm-256colorCOLORTERM…");
                                std::fs::metadata::h37a5ee4ea4f3ae9d(&var_110, var_1b8);
                                let r13_10: *mut i128 = var_110;
                                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h89e95d7730a9ff6c(r13_10, var_108);
                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_1c0, var_1b8);
                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_158, var_150);
                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(r15_8, var_108);
                                
                                if r13_10 == 2
                                {
                                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h53b11fd4ed117188(&var_110, "/usr/share/terminfo/boot/system/…", 0x13);
                                    let r15_9: *mut i128 = var_110;
                                    std::path::Path::join::hbae7534d0ed9947b(&var_158, var_108, 
                                        var_100, rbx);
                                    std::path::Path::join::hbae7534d0ed9947b(&var_1c0, var_150, 
                                        var_148, "alacrittyxterm-256colorCOLORTERM…");
                                    std::fs::metadata::h37a5ee4ea4f3ae9d(&var_110, var_1b8);
                                    let r13_11: *mut i128 = var_110;
                                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h89e95d7730a9ff6c(r13_11, var_108);
                                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_1c0, var_1b8);
                                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_158, var_150);
                                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(r15_9, var_108);
                                    
                                    if r13_11 == 2
                                    {
                                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h53b11fd4ed117188(&var_110, "/usr/share/terminfo/boot/system/…", 0x13);
                                        let r15_10: *mut i128 = var_110;
                                        std::path::Path::join::h4e2a8e523b728149(&var_158, var_108, 
                                            var_100, &var_60);
                                        std::path::Path::join::hbae7534d0ed9947b(&var_1c0, var_150, 
                                            var_148, "alacrittyxterm-256colorCOLORTERM…");
                                        std::fs::metadata::h37a5ee4ea4f3ae9d(&var_110, var_1b8);
                                        let r13_12: *mut i128 = var_110;
                                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h89e95d7730a9ff6c(r13_12, var_108);
                                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_1c0, var_1b8);
                                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_158, var_150);
                                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(r15_10, var_108);
                                        
                                        if r13_12 == 2
                                        {
                                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h53b11fd4ed117188(&var_110, "/boot/system/data/terminfo.termi…", 0x1a);
                                            let r15_11: *mut i128 = var_110;
                                            std::path::Path::join::hbae7534d0ed9947b(&var_158, 
                                                var_108, var_100, rbx);
                                            std::path::Path::join::hbae7534d0ed9947b(&var_1c0, 
                                                var_150, var_148, 
                                                "alacrittyxterm-256colorCOLORTERM…");
                                            std::fs::metadata::h37a5ee4ea4f3ae9d(&var_110, var_1b8);
                                            let r13_13: *mut i128 = var_110;
                                            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h89e95d7730a9ff6c(r13_13, var_108);
                                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_1c0, var_1b8);
                                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(var_158, var_150);
                                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h188b8bbb7742b9f2(r15_11, var_108);
                                            
                                            if r13_13 == 2
                                            {
                                                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h53b11fd4ed117188(&var_110, "/boot/system/data/terminfo.termi…", 
                                                    0x1a);
                                                let r15_12: *mut i128 = var_110;
                                                std::path::Path::join::h4e2a8e523b728149(&var_158, 
                                                    var_108, var_100, &var_60);
                                                std::path::Path::join::hbae7534d0ed9947b(&var_1c0, 
                                                    var_150, var_148, 
                                                    "alacrittyxterm-256colorCOLORTERM…");
                                                std::fs::metadata::h37a5ee4ea4f3ae9d(&var_110, 
                                                    var_1b8);
                                                let r13_14: *mut i128 = var_110;
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
    let var_58: i64;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h451460d2d1836db3(var_60, var_58);
    rbp
}
