
  fn uu_cut::cut_files::hab9ba34aeaa70600(arg1: *mut i64, arg2: *mut i32) -> i64

{
    let rbx: *mut i64 = arg1;
    let mut rax: i64 = arg1[2];
    let mut var_d8: i128;
    let mut var_b0: i128;
    
    if rax == 0
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h5054b97c46bbc40b(&var_b0, 
            "-: \n: Is a directory\ndelimiter…", 1);
        let var_a0: i64;
        let var_c8_1: i64 = var_a0;
        var_d8 = var_b0;
        alloc::vec::Vec$LT$T$C$A$GT$::push::he294ab4259f19bac(rbx, &var_d8);
        rax = rbx[2];
    }
    
    let rcx: i64 = rbx[1];
    let mut var_48: i64 = rcx;
    let var_40: i64 = rcx + rax * 0x18;
    let i_2: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3c649708cac16010(&var_48);
    
    if i_2 != 0
    {
        let mut i_1: *mut c_void = i_2;
        let rax_4: *mut i64 = arg2;
        let rcx_1: i64 = *rax_4;
        let rcx_2: i64 = rax_4[8];
        let rcx_3: i64 = rax_4[9];
        let mut var_b4_1: i8 = 0;
        let mut i: *mut c_void;
        
        do
        {
            let mut var_e8: *mut i128;
            let mut var_c0: i8;
            let mut var_80: *mut i128;
            let mut rbx_1: u64;
            let mut rbp_1: *mut i8;
            
            if (var_b4_1 & 1) != 0
            {
                loop
                {
                    rbp_1 = *i_1.byte_offset(8);
                    rbx_1 = *i_1.byte_offset(0x10);
                    
                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9e95b78712a5b126(rbp_1, rbx_1, "-: \n: Is a directory\ndelimiter…", 1) == 0
                    {
                        if std::path::Path::is_dir::h9ac0db933706da51(rbp_1, rbx_1) == 0
                        {
                            break;
                        }
                        
                        let mut rax_11: i64;
                        let mut rdx_2: i64;
                        rax_11 = uucore::util_name::h60d842bf27b05e82();
                        var_d8 = rax_11;
                        *var_d8[8] = rdx_2;
                        var_e8 = &var_d8;
                        let var_e0_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hafe5f0e7dc41fbf4;
                        var_b0 = &data_528e58;
                        *var_b0[8] = 2;
                        let var_90_3: i64 = 0;
                        let var_a0_3: *mut *mut i128 = &var_e8;
                        let var_98_3: i64 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_b0);
                        var_d8 = 0;
                        *var_d8[8] = rbp_1;
                        let var_c8_3: u64 = rbx_1;
                        var_c0 = 0;
                        var_e8 = &var_d8;
                        let var_e0_4: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        var_b0 = &data_528e78;
                        *var_b0[8] = 2;
                        let var_90_4: i64 = 0;
                        let var_a0_4: *mut *mut i128 = &var_e8;
                        let var_98_4: i64 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_b0);
                        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                    }
                    
                    let i_4: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3c649708cac16010(&var_48);
                    i_1 = i_4;
                    
                    if i_4 == 0
                    {
                        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h7a16c3da1cf76162(arg1);
                    }
                }
                
                'label_4b70d9:
                std::fs::File::open::h862e55e715a37fbf(&var_b0, rbp_1);
                _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hd65893d8ae3f9995(&var_d8, &var_b0, i_1);
                let mut rax_12: *mut i128 = var_d8;
                let mut rcx_4: *mut *mut c_void;
                
                if rax_12 == 0
                {
                    rax_12 = uu_cut::cut_files::_$u7b$$u7b$closure$u7d$$u7d$::h0eca3536022a71dc(
                        arg2, *var_d8[8]);
                    rcx_4 = &data_528da0;
                    
                    if rax_12 != 0
                    {
                        goto 'label_4b7155;
                    }
                }
                else
                {
                    rcx_4 = *var_d8[8];
                    'label_4b7155:
                    var_80 = rax_12;
                    let var_78_1: *mut *mut c_void = rcx_4;
                    uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(rcx_4[0xc](rax_12));
                    let mut rax_15: *mut i128;
                    let mut rdx_6: i64;
                    rax_15 = uucore::util_name::h60d842bf27b05e82();
                    var_e8 = rax_15;
                    let var_e0_5: i64 = rdx_6;
                    var_d8 = &var_e8;
                    *var_d8[8] =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hafe5f0e7dc41fbf4;
                    let var_c8_4: *mut *mut i128 = &var_80;
                    var_c0 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h5c8ad0c11d220d0d;
                    var_b0 = &data_528e28;
                    *var_b0[8] = 3;
                    let var_90_5: i64 = 0;
                    let var_a0_5: *mut i128 = &var_d8;
                    let var_98_5: i64 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_b0);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::hd9512be231cb7e3d(&var_80);
                }
            }
            else
            {
                loop
                {
                    rbp_1 = *i_1.byte_offset(8);
                    rbx_1 = *i_1.byte_offset(0x10);
                    
                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9e95b78712a5b126(rbp_1, rbx_1, "-: \n: Is a directory\ndelimiter…", 1) != 0
                    {
                        let mut rax_13: *mut i128;
                        
                        if rcx_1 >= 2
                        {
                            std::io::stdio::stdin::h7215cc131abb55d8();
                            rax_13 = uu_cut::cut_fields::h5b603ad8eeef3f36(
                                &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5, rcx_2, rcx_3, 
                                &rax_4[1]);
                        }
                        else
                        {
                            std::io::stdio::stdin::h7215cc131abb55d8();
                            rax_13 = uu_cut::cut_bytes::h04bd5adc21115d76(
                                &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5, rcx_2, rcx_3, 
                                &rax_4[1]);
                        }
                        
                        var_b4_1 = 1;
                        
                        if rax_13 != 0
                        {
                            var_80 = rax_13;
                            let var_78_2: *mut *mut c_void = &data_528da0;
                            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::h1158ea86a5f2627d(rax_13));
                            let mut rax_17: *mut i128;
                            let mut rdx_8: i64;
                            rax_17 = uucore::util_name::h60d842bf27b05e82();
                            var_e8 = rax_17;
                            let var_e0_6: i64 = rdx_8;
                            var_d8 = &var_e8;
                            *var_d8[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hafe5f0e7dc41fbf4;
                            let var_c8_5: *mut *mut i128 = &var_80;
                            var_c0 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h5c8ad0c11d220d0d;
                            var_b0 = &data_528e28;
                            *var_b0[8] = 3;
                            let var_90_6: i64 = 0;
                            let var_a0_6: *mut i128 = &var_d8;
                            let var_98_6: i64 = 2;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_b0);
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::hd9512be231cb7e3d(&var_80);
                        }
                        
                        break;
                    }
                    
                    if std::path::Path::is_dir::h9ac0db933706da51(rbp_1, rbx_1) == 0
                    {
                        goto 'label_4b70d9;
                    }
                    
                    let mut rax_8: i64;
                    let mut rdx_1: i64;
                    rax_8 = uucore::util_name::h60d842bf27b05e82();
                    var_d8 = rax_8;
                    *var_d8[8] = rdx_1;
                    var_e8 = &var_d8;
                    let var_e0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hafe5f0e7dc41fbf4;
                    var_b0 = &data_528e58;
                    *var_b0[8] = 2;
                    let var_90_1: i64 = 0;
                    let var_a0_1: *mut *mut i128 = &var_e8;
                    let var_98_1: i64 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_b0);
                    var_d8 = 0;
                    *var_d8[8] = rbp_1;
                    let var_c8_2: u64 = rbx_1;
                    var_c0 = 0;
                    var_e8 = &var_d8;
                    let var_e0_2: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    var_b0 = &data_528e78;
                    *var_b0[8] = 2;
                    let var_90_2: i64 = 0;
                    let var_a0_2: *mut *mut i128 = &var_e8;
                    let var_98_2: i64 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_b0);
                    uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                    let i_3: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3c649708cac16010(&var_48);
                    i_1 = i_3;
                    
                    if i_3 == 0
                    {
                        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h7a16c3da1cf76162(arg1);
                    }
                }
            }
            i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3c649708cac16010(&var_48);
            i_1 = i;
        } while i != 0;
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h7a16c3da1cf76162(
        arg1)
}
