
  fn just::function::env_var::hbabeac8dce4c02ef(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: u64) -> *mut i64

{
    let mut var_d8: i64 = arg3;
    let var_d0: u64 = arg4;
    let rax_1: *mut i64 = *(*arg2).byte_offset(8);
    let rax_2: *mut c_void =
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h7621d24a43012b45(*rax_1, 
        rax_1[1], arg3, arg4);
    
    if rax_2 == 0
    {
        let mut var_40: i8;
        let rdx_1: u64 = std::env::var::haeedb8a63b9509fb(&var_40, arg3);
        let var_38: i128;
        let var_28: i64;
        
        if (var_40 & 1) == 0
        {
            arg1[3] = var_28;
            *arg1.byte_offset(8) = var_38;
            *arg1 = 0;
        }
        else
        {
            let mut var_c8: *mut *mut [i8; 0xa0];
            let mut var_98: *mut i64;
            
            if !(0 + -(var_38))
            {
                let var_68_1: i64 = var_28;
                let mut var_78: i128 = var_38;
                var_98 = &var_d8;
                let var_90_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
                let var_88_1: *mut i128 = &var_78;
                let var_80_1: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 =
                    _$LT$std..path..PathBuf$u20$as$u20$core..fmt..Debug$GT$::fmt::h56ce33c072e686b1;
                var_c8 = &data_82fe68;
                let var_c0_2: i64 = 2;
                let var_a8_2: i64 = 0;
                let var_b8_2: *mut *mut i64 = &var_98;
                let var_b0_2: i64 = 2;
                let mut var_58: i128;
                core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&var_58, 0, rdx_1, 
                    &var_c8);
                let var_48: i64;
                arg1[3] = var_48;
                *arg1.byte_offset(8) = var_58;
                *arg1 = 1;
                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hb5088e4c98ca9abd(
                    &var_78);
            }
            else
            {
                var_98 = &var_d8;
                let var_90_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
                var_c8 = &data_82fe48;
                let var_c0_1: i64 = 2;
                let var_a8_1: i64 = 0;
                let var_b8_1: *mut *mut i64 = &var_98;
                let var_b0_1: i64 = 1;
                core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&arg1[1], 0, rdx_1, 
                    &var_c8);
                *arg1 = 1;
            }
        }
    }
    else
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
            &arg1[1], rax_2);
        *arg1 = 0;
    }
    
    arg1
}
