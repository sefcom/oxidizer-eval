
  fn uu_rm::remove_dir_recursive::h796f941ab304c174(arg1: *mut i8, arg2: u64, arg3: *mut c_void) -> u64

{
    let mut rbp: u64;
    let var_8: u64 = rbp;
    let mut var_108: i8;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_108, arg1, arg2);
    let var_f8: i64;
    let mut var_d8: *mut u64;
    let mut var_b0: u64;
    let mut var_98: *mut *mut u64;
    
    if (var_108 & 1) != 0 || var_f8 < 0x3e9
    {
        let rax_3: i8 = std::path::Path::is_dir::h02edbc48c38d7d9e(arg1, arg2);
        let mut rax_4: i8;
        
        if rax_3 != 0
        {
            rax_4 = std::path::Path::is_symlink::h004cfac91d04dbc0(arg1, arg2);
        }
        
        if rax_3 != 0 && rax_4 == 0
        {
            let rax_6: i8 = *arg3.byte_offset(7);
            
            if rax_6 != 2
            {
                'label_45ca47:
                let mut var_40: i64;
                std::fs::read_dir::h8c3d3d6768148fc1(&var_40, arg1);
                let var_38: i8;
                let mut r12_1: u32 = var_38;
                let r15_1: i64 = var_40;
                let mut var_c8: i128;
                let mut var_88: i64;
                
                if r12_1 != 2
                {
                    let var_68_1: i64 = r15_1;
                    let mut var_58: i64 = r15_1;
                    let var_10a_1: i8 = r12_1;
                    let var_50_1: i8 = r12_1;
                    rbp = 0;
                    
                    loop
                    {
                        _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1934f30e4eea5c14(&var_108, &var_58);
                        
                        if var_108 != 1
                        {
                            break;
                        }
                        
                        let var_100: i64;
                        var_98 = var_100;
                        let var_e0: i64;
                        let var_78_1: i64 = var_e0;
                        let var_f0: i64;
                        var_88 = var_f0;
                        
                        if var_98 == 0
                        {
                            r12_1 = 1;
                            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..DirEntry$C$std..io..error..Error$GT$$GT$::hc3253a40f2f30f24(&var_98);
                        }
                        else
                        {
                            let var_b8_1: i64 = var_e0;
                            var_c8 = var_f0;
                            var_d8 = var_100;
                            std::fs::DirEntry::path::hc95af67dccb42f03(&var_b0, &var_d8);
                            let var_a8: *mut i8;
                            let var_a0: u64;
                            let rax_11: u32 = uu_rm::remove_dir_recursive::h796f941ab304c174(
                                var_a8, var_a0, arg3);
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hec94fc61a491c65b(
                                var_b0, var_a8);
                            core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h368a5a1663c5dbc2(
                                &var_d8);
                            r12_1 = rax_11 | rbp;
                            r12_1 &= 1;
                            
                            if var_98 == 0
                            {
                                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..DirEntry$C$std..io..error..Error$GT$$GT$::hc3253a40f2f30f24(&var_98);
                            }
                        }
                        
                        rbp = r12_1;
                    }
                    
                    core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h99d2b3813cc34141(&var_58);
                    
                    if rax_6 == 2
                    {
                        goto 'label_45cbf8;
                    }
                    
                    goto 'label_45cc0b;
                }
                
                if std::io::error::Error::kind::h135fe00c4e7365f3(r15_1) == 1
                {
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::haf081cf9ad72b71d(r15_1);
                    rbp = 0;
                    
                    if rax_6 == 2
                    {
                        goto 'label_45cbf8;
                    }
                    
                    goto 'label_45cc0b;
                }
                
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::haf081cf9ad72b71d(r15_1);
                rbp = 1;
                
                if rax_6 != 2
                {
                    'label_45cc0b:
                    let rax_14: i64 = std::fs::remove_dir::hddc5f5b6184df82a(arg1);
                    
                    if rax_14 == 0
                    {
                        if *arg3.byte_offset(5) == 1
                        {
                            uu_rm::normalize::h371ce75c5c819b8d();
                            var_d8 = 1;
                            let var_90: i64;
                            let var_d0_5: i64 = var_90;
                            var_c8 = var_88;
                            *var_c8[8] = 1;
                            var_b0 = &var_d8;
                            let var_a8_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                            var_108 = &data_4ea520;
                            let var_100_5: i64 = 2;
                            let var_e8_5: i64 = 0;
                            let var_f8_5: *mut u64 = &var_b0;
                            let var_f0_5: i64 = 1;
                            std::io::stdio::_print::h5e446ff973c02de6(&var_108);
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hec94fc61a491c65b(
                                var_98, var_90);
                        }
                    }
                    else if (rbp & 1) != 0
                    {
                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::haf081cf9ad72b71d(
                            rax_14);
                    }
                    else if uu_rm::is_readable::h11778c167935ca98(arg1) == 0
                    {
                        let mut rax_19: *mut u64;
                        let mut rdx_10: i64;
                        rax_19 = uucore::util_name::h074417a1e6395129();
                        var_d8 = rax_19;
                        let var_d0_6: i64 = rdx_10;
                        var_98 = &var_d8;
                        let var_90_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f6f103f460297c8;
                        var_108 = &data_4ea4a0;
                        let var_100_6: i64 = 2;
                        let var_e8_6: i64 = 0;
                        let var_f8_6: *mut *mut *mut u64 = &var_98;
                        let var_f0_6: i64 = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_108);
                        var_d8 = 1;
                        let var_d0_7: *mut i8 = arg1;
                        var_c8 = arg2;
                        *var_c8[8] = 1;
                        var_98 = &var_d8;
                        let var_90_4: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        var_108 = &data_4ea500;
                        let var_100_7: i64 = 2;
                        let var_e8_7: i64 = 0;
                        let var_f8_7: *mut *mut *mut u64 = &var_98;
                        let var_f0_7: i64 = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_108);
                        rbp = 1;
                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::haf081cf9ad72b71d(
                            rax_14);
                    }
                    else
                    {
                        var_b0 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h38f2107b9f174514();
                        let mut rax_17: *mut u64;
                        let mut rdx_8: i64;
                        rax_17 = uucore::util_name::h074417a1e6395129();
                        var_d8 = rax_17;
                        let var_d0_3: i64 = rdx_8;
                        var_98 = &var_d8;
                        let var_90_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f6f103f460297c8;
                        var_108 = &data_4ea4a0;
                        let var_100_3: i64 = 2;
                        let var_e8_3: i64 = 0;
                        let var_f8_3: *mut *mut *mut u64 = &var_98;
                        let var_f0_3: i64 = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_108);
                        var_d8 = &var_b0;
                        let var_d0_4: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h29c983c066893c20;
                        var_108 = &data_4ea4e0;
                        let var_100_4: i64 = 2;
                        let var_e8_4: i64 = 0;
                        let var_f8_4: *mut *mut u64 = &var_d8;
                        let var_f0_4: i64 = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_108);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h186a117efda8c6b1(var_b0);
                        rbp = 1;
                    }
                }
                else
                {
                    'label_45cbf8:
                    
                    if uu_rm::prompt_dir::h2b47d5798effefb0(arg1, arg2, *arg3.byte_offset(6), 2)
                        != 0
                    {
                        goto 'label_45cc0b;
                    }
                    
                    rbp = 0;
                }
            }
            else
            {
                if uu_rm::is_dir_empty::h0b58628bb17a83e8(arg1) != 0
                {
                    goto 'label_45ca47;
                }
                
                if uu_rm::prompt_descend::heddf5145b62c3c76() != 0
                {
                    goto 'label_45ca47;
                }
                
                rbp = 0;
            }
        }
        else
        {
            rbp = uu_rm::remove_file::h42f0a78696bb1093(arg1, arg2, arg3);
        }
    }
    else if std::fs::remove_dir_all::h2f1ee9cf2f121232(arg1) == 0
    {
        rbp = 0;
    }
    else
    {
        var_b0 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h38f2107b9f174514();
        let mut rax_2: *mut u64;
        let mut rdx_2: i64;
        rax_2 = uucore::util_name::h074417a1e6395129();
        var_d8 = rax_2;
        let var_d0_1: i64 = rdx_2;
        var_98 = &var_d8;
        let var_90_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f6f103f460297c8;
        var_108 = &data_4ea4a0;
        let var_100_1: i64 = 2;
        let var_e8_1: i64 = 0;
        let var_f8_1: *mut *mut *mut u64 = &var_98;
        let var_f0_1: i64 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_108);
        var_d8 = &var_b0;
        let var_d0_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h29c983c066893c20;
        var_108 = &data_4ea4e0;
        let var_100_2: i64 = 2;
        let var_e8_2: i64 = 0;
        let var_f8_2: *mut *mut u64 = &var_d8;
        let var_f0_2: i64 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_108);
        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h186a117efda8c6b1(var_b0);
        rbp = 1;
    }
    rbp
}
