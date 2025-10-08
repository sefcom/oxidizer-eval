
  fn uu_pr::header_content::h1c434cc3245eafa3(arg1: *mut i64, arg2: *mut c_void, arg3: i64)

{
    let mut var_90: i64 = arg3;
    
    if *arg2.byte_offset(0x141) == 0
    {
        *arg1 = 0;
        arg1[1] = 8;
        arg1[2] = 0;
        return;
    }
    
    let mut var_88: *mut c_void = arg2.byte_offset(0x78);
    let var_80: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    let var_78: *mut c_void = arg2.byte_offset(0x30);
    let var_70: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    let var_68: *mut i64 = &var_90;
    let var_60: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
    let mut var_38: *mut c_void = &data_669650;
    let var_30: i64 = 3;
    let var_18: i64 = 0;
    let var_28: *mut *mut c_void = &var_88;
    let var_20: i64 = 3;
    let mut var_50: i128;
    core::option::Option$LT$T$GT$::map_or_else::ha768742fd52e18ba(&var_50, &var_38);
    let rax_1: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x78);
    
    if rax_1 == 0
    {
        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
        /* no return */
    }
    
    var_88 = var_50;
    *rax_1 = 0;
    *(rax_1 + 8) = 1;
    *(rax_1 + 0x10) = {0};
    *(rax_1 + 0x20) = 1;
    *(rax_1 + 0x28) = 0;
    *(rax_1 + 0x30) = var_88;
    let var_40: i64;
    *(rax_1 + 0x40) = var_40;
    *(rax_1 + 0x48) = 0;
    *(rax_1 + 0x50) = 1;
    *(rax_1 + 0x58) = {0};
    *(rax_1 + 0x68) = 1;
    *(rax_1 + 0x70) = 0;
    *arg1 = 5;
    arg1[1] = rax_1;
    arg1[2] = 5;
}
