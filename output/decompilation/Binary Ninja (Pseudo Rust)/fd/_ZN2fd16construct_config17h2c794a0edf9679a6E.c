
  fn fd::construct_config::h2c794a0edf9679a6(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: i64) -> i64

{
    let mut var_248: i128;
    let mut r14: u64;
    
    if *arg2.byte_offset(0x1e7) == 0
    {
        r14 = 1;
        
        if *arg2.byte_offset(0x1e6) == 0
        {
            var_248 = arg3;
            *var_248[8] = arg3 + arg4 * 0x18;
            r14 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h9a260a21f93a7e74(&var_248);
        }
    }
    else
    {
        r14 = 0;
    }
    
    let rax_4: i64 = *arg2.byte_offset(0x1a8);
    var_248 = *arg2.byte_offset(0x198);
    *arg2.byte_offset(0x198) = -0x8000000000000000;
    let mut var_310: i64;
    core::option::Option$LT$T$GT$::or_else::h3b9780feed1c5f20(&var_310, &var_248);
    let mut var_328: i128;
    let mut var_318: i64;
    let mut var_178: i128;
    let mut var_d0: i32;
    
    if 0 + -(var_310)
    {
        'label_5facf3:
        var_d0 = 0;
        let mut rax_6: *mut i8;
        let mut rdx: u64;
        rax_6 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2f, &var_d0);
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc59efc0c75b13120(&var_248, rax_6, rdx);
        var_318 = rax_4;
        var_328 = var_248;
    }
    else
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
            &var_248, &var_310);
        let rax_5: i64 = var_248;
        var_178 = var_248;
        
        if rax_5 == -0x8000000000000000
        {
            goto 'label_5facf3;
        }
        
        var_328 = var_178;
        var_328 = rax_5;
    }
    
    let r12: i64 = *arg2.byte_offset(0x58);
    let rax_8: i64 = *arg2.byte_offset(0x60);
    let r13: i64 = *arg2.byte_offset(0x68);
    *arg2.byte_offset(0x58) = 0;
    *arg2.byte_offset(0x60) = 8;
    *arg2.byte_offset(0x68) = 0;
    fd::extract_time_constraints::h733b02d9fa69be15(&var_248, arg2);
    let rax_9: i64 = var_248;
    let rcx: i64 = *var_248[8];
    
    if rax_9 != -0x8000000000000000
    {
        let rax_10: i32 = *arg2.byte_offset(0x1b0);
        let mut var_188: i32;
        
        if rax_10 != 3
        {
            let mut var_278: i32 = rax_10;
            let var_274_1: i64 = *arg2.byte_offset(0x1b4);
            let var_26c_1: i32 = *arg2.byte_offset(0x1bc);
            fd::filter::owner::OwnerFilter::filter_ignore::hbaaea47d82f3121f(&var_188, &var_278);
        }
        else
        {
            var_188 = 3;
        }
        
        std::io::stdio::stdout::hb6a8e10bcccf3287();
        let rax_13: i8 = std::sys::io::is_terminal::isatty::is_terminal::hf23bc32740498873();
        let rax_14: u32 = *arg2.byte_offset(0x1f5);
        
        if rax_14 == 0
        {
            std::env::var_os::hd31ea1d8e075b910(&var_248, "NO_COLO");
            let rdi_7: i64 = var_248;
            
            if rdi_7 == -0x8000000000000000
            {
                if rax_13 == 0
                {
                    goto 'label_5faecb;
                }
                
                goto 'label_5fae9f;
            }
            
            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h7308b79749514aee(rdi_7, 
                *var_248[8]);
            r14 = r14;
            
            if rax_4 != 0 || rax_13 == 0
            {
                goto 'label_5faecb;
            }
            
            goto 'label_5fae9f;
        }
        
        let mut var_364_1: i8;
        let mut rax_15: i8;
        let mut rcx_1: u32;
        
        if rax_14 == 1
        {
            'label_5fae9f:
            lscolors::LsColors::from_env::hf292d86f4e2f62d1(&var_248, r14);
            
            if var_248 != -0x8000000000000000
            {
                memcpy(&var_178, &var_248, 0xa0);
            }
            else
            {
                lscolors::LsColors::from_string::h2ed37214983bcb72(&var_178, 
                    "\now=0:or=0;38;5;16;48;5;203:no=…", 0x168f);
            }
            
            memcpy(&var_d0, &var_178, 0xa0);
            rax_15 = 1;
            rcx_1 = *arg2.byte_offset(0x1f6);
            
            if rcx_1 != 2
            {
                goto 'label_5faee1;
            }
            
            var_364_1 = 0;
        }
        else
        {
            'label_5faecb:
            var_d0 = -0x8000000000000000;
            rax_15 = 0;
            rcx_1 = *arg2.byte_offset(0x1f6);
            
            if rcx_1 == 2
            {
                var_364_1 = 0;
            }
            else
            {
                'label_5faee1:
                var_364_1 = rcx_1;
                
                if rcx_1 != 1
                {
                    var_364_1 = rax_15;
                }
            }
        }
        fd::extract_command::ha9c9fdeadbe29078(&var_248, arg2, rax_15);
        let r12_1: i64 = var_248;
        let rax_16: i64 = *var_248[8];
        
        if r12_1 == -0x7fffffffffffffff
        {
            arg1[1] = rax_16;
            *arg1 = 2;
            core::ptr::drop_in_place$LT$core..option..Option$LT$lscolors..LsColors$GT$$GT$::h7f447a0aa3572fa7(&var_d0);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$fd..filter..time..TimeFilter$GT$$GT$::h01aa39202dfda311(rax_9, rcx);
            goto 'label_5faf9f;
        }
        
        let rcx_3: bool = *arg2.byte_offset(0x1f9) == 0;
        let cond:2_1: bool = *arg2.byte_offset(0x1e0) != 0;
        let mut var_2a0: i64 = r12_1;
        let mut rsi_12: bool = rcx_3;
        
        if cond:2_1
        {
            rsi_12 = false;
        }
        
        let rax_17: i8 = *arg2.byte_offset(0x1e1);
        let mut rsi_13: bool = rcx_3;
        
        if rax_17 != 0
        {
            rsi_13 = false;
        }
        
        let mut rdi_18: i8 = *arg2.byte_offset(0x1e2) ^ 1;
        let temp1_1: i8 = (rax_17 ^ 1) & rcx_3;
        
        if temp1_1 == 0
        {
            rdi_18 = 0;
        }
        
        let mut rax_18: i8 = *arg2.byte_offset(0x1e5) ^ 1;
        
        if temp1_1 == 0
        {
            rax_18 = 0;
        }
        
        let mut rcx_4: i64 = *arg2.byte_offset(0x20);
        let mut rax_19: i64 = *arg2.byte_offset(0x28);
        let mut rdx_4: i64 = rcx_4;
        let mut r14_2: i64 = rax_19;
        
        if *arg2 != 0
        {
            r14_2 = *arg2.byte_offset(8);
            rdx_4 = 1;
        }
        
        if *arg2.byte_offset(0x10) != 0
        {
            rax_19 = *arg2.byte_offset(0x18);
            rcx_4 = 1;
        }
        
        let rax_20: i8 = *arg2.byte_offset(0x1e3);
        let rax_21: i8 = *arg2.byte_offset(0x1e4);
        let rax_22: i8 = *arg2.byte_offset(0x1ee);
        let rax_23: i8 = *arg2.byte_offset(0x1ed);
        let rax_24: i8 = *arg2.byte_offset(0x1f4);
        let rax_25: i8 = *arg2.byte_offset(0x1ef);
        let rax_26: i8 = *arg2.byte_offset(0x1f2);
        let rax_27: i8 = *arg2.byte_offset(0x1f0);
        let rax_28: i64 = fd::cli::Opts::threads::h134d3f693ba47df8(*arg2.byte_offset(0x1d8));
        let rax_29: i64 = *arg2.byte_offset(0x1c0);
        let rax_30: i32 = *arg2.byte_offset(0x1c8);
        let mut rcx_5: i64;
        let mut rdx_5: i64;
        let mut rsi_17: *mut c_void;
        rcx_5 = memcpy(&var_248, &var_d0, 0xa0);
        let mut var_379_1: i8;
        let mut var_2f0: i64;
        let mut var_168: i64;
        let mut var_160: *mut c_void;
        let mut rax_31: i64;
        
        if *arg2.byte_offset(0xe8) != -0x8000000000000000
        {
            rsi_17 = *arg2.byte_offset(0xf0);
            rcx_5 = fd::construct_config::_$u7b$$u7b$closure$u7d$$u7d$::h3187d22afa309918(&var_178, 
                rsi_17, *arg2.byte_offset(0xf8));
            var_379_1 = var_178;
            var_2f0 = *var_178[1];
            
            if *arg2.byte_offset(0x100) != -0x8000000000000000
            {
                'label_5fb162:
                fd::construct_config::_$u7b$$u7b$closure$u7d$$u7d$::ha57dc170e7a8e543(&var_178, 
                    *arg2.byte_offset(0x108), *arg2.byte_offset(0x110));
                rax_31 = var_178;
                rcx_5 = *var_178[8];
                rdx_5 = var_168;
                rsi_17 = var_160;
                
                if rax_31 == 0
                {
                    var_178 = rcx_5;
                    *var_178[8] = rdx_5;
                    let var_168_1: *mut c_void = rsi_17;
                    arg1[1] = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::ha95572c98ed84657(&var_178);
                    *arg1 = 2;
                    core::ptr::drop_in_place$LT$core..option..Option$LT$lscolors..LsColors$GT$$GT$::h7f447a0aa3572fa7(&var_248);
                    core::ptr::drop_in_place$LT$core..option..Option$LT$fd..exec..CommandSet$GT$$GT$::h5dfef4a94fbea321(&var_2a0);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$fd..filter..time..TimeFilter$GT$$GT$::h01aa39202dfda311(rax_9, rcx);
                    goto 'label_5faf9f;
                }
            }
            else
            {
                rax_31 = 0;
            }
        }
        else
        {
            var_379_1 = 2;
            
            if *arg2.byte_offset(0x100) != -0x8000000000000000
            {
                goto 'label_5fb162;
            }
            
            rax_31 = 0;
        }
        
        let var_260_1: i64 = rcx_5;
        let var_250_1: *mut c_void = rsi_17;
        let mut var_1a8: i128;
        let mut var_198: i128;
        let mut rax_35: u64;
        
        if *arg2.byte_offset(0x148) != -0x8000000000000000
        {
            fd::fmt::FormatTemplate::parse::hf8dc6f2b9acbeb6e(&var_178, *arg2.byte_offset(0x150), 
                *arg2.byte_offset(0x158));
            var_198 = var_168;
            var_1a8 = var_178;
            
            if r12_1 == -0x8000000000000000
            {
                rax_35 = 0;
            }
            else
            {
                'label_5fb2b8:
                let var_150_1: i64 = *rax_4[8];
                var_160 = rax_16;
                var_178 = 1;
                *var_178[8] = 1;
                var_168 = r12_1;
                rax_35 = alloc::boxed::Box$LT$T$GT$::new::hc348999cb7853116(&var_178);
            }
        }
        else
        {
            var_1a8 = 2;
            
            if r12_1 != -0x8000000000000000
            {
                goto 'label_5fb2b8;
            }
            
            rax_35 = 0;
        }
        
        let var_280_1: u64 = rax_35;
        let rcx_7: i64 = *arg2.byte_offset(0x1d0);
        core::iter::traits::iterator::Iterator::collect::h638ff640416a658c(&var_178, 
            *arg2.byte_offset(0x48));
        arg1[0xf] = *arg2.byte_offset(0x80);
        *arg1.byte_offset(0x68) = *arg2.byte_offset(0x70);
        *arg2.byte_offset(0x70) = 0;
        *arg2.byte_offset(0x78) = 8;
        *arg2.byte_offset(0x80) = 0;
        *arg1.byte_offset(0x180) = var_188;
        let rax_37: i8 = *arg2.byte_offset(0x1f3);
        *arg1.byte_offset(0x168) = var_310;
        let var_300: i64;
        arg1[0x2f] = var_300;
        arg1[0x18] = var_318;
        *arg1.byte_offset(0xb0) = var_328;
        let mut rax_40: i64;
        let mut rdx_10: i64;
        rax_40 = fd::cli::Opts::max_results::h69eff37668279061(arg2);
        let rax_42: i8 = fd::cli::Opts::strip_cwd_prefix::had143ea50fae4eb8(arg2, 
            *arg2.byte_offset(0x1ef), r12_1 != -0x8000000000000000);
        memcpy(&arg1[0x19], &var_248, 0xa0);
        *arg1.byte_offset(0x1b8) = rdx_5;
        *arg1.byte_offset(0x1a8) = rax_31;
        *arg1.byte_offset(0x30) = var_1a8;
        *arg1.byte_offset(0x40) = var_198;
        arg1[0xc] = var_168;
        *arg1.byte_offset(0x50) = var_178;
        *arg1 = rdx_4;
        arg1[1] = r14_2;
        arg1[2] = rcx_4;
        arg1[3] = rax_19;
        arg1[4] = rax_40;
        arg1[5] = rdx_10;
        arg1[0x10] = r12;
        arg1[0x11] = rax_8;
        arg1[0x12] = r13;
        arg1[0x13] = rax_9;
        arg1[0x14] = rcx;
        arg1[0x15] = rax_4;
        arg1[0x32] = rax_29;
        arg1[0x33] = rax_30;
        arg1[0x34] = rax_28;
        arg1[0x39] = rax_35;
        arg1[0x3a] = rcx_7;
        arg1[0x3b] = r14;
        *arg1.byte_offset(0x1d9) = rax_22;
        *arg1.byte_offset(0x1da) = rsi_12;
        *arg1.byte_offset(0x1db) = rsi_13;
        *arg1.byte_offset(0x1dc) = rax_21 ^ 1;
        *arg1.byte_offset(0x1dd) = rdi_18;
        *arg1.byte_offset(0x1de) = rax_20 ^ 1;
        *arg1.byte_offset(0x1df) = rax_18;
        arg1[0x3c] = rax_23;
        *arg1.byte_offset(0x1e1) = rax_24;
        *arg1.byte_offset(0x1e2) = rax_25;
        *arg1.byte_offset(0x1e3) = rax_27;
        *arg1.byte_offset(0x1e4) = rax_26;
        *arg1.byte_offset(0x1e5) = rax_13;
        *arg1.byte_offset(0x1e6) = rax_37;
        *arg1.byte_offset(0x1e7) = rax_42;
        arg1[0x3d] = var_364_1;
        *arg1.byte_offset(0x1e9) = var_379_1;
        *arg1.byte_offset(0x1ea) = var_2f0;
        let var_2f2: i16;
        *arg1.byte_offset(0x1f6) = var_2f2;
        let var_2f6: i32;
        *arg1.byte_offset(0x1f2) = var_2f6;
    }
    else
    {
        arg1[1] = rcx;
        *arg1 = 2;
        'label_5faf9f:
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$crossbeam_channel..flavors..array..Slot$LT$fd..walk..Batch$GT$$GT$$GT$::hd423336e79517fe6(r12, rax_8);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h6194a405d9e61c9b(&var_328);
        core::ptr::drop_in_place$LT$regex..error..Error$GT$::h23361293c27a3604(&var_310);
    }
    
    core::ptr::drop_in_place$LT$fd..cli..Opts$GT$::h8f24d8296db52e21(arg2)
}
