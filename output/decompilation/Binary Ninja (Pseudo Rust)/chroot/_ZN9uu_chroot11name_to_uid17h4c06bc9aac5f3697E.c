
  fn uu_chroot::name_to_uid::h4c06bc9aac5f3697(arg1: *mut i32, arg2: *mut i8, arg3: u64) -> i64

{
    let mut var_a0: i64;
    _$LT$uucore..features..entries..Passwd$u20$as$u20$uucore..features..entries..Locate$LT$$RF$str$GT$$GT$::locate::h4bb3a5c7c498e57d(&var_a0, arg2, arg3);
    let mut var_b0: i32;
    let mut rcx_1: i32;
    
    if !(0 + -(var_a0))
    {
        core::ptr::drop_in_place$LT$uucore..features..entries..Passwd$GT$::hb014c78361e81f37(
            &var_a0);
        let var_28: i32;
        let var_ac_1: i32 = var_28;
        var_b0 = 0;
        arg1[1] = var_28;
        rcx_1 = 0xe;
    }
    else
    {
        let var_98: i64;
        let var_a8_1: i64 = var_98;
        var_b0 = 1;
        let rax_2: i64 =
            core::num::_$LT$impl$u20$u32$GT$::from_ascii_radix::h825576ac29f90020(arg2, arg3);
        rcx_1 = 8;
        
        if (rax_2 & 1) == 0
        {
            arg1[1] = rax_2 >> 0x20;
            rcx_1 = 0xe;
        }
    }
    
    *arg1 = rcx_1;
    core::ptr::drop_in_place$LT$core..result..Result$LT$u32$C$std..io..error..Error$GT$$GT$::h15c219900d5848c6(&var_b0)
}
