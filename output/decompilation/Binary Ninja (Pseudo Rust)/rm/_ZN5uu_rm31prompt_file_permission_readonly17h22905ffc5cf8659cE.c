
  fn uu_rm::prompt_file_permission_readonly::h22905ffc5cf8659c(arg1: i64, arg2: i64, arg3: i8, arg4: i32) -> u64

{
    let mut r13: u64;
    
    if arg3 != 2
    {
        r13 = 1;
    }
    
    if arg3 == 2 || (arg3 & 1) == 0
    {
        std::io::stdio::stdin::h9a05a2c3e7544b2a();
        r13 = std::sys::io::is_terminal::isatty::is_terminal::he401db6fc1473b6f();
    }
    
    let mut var_e0: *mut c_void;
    std::fs::metadata::h578d377c5d8d0272(&var_e0, arg1);
    let r14: *mut c_void = var_e0;
    r13 ^= 1;
    let mut rbp: i32;
    rbp = 1;
    
    if (arg4 == 3 & r13) == 0
    {
        let mut var_110: *mut i64;
        let mut var_100: *mut *mut i64;
        
        if r14 == 2
        {
            'label_45e1af:
            let mut rax_4: *mut *mut i64;
            let mut rdx_1: i64;
            rax_4 = uucore::util_name::h074417a1e6395129();
            var_100 = rax_4;
            let var_f8_1: i64 = rdx_1;
            var_110 = &var_100;
            let var_108_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f6f103f460297c8;
            var_e0 = &data_4ea4a0;
            let var_d8_1: i64 = 2;
            let var_c0_1: i64 = 0;
            let var_d0_1: *mut *mut i64 = &var_110;
            let var_c8_1: i64 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_e0);
            var_100 = 1;
            let var_f8_2: i64 = arg1;
            let var_f0_1: i64 = arg2;
            let var_e8_1: i8 = 1;
            var_110 = &var_100;
            let var_108_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_e0 = &data_4ea6d0;
            let var_d8_2: i64 = 2;
            let var_c0_2: i64 = 0;
            let var_d0_2: *mut *mut i64 = &var_110;
            let mut var_c8_2: i64 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_e0);
            var_e0 = &data_4ea630;
            let var_d8_3: i64 = 1;
            let var_d0_3: i64 = 8;
            var_c8_2 = {0};
            std::io::stdio::_eprint::h57899770eacec2ad(&var_e0);
            var_e0 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
            _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::h73119290360117e3(
                &var_e0);
            rbp = uucore::read_yes::h67cb9532536454c0();
        }
        else if uu_rm::is_writable::h35835a5ca0912bec(arg1) == 0
        {
            let var_90: i64;
            
            if var_90 != 0
            {
                goto 'label_45e1af;
            }
            
            let mut rax_10: *mut *mut i64;
            let mut rdx_3: i64;
            rax_10 = uucore::util_name::h074417a1e6395129();
            var_100 = rax_10;
            let var_f8_4: i64 = rdx_3;
            var_110 = &var_100;
            let var_108_4: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f6f103f460297c8;
            var_e0 = &data_4ea4a0;
            let var_d8_5: i64 = 2;
            let var_c0_4: i64 = 0;
            let var_d0_5: *mut *mut i64 = &var_110;
            let var_c8_4: i64 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_e0);
            var_100 = 1;
            let var_f8_5: i64 = arg1;
            let var_f0_3: i64 = arg2;
            let var_e8_2: i8 = 1;
            var_110 = &var_100;
            let var_108_5: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_e0 = &data_4ea6b0;
            let var_d8_6: i64 = 2;
            let var_c0_5: i64 = 0;
            let var_d0_6: *mut *mut i64 = &var_110;
            let mut var_c8_5: i64 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_e0);
            var_e0 = &data_4ea630;
            let var_d8_7: i64 = 1;
            let var_d0_7: i64 = 8;
            var_c8_5 = {0};
            std::io::stdio::_eprint::h57899770eacec2ad(&var_e0);
            var_e0 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
            _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::h73119290360117e3(
                &var_e0);
            rbp = uucore::read_yes::h67cb9532536454c0();
        }
    }
    
    let var_d8: i64;
    core::ptr::drop_in_place$LT$$LP$bool$C$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$C$uu_rm..InteractiveMode$RP$$GT$::h34832e68475fb301(r14, var_d8);
    rbp
}
