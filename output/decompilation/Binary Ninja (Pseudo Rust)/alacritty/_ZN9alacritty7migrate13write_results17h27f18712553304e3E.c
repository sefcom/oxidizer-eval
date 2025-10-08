
  fn alacritty::migrate::write_results::h27f18712553304e3(arg1: *mut *mut c_void, arg2: i8, arg3: i8, arg4: *mut c_void, arg5: i64) -> *mut c_void

{
    let mut var_50: i64 = arg5;
    let r9: i64;
    let var_48: i64 = r9;
    let mut result: *mut c_void;
    let mut rdx: i64;
    result =
        _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::hd53aef2935859e43(arg4);
    let mut result_3: *mut c_void = result;
    let var_38: i64 = rdx;
    let mut var_118: i32;
    let mut var_e0: *mut i64;
    let mut var_d0: i8;
    
    if (arg2 & 1) == 0
    {
        let mut rax: *mut i8;
        let mut rdx_1: i64;
        rax = std::path::Path::parent::hef287f60afa56900(result, rdx);
        
        if rax == 0
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        let var_f0_2: i64 = 6;
        let var_110_2: *const i8 = ".tmptimein `tip:\x1b[3mj";
        let mut var_108_2: i64 = 4;
        let var_100_2: i64 = 1;
        let var_f8_2: i64 = 0;
        let var_e8_1: i16 = 0;
        var_118 = 0;
        let rdx_3: u64 = tempfile::Builder::tempfile_in::h203e62019191885c(&var_e0, &var_118, rax);
        let mut var_98: i128;
        let result_1: *mut c_void;
        
        if var_d0 != 2
        {
            let mut var_b8: i128 = var_e0;
            let mut rax_1: i64;
            let mut rdx_5: u64;
            rax_1 = std::fs::write::h66f59f1b9d3e3b3e(var_b8, *var_b8[8], arg5);
            
            if rax_1 != 0
            {
                alacritty::migrate::write_results::_$u7b$$u7b$closure$u7d$$u7d$::h2c77f94bac6cdc40(
                    &var_118, rax_1, rdx_5);
                let rax_2: *mut c_void = var_118;
                *arg1.byte_offset(8) = var_110_2;
                *arg1 = rax_2;
                return core::ptr::drop_in_place$LT$tempfile..file..NamedTempFile$GT$::h537a1cab63bc4ccb(&var_b8);
            }
            
            var_108_2 = var_d0;
            var_118 = var_b8;
            let rdx_7: u64 = tempfile::file::NamedTempFile$LT$F$GT$::persist::hb8d3945b476b9032(
                &var_e0, &var_118, result);
            let var_c8: i8;
            
            if var_c8 != 2
            {
                let var_c0: i64;
                let var_f8_3: i64 = var_c0;
                var_108_2 = var_d0;
                var_118 = var_e0;
                alacritty::migrate::write_results::_$u7b$$u7b$closure$u7d$$u7d$::h55ffbd0b9d4ba002(
                    &var_98, &var_118, rdx_7);
                result = var_98;
                let fd: i32 = *var_98[8];
                let mut var_78: i96;
                var_78 = *var_98[0xc];
                *var_78[8] = *result_1[4];
                
                if -(result) != -0x8000000000000000
                {
                    *arg1.byte_offset(0x14) = *var_78[8];
                    *arg1.byte_offset(0xc) = var_78;
                    *arg1 = result;
                    arg1[1] = fd;
                }
                else
                {
                    result = core::ptr::drop_in_place$LT$std..fs..File$GT$::hb4e0882300dc626a(fd);
                    *arg1 = -0x8000000000000000;
                }
            }
            else
            {
                result = core::ptr::drop_in_place$LT$std..fs..File$GT$::hb4e0882300dc626a(var_e0);
                *arg1 = -0x8000000000000000;
            }
        }
        else
        {
            alacritty::migrate::write_results::_$u7b$$u7b$closure$u7d$$u7d$::hd303ff52691918ba(
                &var_98, var_e0, rdx_3);
            result = result_1;
            let result_2: *mut c_void = result;
            let zmm0_2: i128 = var_98;
            let var_78_1: i128 = zmm0_2;
            arg1[2] = result;
            *arg1 = zmm0_2;
        }
    }
    else
    {
        if (arg3 & 1) == 0
        {
            var_e0 = &result_3;
            let var_d8_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h3a6a9966801425ec;
            var_d0 = &var_50;
            let var_c8_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hde322f69d68256c4;
            var_118 = &data_c83740;
            let var_110_1: i64 = 4;
            let var_f8_1: *mut c_void = &data_503ab0;
            let var_f0_1: i64 = 3;
            let var_108_1: *mut *mut i64 = &var_e0;
            let var_100_1: i64 = 2;
            result = std::io::stdio::_print::h5e446ff973c02de6(&var_118);
        }
        
        *arg1 = -0x8000000000000000;
    }
    result
}
