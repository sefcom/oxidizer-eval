
  fn zoxide::util::FzfChild::write::h5751cfe08cd05641(arg1: *mut i64, arg2: *mut i32) -> u64

{
    if arg2[4] == 0xffffffff
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    let mut var_38: i64 = 1;
    let rcx: i64;
    let var_30: i64 = rcx;
    let rdx: i64;
    let var_28: i64 = rdx;
    let var_20: i32 = 9;
    let mut var_48: *mut i64 = &var_38;
    let var_40: fn(arg1: *mut i8, arg2: *mut i64) -> i64 =
        _$LT$zoxide..db..dir..DirDisplay$u20$as$u20$core..fmt..Display$GT$::fmt::h4918ffab7531bc79;
    let mut var_78: *mut c_void = &data_5348e0;
    let var_70: i64 = 2;
    let var_58: i64 = 0;
    let var_68: *mut *mut i64 = &var_48;
    let var_60: i64 = 1;
    let result: u64 = std::io::Write::write_fmt::hfcb550c4a28e0f86(&arg2[4], &var_78);
    
    if result == 0
    {
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    if std::io::error::Error::kind::h135fe00c4e7365f3(result) != 0xb
    {
        let result_2: u64 = result;
        var_78 = -0x8000000000000001;
        return anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::context::h0b576dad6fa188d6(arg1, &var_78);
    }
    
    let mut result_1: u64 = result;
    zoxide::util::FzfChild::wait::h58b549ee022416b6(&var_78, arg2);
    
    if !(0 + -(var_78))
    {
        arg1[2] = var_68;
        *arg1 = var_78;
    }
    else
    {
        arg1[1] = var_70;
        *arg1 = -0x7fffffffffffffff;
    }
    
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hc0a90eb9fb31b0c2(&result_1)
}
