
  fn uu_touch::prepend_century::h599b7f098e7e4682(arg1: *mut i64, arg2: *mut i8, arg3: i64) -> u64

{
    let mut var_78: *mut i8 = arg2;
    let var_70: i64 = arg3;
    let rax: *mut i8 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(arg2, arg3);
    
    if rax == 0
    {
        core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, 0, 2);
        /* no return */
    }
    
    let rax_1: i64 = core::num::_$LT$impl$u20$u32$GT$::from_ascii_radix::h825576ac29f90020(rax);
    
    if (rax_1 & 1) != 0
    {
        let result: u64 =
            uu_touch::prepend_century::_$u7b$$u7b$closure$u7d$$u7d$::hf8149f90ade8620d();
        arg1[1] = result;
        arg1[2] = &data_679e10;
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    let mut var_7c: i32 = 0 + 0x13;
    let mut var_68: *mut i32 = &var_7c;
    let var_60_1: fn(arg1: *mut i32) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h6f30f0a695ff7937;
    let var_58_1: *mut i64 = &var_78;
    let var_50_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h18af96482be5ae0f;
    let mut var_48: *const i8 = &data_4574b0;
    let var_40_1: i64 = 2;
    let var_28_1: i64 = 0;
    let var_38_1: *mut *mut i32 = &var_68;
    let var_30_1: i64 = 2;
    core::option::Option$LT$T$GT$::map_or_else::h42b45f6f6f73b099(arg1, &var_48)
}
