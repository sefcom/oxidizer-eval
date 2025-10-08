
  fn uu_ln::link_files_in_dir::h2bcf86d9527747bd(arg1: *mut c_void, arg2: i64, arg3: *mut i8, arg4: u64, arg5: *mut c_void) -> u64

{
    let mut r12: *mut c_void = arg1;
    let mut var_120: *mut c_void;
    let mut var_118: u64;
    
    if std::path::Path::is_dir::h02edbc48c38d7d9e(arg3, arg4) == 0
    {
        std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_118, arg3, 
            arg4);
        var_120 = nullptr;
        return alloc::boxed::Box$LT$T$GT$::new::h9832a2155b69f23f(&var_120);
    }
    
    let mut rax_1: i64;
    let mut rdx: i64;
    rax_1 = std::thread::local::LocalKey$LT$T$GT$::with::h0bfd1cb4445fe4b8();
    hashbrown::map::HashMap$LT$K$C$V$C$S$GT$::with_capacity_and_hasher::he692588f474a850d(&var_120, 
        arg2, rax_1, rdx);
    let mut var_100: i128;
    let var_48_1: i128 = var_100;
    let mut var_110: i128;
    let var_58_1: i128 = var_110;
    let mut var_68: i128 = var_120;
    let mut result: u64;
    
    if arg2 == 0
    {
        result = 0;
    }
    else
    {
        let var_70_1: *mut c_void = r12.byte_offset(arg2 * 0x18);
        let mut rax_3: *mut c_void;
        rax_3 = *arg5.byte_offset(0x36) == 2;
        rax_3 &= *arg5.byte_offset(0x34);
        let mut rax_4: *mut c_void = r12.byte_offset(0x18);
        let mut rbx: u64;
        rbx = 1;
        
        loop
        {
            let rbp_1: *mut c_void = rax_4;
            let mut rax_5: i8;
            
            if rax_3 != 0
            {
                rax_5 = std::path::Path::is_symlink::h004cfac91d04dbc0(arg3, arg4);
            }
            
            let mut var_e8: *mut u64;
            let mut var_d0: i8;
            let mut var_c8: u64;
            let mut var_b8: *mut *mut u64;
            let mut var_90: ();
            
            if rax_3 != 0 && rax_5 != 0
            {
                let mut var_98: u64;
                
                if std::path::Path::is_file::h6e28d87ff76ffc41(arg3, arg4) != 0
                {
                    let rax_7: u64 = std::fs::remove_file::ha037a510dc62fc80(arg3);
                    var_98 = rax_7;
                    
                    if rax_7 == 0
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h34c9e922b39888ae(&var_98);
                    }
                    else
                    {
                        var_c8 = rax_7;
                        let mut rax_8: *mut u64;
                        let mut rdx_2: i64;
                        rax_8 = uucore::util_name::h074417a1e6395129();
                        var_e8 = rax_8;
                        let var_e0_1: i64 = rdx_2;
                        var_b8 = &var_e8;
                        let var_b0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h45ff57c8145456ef;
                        var_120 = &data_4f6038;
                        var_118 = 2;
                        var_100 = 0;
                        var_110 = &var_b8;
                        *var_110[8] = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_120);
                        var_e8 = 1;
                        let var_e0_2: *mut i8 = arg3;
                        let var_d8_1: u64 = arg4;
                        var_d0 = 1;
                        var_b8 = &var_e8;
                        let var_b0_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        let var_a8_1: *mut u64 = &var_c8;
                        let var_a0_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                        var_120 = &data_4f6058;
                        var_118 = 3;
                        var_100 = 0;
                        var_110 = &var_b8;
                        *var_110[8] = 2;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_120);
                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h0da376499adda0be(
                            &var_c8);
                    }
                }
                
                if std::path::Path::is_dir::h02edbc48c38d7d9e(arg3, arg4) != 0
                {
                    let rax_14: u64 = std::fs::remove_dir::h43fe0fb1c7b95b6b(arg3);
                    var_98 = rax_14;
                    
                    if rax_14 == 0
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h34c9e922b39888ae(&var_98);
                    }
                    else
                    {
                        var_c8 = rax_14;
                        let mut rax_15: *mut u64;
                        let mut rdx_8: i64;
                        rax_15 = uucore::util_name::h074417a1e6395129();
                        var_e8 = rax_15;
                        let var_e0_5: i64 = rdx_8;
                        var_b8 = &var_e8;
                        let var_b0_5: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h45ff57c8145456ef;
                        var_120 = &data_4f6038;
                        var_118 = 2;
                        var_100 = 0;
                        var_110 = &var_b8;
                        *var_110[8] = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_120);
                        var_e8 = 1;
                        let var_e0_6: *mut i8 = arg3;
                        let var_d8_3: u64 = arg4;
                        var_d0 = 1;
                        var_b8 = &var_e8;
                        let var_b0_6: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        let var_a8_2: *mut u64 = &var_c8;
                        let var_a0_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                        var_120 = &data_4f6058;
                        var_118 = 3;
                        var_100 = 0;
                        var_110 = &var_b8;
                        *var_110[8] = 2;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_120);
                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h0da376499adda0be(
                            &var_c8);
                    }
                }
                
                std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_90, 
                    arg3, arg4);
                goto 'label_465ae6;
            }
            
            let r15_1: *mut i8 = *r12.byte_offset(8);
            let r13_1: i64 = *r12.byte_offset(0x10);
            core::str::converts::from_utf8::h8a6dc80f786921e0(&var_120, r15_1, r13_1);
            let mut rax_11: *mut c_void;
            
            if (var_120 & 1) == 0
            {
                let r15_2: u64 = var_118;
                let mut rax_12: i64;
                let mut rdx_5: i64;
                rax_12 = std::path::Path::file_name::h6d40d88bf3fb287a(r15_2, var_110);
                
                if rax_12 == 0
                {
                    std::path::Path::join::h001e706606c28daa(&var_90, arg3, arg4, r15_2);
                }
                else
                {
                    std::path::Path::join::h001e706606c28daa(&var_90, arg3, arg4, rax_12);
                }
                
                'label_465ae6:
                let var_88: *mut i8;
                let var_80: u64;
                
                if hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hd366270c5ee0e306(
                    &var_68, &var_90) == 0
                {
                    let mut rax_19: u64;
                    let mut rdx_12: *mut i64;
                    rax_19 = uu_ln::link::hcb5f3490f1fb339b(*r12.byte_offset(8), 
                        *r12.byte_offset(0x10), var_88, var_80, arg5);
                    
                    if rax_19 == 0
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h10bf4845f61eafbd(0, rdx_12);
                    }
                    else
                    {
                        var_c8 = rax_19;
                        let mut rax_20: *mut u64;
                        let mut rdx_13: i64;
                        rax_20 = uucore::util_name::h074417a1e6395129();
                        var_e8 = rax_20;
                        let var_e0_9: i64 = rdx_13;
                        var_b8 = &var_e8;
                        let var_b0_8: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h45ff57c8145456ef;
                        var_120 = &data_4f6038;
                        var_118 = 2;
                        var_100 = 0;
                        var_110 = &var_b8;
                        *var_110[8] = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_120);
                        var_e8 = &var_c8;
                        let var_e0_10: fn(arg1: *mut i64) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hed818a206c69414d;
                        var_120 = &data_4f60d8;
                        var_118 = 2;
                        var_100 = 0;
                        var_110 = &var_e8;
                        *var_110[8] = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_120);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h3739735bf7fffe55(var_c8, rdx_12);
                        rbx = 0;
                    }
                }
                else
                {
                    let mut rax_18: *mut u64;
                    let mut rdx_10: i64;
                    rax_18 = uucore::util_name::h074417a1e6395129();
                    var_e8 = rax_18;
                    let var_e0_7: i64 = rdx_10;
                    var_b8 = &var_e8;
                    let var_b0_7: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h45ff57c8145456ef;
                    var_120 = &data_4f6038;
                    var_118 = 2;
                    var_100 = 0;
                    var_110 = &var_b8;
                    *var_110[8] = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_120);
                    var_c8 = var_88;
                    var_b8 = *r12.byte_offset(8);
                    var_e8 = &var_c8;
                    let var_e0_8: fn(arg1: *mut i64, arg2: i64) -> u64 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
                    let var_d8_4: *mut *mut *mut u64 = &var_b8;
                    var_d0 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
                    var_120 = &data_4f60a8;
                    var_118 = 3;
                    var_100 = 0;
                    var_110 = &var_e8;
                    *var_110[8] = 2;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_120);
                    rbx = 0;
                }
                
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h3184c1608c40fe12(&var_120, var_88, var_80);
                let var_d8_5: i64 = var_110;
                var_e8 = var_120;
                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h05975b5bada9d9c2(&var_68, 
                    &var_e8);
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hba0bfa390dca4ccb(&var_90);
                rax_11 = 0x18;
                
                if rbp_1 == var_70_1
                {
                    rax_11 = nullptr;
                }
                
                if rbp_1 == var_70_1
                {
                    break;
                }
            }
            else
            {
                let mut rax_10: *mut u64;
                let mut rdx_4: i64;
                rax_10 = uucore::util_name::h074417a1e6395129();
                var_e8 = rax_10;
                let var_e0_3: i64 = rdx_4;
                var_b8 = &var_e8;
                let var_b0_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h45ff57c8145456ef;
                var_120 = &data_4f6038;
                var_118 = 2;
                var_100 = 0;
                var_110 = &var_b8;
                *var_110[8] = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_120);
                var_e8 = 1;
                let var_e0_4: *mut i8 = r15_1;
                let var_d8_2: i64 = r13_1;
                var_d0 = 1;
                var_b8 = &var_e8;
                let var_b0_4: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_120 = &data_4f6088;
                var_118 = 2;
                var_100 = 0;
                var_110 = &var_b8;
                *var_110[8] = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_120);
                rbx = 0;
                rax_11 = 0x18;
                
                if rbp_1 == var_70_1
                {
                    rax_11 = nullptr;
                }
                
                if rbp_1 == var_70_1
                {
                    goto 'label_465d9e;
                }
            }
            
            rax_4 = rax_11.byte_offset(rbp_1);
            r12 = rbp_1;
        }
        
        if (rbx & 1) == 0
        {
            'label_465d9e:
            var_120 = 1;
            result = alloc::boxed::Box$LT$T$GT$::new::h9832a2155b69f23f(&var_120);
        }
        else
        {
            result = 0;
        }
    }
    
    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$std..path..PathBuf$GT$$GT$::hab08fbae43caaa47(&var_68);
    result
}
