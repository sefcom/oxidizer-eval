
  fn uu_mkdir::create_dir::hfbbf39588947948c(arg1: *mut i64, arg2: u64, arg3: i8, arg4: *mut c_void) -> u64

{
    let mut var_e0: *mut c_void;
    std::fs::metadata::h6b8d15ae85f42ce6(&var_e0, arg1);
    let r12: *mut c_void = var_e0;
    let var_d8: i64;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hd8a7744016ac23d6(r12, var_d8);
    let mut rbp_1: u64;
    let mut var_150: *mut *mut i64;
    let mut var_140: *mut i64;
    let mut var_120: i64;
    
    if r12 == 2 || *arg4.byte_offset(0xc) != 0
    {
        std::path::Path::components::hd0346d362206f2e9(&var_120, arg1, arg2);
        rbp_1 = 0;
        std::path::Path::components::hd0346d362206f2e9(&var_e0, 1, 0);
        
        if _$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::hd9623c64792f17b1(
            &var_120, &var_e0) == 0
        {
            let mut rbx_2: u64 = arg2;
            
            if *arg4.byte_offset(0xc) != 0
            {
                let mut rax_1: *mut i8;
                let mut rdx_2: i64;
                rax_1 = std::path::Path::parent::hef287f60afa56900(arg1, rbx_2);
                
                if rax_1 == 0
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h09085b3eedcee021(&var_e0, "failed to create whole tree: cre…", 0x1b);
                    let mut var_c8: i64;
                    var_c8 = 1;
                    rbx_2 = arg2;
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::had00d84193dcc420(alloc::boxed::Box$LT$T$GT$::new::h5788815961083ce5(&var_e0), &data_4ede60);
                }
                else
                {
                    let rax_2: u64 = uu_mkdir::create_dir::hfbbf39588947948c(rax_1, rdx_2, 1, arg4);
                    
                    if rax_2 != 0
                    {
                        return rax_2;
                    }
                }
            }
            
            let mut r14_1: *mut i64 = arg1;
            let rax_5: i64 = std::fs::create_dir::h1034eabddbb2ef35(r14_1);
            
            if rax_5 != 0
            {
                if std::path::Path::is_dir::h02edbc48c38d7d9e(r14_1, rbx_2) == 0
                {
                    return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                }
                
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hca385262aaa5c047(rax_5);
                return 0;
            }
            
            if *arg4.byte_offset(0xd) != 0
            {
                let mut rax_7: *mut *mut i64;
                let mut rdx_4: i64;
                rax_7 = uucore::util_name::h074417a1e6395129();
                var_150 = rax_7;
                let var_148_2: i64 = rdx_4;
                var_120 = 1;
                let var_118_1: *mut i64 = r14_1;
                let var_110_1: u64 = rbx_2;
                let mut var_108: i32;
                var_108 = 1;
                var_140 = &var_150;
                let var_138_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f8342cc4ae57580;
                let var_130_1: *mut i64 = &var_120;
                let var_128_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_e0 = &data_4edef8;
                let var_d8_2: i64 = 3;
                let var_c0_2: i64 = 0;
                let var_d0_2: *mut *mut i64 = &var_140;
                let var_c8_2: i64 = 2;
                std::io::stdio::_print::h5e446ff973c02de6(&var_e0);
            }
            
            let mut rdx_7: i32;
            
            if r12 != 2
            {
                rdx_7 = *arg4.byte_offset(8);
            }
            else
            {
                let rax_8: i32 =
                    uucore::features::fsxattr::get_acl_perm_bits_from_xattr::hcf1b9ddb092fba14(
                    r14_1);
                
                if arg3 == 0
                {
                    rdx_7 = rax_8 | *arg4.byte_offset(8);
                }
                else
                {
                    r14_1 = arg1;
                    rdx_7 = rax_8 | ((uucore::features::mode::get_umask::h22fe72fd4e3f2e99()
                        & 0x13f) ^ 0x1ff);
                }
            }
            
            rbp_1 = uu_mkdir::chmod::h277b932bb3f300b3(r14_1, rbx_2, rdx_7);
        }
    }
    else
    {
        var_140 = arg1;
        let var_138_1: u64 = arg2;
        var_150 = &var_140;
        let var_148_1: fn(arg1: *mut i64, arg2: i64) -> u64 =
            _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
        var_e0 = &data_4eded8;
        let var_d8_1: i64 = 2;
        let var_c0_1: i64 = 0;
        let var_d0_1: *mut *mut *mut i64 = &var_150;
        let var_c8_1: i64 = 1;
        core::option::Option$LT$T$GT$::map_or_else::h568d5256e3b46eca(&var_120, &var_e0);
        let var_108_1: i32 = 1;
        rbp_1 = alloc::boxed::Box$LT$T$GT$::new::h5788815961083ce5(&var_120);
    }
    rbp_1
}
