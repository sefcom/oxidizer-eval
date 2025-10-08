
  fn uu_cut::cut_files::h785d6e985a8c4fa3(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let mut var_f8: i128;
    let mut var_b0: i128;
    
    if arg1[2] == 0
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hdd477e9923447a3c(&var_b0, "-: \n: Is a directory\ninvalid i…", 1);
        let var_a0: i64;
        let var_e8_1: i64 = var_a0;
        var_f8 = var_b0;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hcc7a9ddcf3936731(arg1, &var_f8);
    }
    
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    let mut rax_3: u64;
    let mut rcx: *mut c_void;
    
    if std::sys::io::is_terminal::isatty::is_terminal::hb6e1a7b5002041a4() == 0
    {
        std::io::stdio::stdout::hb6a8e10bcccf3287();
        std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::hd0517eb1fc4b80b9(&var_b0, 
            &std::io::stdio::STDOUT::h411b213c5c9add46);
        rax_3 = alloc::boxed::Box$LT$T$GT$::new::h4c49609b75c393d3(&var_b0);
        rcx = &data_4f93c8;
    }
    else
    {
        std::io::stdio::stdout::hb6a8e10bcccf3287();
        rax_3 = alloc::boxed::Box$LT$T$GT$::new::hedff6b7066f3f2ba(
            &std::io::stdio::STDOUT::h411b213c5c9add46);
        rcx = &data_4f9418;
    }
    
    let mut var_80: u64 = rax_3;
    let rax_4: i64 = arg1[2];
    let mut var_d0: u64;
    let mut var_c0: *mut i128;
    let mut var_70: u64;
    
    if rax_4 != 0
    {
        let mut r12_1: *mut c_void = arg1[1];
        let rbx_1: *mut c_void = r12_1.byte_offset(rax_4 * 0x18);
        let mut rax_6: *mut c_void = r12_1.byte_offset(0x18);
        let rdx_1: i64 = *arg2;
        let rdx_2: *mut i128 = arg2[8];
        let rcx_3: i64 = arg2[9];
        let mut r15_1: i8 = 0;
        
        do
        {
            let mut rbp_1: *mut c_void = r12_1;
            
            loop
            {
                r12_1 = rax_6;
                let r13_1: i64 = *rbp_1.byte_offset(8);
                let r14_1: u64 = *rbp_1.byte_offset(0x10);
                let mut var_e0: fn(arg1: *mut i64) -> i64;
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h4e666ffb317321e6(r13_1, r14_1, "-: \n: Is a directory\ninvalid i…", 1) == 0
                {
                    if std::path::Path::is_dir::h02edbc48c38d7d9e(r13_1, r14_1) == 0
                    {
                        std::fs::File::open::h02248eeaa12fef75(&var_b0, r13_1);
                        *rbp_1.byte_offset(8);
                        *rbp_1.byte_offset(0x10);
                        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::haa675c517272d758(&var_f8, &var_b0);
                        let mut rax_12: u64 = var_f8;
                        let mut rdx_9: i64;
                        
                        if rax_12 == 0
                        {
                            rax_12 =
                                uu_cut::cut_files::_$u7b$$u7b$closure$u7d$$u7d$::hbeb4f85585c96a83(
                                arg2, &var_80, *var_f8[8]);
                            var_70 = rax_12;
                            let var_68_3: i64 = rdx_9;
                            
                            if rax_12 != 0
                            {
                                goto 'label_469e2d;
                            }
                            
                            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h3fc40c7c194632a2(&var_70);
                        }
                        else
                        {
                            rdx_9 = *var_f8[8];
                            var_70 = rax_12;
                            let var_68_1: i64 = rdx_9;
                            'label_469e2d:
                            var_d0 = rax_12;
                            let var_c8_2: i64 = rdx_9;
                            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1((*(rdx_9 + 0x58))(
                                rax_12));
                            let mut rax_16: *mut i128;
                            let mut rdx_13: i64;
                            rax_16 = uucore::util_name::h074417a1e6395129();
                            var_c0 = rax_16;
                            let var_b8_4: i64 = rdx_13;
                            var_f8 = &var_c0;
                            *var_f8[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd7fdd532799be56e;
                            let var_e8_4: *mut u64 = &var_d0;
                            var_e0 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hb683936e38a4ea07;
                            var_b0 = &data_4f9340;
                            *var_b0[8] = 3;
                            let var_90_4: i64 = 0;
                            let var_a0_4: *mut i128 = &var_f8;
                            let var_98_4: i64 = 2;
                            std::io::stdio::_eprint::h57899770eacec2ad(&var_b0);
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::hb71a8d3b47f158bf(&var_d0);
                        }
                        break;
                    }
                    
                    let mut rax_9: i64;
                    let mut rdx_4: i64;
                    rax_9 = uucore::util_name::h074417a1e6395129();
                    var_f8 = rax_9;
                    *var_f8[8] = rdx_4;
                    var_c0 = &var_f8;
                    let var_b8_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd7fdd532799be56e;
                    var_b0 = &data_4f9370;
                    *var_b0[8] = 2;
                    let var_90_1: i64 = 0;
                    let var_a0_1: *mut *mut i128 = &var_c0;
                    let var_98_1: i64 = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_b0);
                    var_f8 = 0;
                    *var_f8[8] = *rbp_1.byte_offset(8);
                    let var_e8_2: i64 = *rbp_1.byte_offset(0x10);
                    var_e0 = 0;
                    var_c0 = &var_f8;
                    let var_b8_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    var_b0 = &data_4f9390;
                    *var_b0[8] = 2;
                    let var_90_2: i64 = 0;
                    let var_a0_2: *mut *mut i128 = &var_c0;
                    let var_98_2: i64 = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_b0);
                    uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                }
                else if (r15_1 & 1) == 0
                {
                    let mut rax_11: u64;
                    let mut rdx_6: *mut *mut c_void;
                    
                    if rdx_1 > 1
                    {
                        std::io::stdio::stdin::h9a05a2c3e7544b2a();
                        rax_11 = uu_cut::cut_fields::hefd7750461942b3d(
                            &std::io::stdio::stdin::INSTANCE::heccb3522b341563b, &var_80, rdx_2, 
                            rcx_3, &arg2[1]);
                    }
                    else
                    {
                        std::io::stdio::stdin::h9a05a2c3e7544b2a();
                        rax_11 = uu_cut::cut_bytes::ha8c2c8670826156c(
                            &std::io::stdio::stdin::INSTANCE::heccb3522b341563b, &var_80, rdx_2, 
                            rcx_3, &arg2[1]);
                        rdx_6 = &data_4f9218;
                    }
                    
                    var_70 = rax_11;
                    let var_68_2: *mut *mut c_void = rdx_6;
                    
                    if rax_11 == 0
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h3fc40c7c194632a2(&var_70);
                    }
                    else
                    {
                        var_d0 = rax_11;
                        let var_c8_1: *mut *mut c_void = rdx_6;
                        uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(rdx_6[0xb](rax_11));
                        let mut rax_14: *mut i128;
                        let mut rdx_11: i64;
                        rax_14 = uucore::util_name::h074417a1e6395129();
                        var_c0 = rax_14;
                        let var_b8_3: i64 = rdx_11;
                        var_f8 = &var_c0;
                        *var_f8[8] =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd7fdd532799be56e;
                        let var_e8_3: *mut u64 = &var_d0;
                        var_e0 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hb683936e38a4ea07;
                        var_b0 = &data_4f9340;
                        *var_b0[8] = 3;
                        let var_90_3: i64 = 0;
                        let var_a0_3: *mut i128 = &var_f8;
                        let var_98_3: i64 = 2;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_b0);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::hb71a8d3b47f158bf(&var_d0);
                    }
                    
                    r15_1 = 1;
                    break;
                }
                rax_6 = r12_1.byte_offset(0x18);
                rbp_1 = r12_1;
                
                if r12_1 == rbx_1
                {
                    goto 'label_469efa;
                }
            }
            
            rax_6 = r12_1.byte_offset(0x18);
            
            if r12_1 == rbx_1
            {
                rax_6 = r12_1;
            }
        } while r12_1 != rbx_1;
    }
    
    'label_469efa:
    let rax_19: u64 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hbe3cf09d9c63ca8b((*rcx.byte_offset(0x30))(var_80));
    var_70 = rax_19;
    let var_68_4: *mut *mut c_void = &data_4f8e20;
    
    if rax_19 == 0
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h3fc40c7c194632a2(&var_70);
    }
    else
    {
        var_d0 = rax_19;
        let var_c8_3: *mut *mut c_void = &data_4f8e20;
        uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
        let mut rax_20: *mut i128;
        let mut rdx_14: i64;
        rax_20 = uucore::util_name::h074417a1e6395129();
        var_c0 = rax_20;
        let var_b8_5: i64 = rdx_14;
        var_f8 = &var_c0;
        *var_f8[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd7fdd532799be56e;
        let var_e8_5: *mut u64 = &var_d0;
        let var_e0_1: fn(arg1: *mut i64) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hb683936e38a4ea07;
        var_b0 = &data_4f9340;
        *var_b0[8] = 3;
        let var_90_5: i64 = 0;
        let var_a0_5: *mut i128 = &var_f8;
        let var_98_5: i64 = 2;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_b0);
        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::hb71a8d3b47f158bf(&var_d0);
    }
    
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h8c282cad91f072b7(var_80, rcx);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hc22d9a1ba8213ee0(
        arg1)
}
