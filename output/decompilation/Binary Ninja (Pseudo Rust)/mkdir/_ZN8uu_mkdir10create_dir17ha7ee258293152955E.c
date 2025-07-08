
  fn uu_mkdir::create_dir::ha7ee258293152955(arg1: *mut i8, arg2: u64, arg3: i8, arg4: i8, arg5: i8, arg6: i32) -> *mut i128

{
    let mut var_e0: *mut c_void;
    std::fs::metadata::hde9f2ae1e0e2ce8d(&var_e0, arg1);
    let r13: *mut c_void = var_e0;
    let mut r13_1: *mut i128;
    let mut var_160: *mut *mut i8;
    let mut var_140: *mut i8;
    let mut var_120: i64;
    let var_d8: i64;
    
    if r13 != 2
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hda5a6707fa3c012c(r13, var_d8);
        
        if arg3 != 0
        {
            goto 'label_4b2ec9;
        }
        
        var_140 = arg1;
        let var_138_1: u64 = arg2;
        var_160 = &var_140;
        let var_158_1: fn(arg1: *mut i64, arg2: *mut c_void) -> i64 =
            _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
        var_e0 = &data_5205e8;
        let var_d8_1: i64 = 2;
        let var_c0_1: i64 = 0;
        let var_d0_1: *mut *mut *mut i8 = &var_160;
        let var_c8_1: i64 = 1;
        core::option::Option$LT$T$GT$::map_or_else::h6db0321d2b87c404(&var_120, &var_e0);
        let var_108_1: i32 = 1;
        r13_1 = alloc::boxed::Box$LT$T$GT$::new::h121d1d0fd1fc2533(&var_120);
    }
    else
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hda5a6707fa3c012c(2, var_d8);
        'label_4b2ec9:
        let var_150_1: i32 = r13;
        std::path::Path::components::h4f3217acf0fc8653(&var_120, arg1, arg2);
        r13_1 = nullptr;
        std::path::Path::components::h4f3217acf0fc8653(&var_e0, 1, 0);
        
        if _$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5cac1ec2999e76da(
            &var_120, &var_e0) == 0
        {
            if arg3 != 0
            {
                let mut rax_1: *mut i8;
                let mut rdx_2: i64;
                rax_1 = std::path::Path::parent::h65c9a340a6266f2d(arg1, arg2);
                
                if rax_1 == 0
                {
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha4208e868ecb88cc(
                        &var_e0, "failed to create whole tree: cre…", 0x1b);
                    let mut var_c8: i64;
                    var_c8 = 1;
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h71810d9408842807(alloc::boxed::Box$LT$T$GT$::new::h121d1d0fd1fc2533(&var_e0), &data_520578);
                }
                else
                {
                    let rax_2: *mut i128 =
                        uu_mkdir::create_dir::ha7ee258293152955(rax_1, rdx_2, 1, arg4, 1, arg6);
                    
                    if rax_2 != 0
                    {
                        return rax_2;
                    }
                }
            }
            
            let rax_5: i64 = std::fs::create_dir::h301da8cdba059b54(arg1);
            
            if rax_5 != 0
            {
                if std::path::Path::is_dir::h9ac0db933706da51(arg1, arg2) == 0
                {
                    return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                }
                
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h3ed53d85887f0f2d(rax_5);
                return nullptr;
            }
            
            if arg4 != 0
            {
                let mut rax_7: *mut *mut i8;
                let mut rdx_4: i64;
                rax_7 = uucore::util_name::h60d842bf27b05e82();
                var_160 = rax_7;
                let var_158_2: i64 = rdx_4;
                var_120 = 1;
                let var_118_1: *mut i8 = arg1;
                let var_110_1: u64 = arg2;
                let mut var_108: i32;
                var_108 = 1;
                var_140 = &var_160;
                let var_138_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hfd6a55cddc5280de;
                let var_130_1: *mut i64 = &var_120;
                let var_128_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                var_e0 = &data_520608;
                let var_d8_2: i64 = 3;
                let var_c0_2: i64 = 0;
                let var_d0_2: *mut *mut i8 = &var_140;
                let var_c8_2: i64 = 2;
                std::io::stdio::_print::he918bceb0c89db46(&var_e0);
            }
            
            let mut r15_1: i32 = arg6;
            
            if var_150_1 == 2
            {
                let rax_8: i32 =
                    uucore::features::fsxattr::get_acl_perm_bits_from_xattr::h877432bdc0435850(
                    arg1);
                
                if arg5 != 0
                {
                    r15_1 =
                        (uucore::features::mode::get_umask::hd2aa58752ad993fa() & 0x13f) ^ 0x1ff;
                }
                
                r15_1 |= rax_8;
            }
            
            return uu_mkdir::chmod::hedcae91ac0dc9632(arg1, arg2, r15_1);
        }
    }
    r13_1
}
