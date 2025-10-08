
  int64_t uu_chroot::name_to_uid::h4c06bc9aac5f3697(int32_t* arg1, char* arg2, uint64_t arg3)

{
    int64_t var_a0;
    _$LT$uucore..features..entries..Passwd$u20$as$u20$uucore..features..entries..Locate$LT$$RF$str$GT$$GT$::locate::h4bb3a5c7c498e57d(&var_a0, arg2, arg3);
    int32_t var_b0;
    int32_t rcx_1;
    
    if (!(0 + -(var_a0)))
    {
        core::ptr::drop_in_place$LT$uucore..features..entries..Passwd$GT$::hb014c78361e81f37(
            &var_a0);
        int32_t var_28;
        int32_t var_ac_1 = var_28;
        var_b0 = 0;
        arg1[1] = var_28;
        rcx_1 = 0xe;
    }
    else
    {
        int64_t var_98;
        int64_t var_a8_1 = var_98;
        var_b0 = 1;
        int64_t rax_2 =
            core::num::_$LT$impl$u20$u32$GT$::from_ascii_radix::h825576ac29f90020(arg2, arg3);
        rcx_1 = 8;
        
        if (!(rax_2 & 1))
        {
            arg1[1] = rax_2 >> 0x20;
            rcx_1 = 0xe;
        }
    }
    
    *arg1 = rcx_1;
    return core::ptr::drop_in_place$LT$core..result..Result$LT$u32$C$std..io..error..Error$GT$$GT$::h15c219900d5848c6(&var_b0);
}
