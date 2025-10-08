
  fn uvx::get_uv_path::h0750ce6cdeed20ac(arg1: *mut i64, arg2: i64, arg3: u64, arg4: i64) -> i64

{
    let mut r14: *mut *mut c_void = -0x8000000000000000;
    let mut rbx: i64;
    rbx = 1;
    let mut var_120: *mut i64;
    let mut var_110: *mut *mut c_void;
    let mut var_e0: *mut i64;
    let mut var_d0: i8;
    let var_c8: *mut i64;
    let mut var_b8: *mut c_void;
    let mut var_a8: *mut *mut i64;
    let mut var_98: u64;
    let mut var_90: *mut i64;
    
    if arg4 != 0
    {
        uvx::get_uv_path::_$u7b$$u7b$closure$u7d$$u7d$::hb3af74d129f8e8a0(&var_110, arg2, arg3, 
            arg4);
        r14 = var_110;
        let var_108: *mut i64;
        let var_100: u64;
        
        if r14 != -0x8000000000000000
        {
            std::fs::exists::h9cadd70709e452ac(&var_d0, var_108);
            let var_cf: i8;
            
            if var_d0 == 1
            {
                var_e0 = var_c8;
                var_90 = var_108;
                let var_88_1: u64 = var_100;
                var_b8 = &var_90;
                let var_b0_1: fn(arg1: *mut i64, arg2: i64) -> u64 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
                var_a8 = &var_e0;
                let var_a0_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                var_110 = &data_463010;
                let var_108_1: i64 = 3;
                let var_f0_1: i64 = 0;
                let var_100_1: *const *mut c_void = &var_b8;
                let var_f8_1: i64 = 2;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_110);
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h65e5ef1b69c12763(var_e0);
            }
            else if var_cf != 0
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hb5df393ff8a371b0(&var_110, var_108, var_100);
                arg1[2] = var_100;
                *arg1 = var_110;
                /* tailcall */
                return core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h1594e359a3e45c89(r14, var_108);
            }
            var_98 = var_100;
            var_120 = var_108;
            rbx = 0;
        }
        else
        {
            var_98 = var_100;
            var_120 = var_108;
            r14 = -0x8000000000000000;
        }
    }
    
    let var_118: *mut *mut c_void = r14;
    var_b8 = &data_4097f0;
    let var_b0_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5eeb34b393a656f6;
    var_110 = &data_463040;
    let var_108_2: i64 = 1;
    let var_f0_2: i64 = 0;
    let var_100_2: *const *mut c_void = &var_b8;
    let var_f8_2: i64 = 1;
    let mut var_48: ();
    core::option::Option$LT$T$GT$::map_or_else::h3d837e6f33a5f387(&var_48, &var_110);
    std::path::Path::join::h73505886d6b9b383(&var_d0, arg2, arg3, &var_48);
    r14 = 1;
    std::fs::exists::h9cadd70709e452ac(&var_110, var_c8);
    let rax_4: i8 = var_110;
    let mut result: i64;
    let result_1: i64;
    
    if rax_4 != 0 || (*var_110[1] & 1) != 0
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$std..io..error..Error$GT$$GT$::h990fa02aacbdfeb0(rax_4, var_108_2);
        result = result_1;
        arg1[2] = result;
        *arg1 = var_d0;
        rbx = rbx;
        
        if (rbx & 1) == 0
        {
            return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h8f4b31d99210b02c(var_118, 
                var_120);
        }
    }
    else
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$std..io..error..Error$GT$$GT$::h990fa02aacbdfeb0(rax_4, var_108_2);
        let mut var_78: i128;
        
        if rbx == 0
        {
            let mut var_58: *mut i64 = var_120;
            let var_50_1: u64 = var_98;
            var_e0 = var_c8;
            let result_2: i64 = result_1;
            var_b8 = &var_58;
            let var_b0_3: fn(arg1: *mut i64, arg2: i64) -> u64 =
                _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
            let var_a8_1: *mut *mut i64 = &var_e0;
            let var_a0_2: fn(arg1: *mut i64, arg2: i64) -> u64 =
                _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
            var_110 = &data_463050;
            let var_108_4: i64 = 2;
            let var_f0_4: i64 = 0;
            let var_100_4: *const *mut c_void = &var_b8;
            let var_f8_4: i64 = 2;
            core::option::Option$LT$T$GT$::map_or_else::h3d837e6f33a5f387(&var_90, &var_110);
            var_78 = var_90;
            let var_80: i64;
            let var_68_2: i64 = var_80;
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h8f4b31d99210b02c(var_118, var_120);
            r14 = nullptr;
        }
        else
        {
            var_90 = var_c8;
            let result_3: i64 = result_1;
            var_e0 = &var_90;
            let var_d8_1: fn(arg1: *mut i64, arg2: i64) -> u64 =
                _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
            var_110 = &data_463070;
            let var_108_3: i64 = 1;
            let var_f0_3: i64 = 0;
            let var_100_3: *mut *mut i64 = &var_e0;
            let var_f8_3: i64 = 1;
            core::option::Option$LT$T$GT$::map_or_else::h3d837e6f33a5f387(&var_b8, &var_110);
            var_78 = var_b8;
            let var_68_1: *mut *mut i64 = var_a8;
            r14 = 1;
        }
        
        arg1[1] = std::io::error::Error::new::hdf72be64d8c57d1c(&var_78);
        *arg1 = -0x8000000000000000;
        result =
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h8f4b31d99210b02c(var_d0, var_c8);
        r14 ^= 1;
        rbx |= r14;
        
        if (rbx & 1) == 0
        {
            return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h8f4b31d99210b02c(var_118, 
                var_120);
        }
    }
    result
}
