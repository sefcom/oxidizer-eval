
  fn uu_rm::prompt_file::h2c52052acc0b58bb(arg1: i64, arg2: u64, arg3: i8) -> u64

{
    let mut result: u64;
    
    if arg3 == 0
    {
        result = 1;
    }
    else
    {
        let mut var_160: *mut c_void;
        let mut var_128: *const *mut c_void;
        let mut var_108: *mut i64;
        let mut var_e0: i32;
        let var_a8: i32;
        let mut rbx_1: u64;
        
        if arg3 == 2
        {
            std::fs::symlink_metadata::h9e12b59fb6df20f8(&var_e0, arg1);
            
            if var_e0 != 2 && (0xf000 & var_a8) == 0xa000
            {
                let mut rax_1: *mut *mut c_void;
                let mut rdx_1: i64;
                rax_1 = uucore::util_name::h60d842bf27b05e82();
                var_128 = rax_1;
                let var_120_1: i64 = rdx_1;
                var_108 = &var_128;
                let mut var_100: i32;
                var_100 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
                var_160 = &data_527970;
                let var_158_1: i64 = 2;
                let var_140_1: i64 = 0;
                let var_150_1: *mut *mut i64 = &var_108;
                let var_148_1: i64 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_160);
                var_128 = 1;
                let var_120_2: i64 = arg1;
                let var_118_1: u64 = arg2;
                let var_110_1: i8 = 1;
                var_108 = &var_128;
                var_100 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                var_160 = &data_527ae8;
                let var_158_2: i64 = 2;
                let var_140_2: i64 = 0;
                let var_150_2: *mut *mut i64 = &var_108;
                let mut var_148_2: i64 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_160);
                var_160 = &data_527b08;
                let var_158_3: i64 = 1;
                let var_150_3: i64 = 8;
                var_148_2 = {0};
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_160);
                let mut var_130: *mut c_void = &std::io::stdio::stderr::INSTANCE::ha28648ccba9ff424;
                _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(
                    &var_130);
                rbx_1 = uucore::read_yes::hc350e858ab85cf03();
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h539b7fb1f87034ca(&var_e0);
                return rbx_1;
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h539b7fb1f87034ca(&var_e0);
        }
        
        var_108 = 0x1b600000000;
        let mut var_100_1: i32 = 0;
        let var_fc_1: i16 = 0;
        var_100_1 = 0x101;
        let mut var_f0: i32;
        std::fs::OpenOptions::open::hd10b8d5ca5b809f9(&var_f0, &var_108, arg1);
        
        if var_f0 == 0
        {
            let fd_1: i32;
            let mut fd: i32 = fd_1;
            std::fs::File::metadata::he899a18112e6f19e(&var_e0, &fd);
            
            if var_e0 != 2
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h539b7fb1f87034ca(&var_e0);
                
                if arg3 != 2 || (var_a8 & 0x92) == 0
                {
                    core::ptr::drop_in_place$LT$std..fs..File$GT$::hfa666ae70153c401(fd);
                    return uu_rm::prompt_file_permission_readonly::h2197b873951768fc(arg1);
                }
                
                let var_90: i64;
                let mut var_148: i64;
                let mut var_f8: *mut c_void;
                
                if var_90 == 0
                {
                    let mut rax_7: *mut c_void;
                    let mut rdx_5: i64;
                    rax_7 = uucore::util_name::h60d842bf27b05e82();
                    var_160 = rax_7;
                    let var_158_8: i64 = rdx_5;
                    var_128 = &var_160;
                    let var_120_6: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
                    var_e0 = &data_527970;
                    let var_d8_6: i64 = 2;
                    let var_c0_5: i64 = 0;
                    let var_d0_6: *mut *const *mut c_void = &var_128;
                    let var_c8_5: i64 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_e0);
                    var_160 = 1;
                    let var_158_9: i64 = arg1;
                    let var_150_5: u64 = arg2;
                    var_148 = 1;
                    var_128 = &var_160;
                    let var_120_7: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    var_e0 = &data_527b38;
                    let var_d8_7: i64 = 2;
                    let var_c0_6: i64 = 0;
                    let var_d0_7: *mut *const *mut c_void = &var_128;
                    let mut var_c8_6: i64 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_e0);
                    var_e0 = &data_527b08;
                    let var_d8_8: i64 = 1;
                    let var_d0_8: i64 = 8;
                    var_c8_6 = {0};
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_e0);
                    var_f8 = &std::io::stdio::stderr::INSTANCE::ha28648ccba9ff424;
                    _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(&var_f8);
                }
                else
                {
                    let mut rax_5: *mut c_void;
                    let mut rdx_3: i64;
                    rax_5 = uucore::util_name::h60d842bf27b05e82();
                    var_160 = rax_5;
                    let var_158_4: i64 = rdx_3;
                    var_128 = &var_160;
                    let var_120_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
                    var_e0 = &data_527970;
                    let var_d8_1: i64 = 2;
                    let var_c0_1: i64 = 0;
                    let var_d0_1: *mut *const *mut c_void = &var_128;
                    let var_c8_1: i64 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_e0);
                    var_160 = 1;
                    let var_158_5: i64 = arg1;
                    let var_150_4: u64 = arg2;
                    var_148 = 1;
                    var_128 = &var_160;
                    let var_120_4: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    var_e0 = &data_527b58;
                    let var_d8_2: i64 = 2;
                    let var_c0_2: i64 = 0;
                    let var_d0_2: *mut *const *mut c_void = &var_128;
                    let mut var_c8_2: i64 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_e0);
                    var_e0 = &data_527b08;
                    let var_d8_3: i64 = 1;
                    let var_d0_3: i64 = 8;
                    var_c8_2 = {0};
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_e0);
                    var_f8 = &std::io::stdio::stderr::INSTANCE::ha28648ccba9ff424;
                    _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(&var_f8);
                }
                rbx_1 = uucore::read_yes::hc350e858ab85cf03();
            }
            else
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h539b7fb1f87034ca(&var_e0);
                rbx_1 = 1;
            }
            
            core::ptr::drop_in_place$LT$std..fs..File$GT$::hfa666ae70153c401(fd);
            return rbx_1;
        }
        
        let var_e8: i64;
        var_e0 = var_e8;
        let rax_3: i8 = std::io::error::Error::kind::hb2ff5fa058639b3d(var_e8);
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h333f14ee3ed91a78(&var_e0);
        result = 1;
        
        if rax_3 == 1
        {
            return uu_rm::prompt_file_permission_readonly::h2197b873951768fc(arg1);
        }
    }
    
    result
}
