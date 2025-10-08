
  fn uu_pathchk::check_extra::h08af7cafa8f69b56(arg1: i64, arg2: i64) -> i64

{
    let mut var_98: *mut *mut [i8; 0x40];
    let mut rdi_4: *mut *mut c_void;
    let mut var_60: *mut c_void;
    
    if arg2 == 0
    {
        'label_4561b2:
        alloc::str::join_generic_copy::h3bd5640a2d2f1574(&var_98, arg1, arg2);
        let var_90: i64;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h6647f07fb02b5c78(var_98, var_90);
        let mut result: i64;
        result = 1;
        let var_88: i64;
        
        if var_88 != 0
        {
            return result;
        }
        
        var_60 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
        var_98 = &data_4dea68;
        let var_90_1: i64 = 1;
        let var_88_1: i64 = 8;
        let var_80_1: i128 = {0};
        rdi_4 = &var_60;
    }
    else
    {
        let mut rbx_1: i64 = 0;
        
        loop
        {
            let r12_1: i64 = *(arg1 + rbx_1 + 8);
            let r13_1: i64 = *(arg1 + rbx_1 + 0x10);
            var_98 = 0;
            
            if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::ha1477059272abce5(r12_1, 
                r13_1, core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(&var_98)) != 0
            {
                let mut var_68: *mut c_void = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
                var_60 = nullptr;
                let var_58_1: i64 = r12_1;
                let var_50_1: i64 = r13_1;
                let var_48_1: i8 = 1;
                let mut var_40: *mut *mut c_void = &var_60;
                let var_38_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_98 = &data_4deab8;
                let var_90_2: i64 = 2;
                let mut var_80: i128;
                *var_80[8] = 0;
                let var_88_2: *mut *mut *mut c_void = &var_40;
                var_80 = 1;
                rdi_4 = &var_68;
                break;
            }
            
            rbx_1 += 0x18;
            
            if arg2 * 0x18 == rbx_1
            {
                goto 'label_4561b2;
            }
        }
    }
    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h7a4400e9f2ab9568(_$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::hebff3e936d8559e8(rdi_4, 
        &var_98));
    0
}
