
  fn uu_chgrp::parse_gid_from_str::h3091fc49b902fbfc(arg1: *mut i128, arg2: *mut i8, arg3: u64) -> u32

{
    let mut var_60: *mut i8 = arg2;
    let var_58: u64 = arg3;
    let mut var_a8: i32 = 0;
    let mut rax_1: *mut i8;
    let mut rdx_1: i64;
    rax_1 =
        _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hd66f2c78bdb8496c(
        core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(&var_a8), arg2, arg3);
    let mut var_90: i32;
    let mut var_78: *mut i64;
    
    if rax_1 != 0
    {
        let mut var_50: *mut i8 = rax_1;
        let var_48_1: i64 = rdx_1;
        let rax_2: i64 =
            core::num::_$LT$impl$u20$u32$GT$::from_ascii_radix::h825576ac29f90020(rax_1, rdx_1);
        
        if (rax_2 & 1) == 0
        {
            let result: u32 = rax_2 >> 0x20;
            *arg1.byte_offset(8) = result;
            *arg1 = -0x8000000000000000;
            return result;
        }
        
        var_78 = &var_50;
        let var_70_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdb887a7c8cbc9c9f;
        var_a8 = &data_4f4838;
        let var_a0_1: i64 = 2;
        let var_88_1: i64 = 0;
        let var_98_1: *mut *mut i64 = &var_78;
        var_90 = 1;
        return core::option::Option$LT$T$GT$::map_or_else::h10b49b386562c66c(arg1, &var_a8);
    }
    
    _$LT$uucore..features..entries..Group$u20$as$u20$uucore..features..entries..Locate$LT$$RF$str$GT$$GT$::locate::h2c7d885aadff2e1b(&var_a8, arg2, arg3);
    let rdi_5: i64 = var_a8;
    let var_a0: i64;
    let mut rdi_8: i32;
    
    if -(rdi_5) != -0x8000000000000000
    {
        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h39f002659944e503(rdi_5, 
            var_a0);
        *arg1.byte_offset(8) = var_90;
        *arg1 = -0x8000000000000000;
        rdi_8 = 0;
    }
    else
    {
        let rax_5: i64 =
            core::num::_$LT$impl$u20$u32$GT$::from_ascii_radix::h825576ac29f90020(arg2, arg3);
        
        if (rax_5 & 1) == 0
        {
            *arg1.byte_offset(8) = rax_5 >> 0x20;
            *arg1 = -0x8000000000000000;
        }
        else
        {
            let mut var_40: *mut i64 = &var_60;
            let var_38_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdb887a7c8cbc9c9f;
            var_a8 = &data_4f4858;
            let var_a0_2: i64 = 2;
            let var_88_2: i64 = 0;
            let var_98_2: *mut *mut i64 = &var_40;
            var_90 = 1;
            core::option::Option$LT$T$GT$::map_or_else::h10b49b386562c66c(&var_78, &var_a8);
            let var_68: i64;
            arg1[1] = var_68;
            *arg1 = var_78;
        }
        
        rdi_8 = 1;
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$u32$C$std..io..error..Error$GT$$GT$::h4b0917c8d393a7b1(rdi_8, var_a0)
}
