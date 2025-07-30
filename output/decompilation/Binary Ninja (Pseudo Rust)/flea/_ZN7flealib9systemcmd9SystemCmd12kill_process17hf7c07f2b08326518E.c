
  fn flealib::systemcmd::SystemCmd::kill_process::hf7c07f2b08326518(arg1: *mut i128, arg2: i64, arg3: i64) -> *mut i128

{
    let mut var_48: i64 = arg3;
    let rcx: i64;
    let var_40: i64 = rcx;
    let mut var_78: *mut i64 = &var_48;
    let var_70: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5e99a2697242919d;
    let mut var_a8: *mut *mut [i8; 0x14] = &data_b09140;
    let var_a0: i64 = 1;
    let var_88: i64 = 0;
    let var_98: *mut *mut i64 = &var_78;
    let var_90: i64 = 1;
    let mut var_60: ();
    let var_58: i64;
    let var_50: i64;
    flealib::systemcmd::SystemCmd::execute_bash_command::h10459d7455dc0e1e(&var_78, 
        core::option::Option$LT$T$GT$::map_or_else::h09968eee8a96299b(&var_60, &var_a8), var_58, 
        var_50);
    let mut var_38: *mut *mut i64 = &var_78;
    let var_30: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
    var_a8 = &data_b09150;
    let var_a0_1: i64 = 1;
    let var_88_1: i64 = 0;
    let var_98_1: *mut *mut *mut i64 = &var_38;
    let var_90_1: i64 = 1;
    let mut var_28: i128;
    core::option::Option$LT$T$GT$::map_or_else::h09968eee8a96299b(&var_28, &var_a8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_78);
    let var_18: i64;
    arg1[1] = var_18;
    *arg1 = var_28;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_60);
    arg1
}
