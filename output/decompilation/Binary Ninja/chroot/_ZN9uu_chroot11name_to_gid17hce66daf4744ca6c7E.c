
  int64_t uu_chroot::name_to_gid::hce66daf4744ca6c7(int32_t* arg1, char* arg2, uint64_t arg3)

{
    int64_t var_40;
    _$LT$uucore..features..entries..Group$u20$as$u20$uucore..features..entries..Locate$LT$$RF$str$GT$$GT$::locate::h2c7d885aadff2e1b(&var_40, arg2, arg3);
    int32_t var_50;
    int32_t rcx_1;
    
    if (!(0 + -(var_40)))
    {
        core::ptr::drop_in_place$LT$uucore..features..entries..Group$GT$::h7ce89e27977a76b1(
            &var_40);
        int32_t var_28;
        int32_t var_4c_1 = var_28;
        var_50 = 0;
        arg1[1] = var_28;
        rcx_1 = 0xe;
    }
    else
    {
        int64_t var_38;
        int64_t var_48_1 = var_38;
        var_50 = 1;
        int64_t rax_2 =
            core::num::_$LT$impl$u20$u32$GT$::from_ascii_radix::h825576ac29f90020(arg2, arg3);
        rcx_1 = 9;
        
        if (!(rax_2 & 1))
        {
            arg1[1] = rax_2 >> 0x20;
            rcx_1 = 0xe;
        }
    }
    
    *arg1 = rcx_1;
    return core::ptr::drop_in_place$LT$core..result..Result$LT$u32$C$std..io..error..Error$GT$$GT$::h15c219900d5848c6(&var_50);
}
