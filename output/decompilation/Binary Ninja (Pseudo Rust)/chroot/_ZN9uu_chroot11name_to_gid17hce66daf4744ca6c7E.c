
  fn uu_chroot::name_to_gid::hce66daf4744ca6c7(arg1: *mut i32, arg2: *mut i8, arg3: u64) -> i64

{
    let mut var_40: i64;
    _$LT$uucore..features..entries..Group$u20$as$u20$uucore..features..entries..Locate$LT$$RF$str$GT$$GT$::locate::h2c7d885aadff2e1b(&var_40, arg2, arg3);
    let mut var_50: i32;
    let mut rcx_1: i32;
    
    if !(0 + -(var_40))
    {
        core::ptr::drop_in_place$LT$uucore..features..entries..Group$GT$::h7ce89e27977a76b1(
            &var_40);
        let var_28: i32;
        let var_4c_1: i32 = var_28;
        var_50 = 0;
        arg1[1] = var_28;
        rcx_1 = 0xe;
    }
    else
    {
        let var_38: i64;
        let var_48_1: i64 = var_38;
        var_50 = 1;
        let rax_2: i64 =
            core::num::_$LT$impl$u20$u32$GT$::from_ascii_radix::h825576ac29f90020(arg2, arg3);
        rcx_1 = 9;
        
        if (rax_2 & 1) == 0
        {
            arg1[1] = rax_2 >> 0x20;
            rcx_1 = 0xe;
        }
    }
    
    *arg1 = rcx_1;
    core::ptr::drop_in_place$LT$core..result..Result$LT$u32$C$std..io..error..Error$GT$$GT$::h15c219900d5848c6(&var_50)
}
