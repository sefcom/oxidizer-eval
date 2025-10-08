
  fn just::function::env_var_or_default::hb666ce340b10189a(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: u64, arg5: i64, arg6: u64) -> *mut i64

{
    let mut var_c8: i64 = arg3;
    let var_c0: u64 = arg4;
    let rax_1: *mut i64 = *(*arg2).byte_offset(8);
    let rax_2: *mut c_void =
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h7621d24a43012b45(*rax_1, 
        rax_1[1], arg3, arg4);
    
    if rax_2 == 0
    {
        let mut var_50: i8;
        let rdx_1: u64 = std::env::var::haeedb8a63b9509fb(&var_50, arg3);
        let var_48: i128;
        let var_38: i64;
        
        if (var_50 & 1) == 0
        {
            arg1[3] = var_38;
            *arg1.byte_offset(8) = var_48;
            *arg1 = 0;
        }
        else if !(0 + -(var_48))
        {
            let var_d8_1: i64 = var_38;
            let mut var_e8: i128 = var_48;
            let mut var_b8: *mut i64 = &var_c8;
            let var_b0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
            let var_a8_1: *mut i128 = &var_e8;
            let var_a0_1: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 =
                _$LT$std..path..PathBuf$u20$as$u20$core..fmt..Debug$GT$::fmt::h56ce33c072e686b1;
            let mut var_80: *mut *mut [i8; 0xa0] = &data_82fe68;
            let var_78_1: i64 = 2;
            let var_60_1: i64 = 0;
            let var_70_1: *mut *mut i64 = &var_b8;
            let var_68_1: i64 = 2;
            let mut var_98: i128;
            core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&var_98, 0, rdx_1, 
                &var_80);
            let var_88: i64;
            arg1[3] = var_88;
            *arg1.byte_offset(8) = var_98;
            *arg1 = 1;
            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hb5088e4c98ca9abd(&var_e8);
        }
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&arg1[1], arg5, arg6);
            *arg1 = 0;
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
