
  void uu_chown::parse_gid::h180219f2ead778f4(uint64_t* arg1, char* arg2, uint64_t arg3)

{
    if (!arg3)
    {
        arg1[1] = 0;
        *arg1 = 0;
        return;
    }
    
    int64_t var_90;
    _$LT$uucore..features..entries..Group$u20$as$u20$uucore..features..entries..Locate$LT$$RF$str$GT$$GT$::locate::h2c7d885aadff2e1b(&var_90, arg2, arg3);
    int64_t rdi_1 = var_90;
    int64_t var_88;
    
    if (-(rdi_1) != -0x8000000000000000)
    {
        arg1[1] = 1;
        int32_t var_78;
        *(arg1 + 0xc) = var_78;
        *arg1 = 0;
        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h64edeac6d8c4e76c(rdi_1, 
            var_88);
        return;
    }
    
    int64_t rax_3 =
        core::num::_$LT$impl$u20$u32$GT$::from_ascii_radix::h825576ac29f90020(arg2, arg3);
    
    if (!(rax_3 & 1))
    {
        arg1[1] = 1;
        *(arg1 + 0xc) = rax_3 >> 0x20;
        *arg1 = 0;
    }
    else
    {
        int64_t var_60 = 0;
        int64_t rcx;
        int64_t var_58_1 = rcx;
        int64_t r8;
        int64_t var_50_1 = r8;
        char var_48_1 = 1;
        int64_t* var_70 = &var_60;
        int64_t (* var_68_1)(int32_t* arg1, int64_t* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        void** const var_c8 = &data_4f5fa0;
        int64_t var_c0_1 = 1;
        int64_t var_a8_1 = 0;
        int64_t** var_b8_1 = &var_70;
        int64_t var_b0_1 = 1;
        int128_t var_40;
        core::option::Option$LT$T$GT$::map_or_else::h4bc4c2e4ba7ee2f5(&var_40, &var_c8);
        var_b0_1 = 1;
        var_c8 = var_40;
        int64_t var_30;
        int64_t var_b8_2 = var_30;
        *arg1 = alloc::boxed::Box$LT$T$GT$::new::hb4f3be129963c03f(&var_c8);
        arg1[1] = &data_4f5f38;
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..entries..Group$C$std..io..error..Error$GT$$GT$::h84fc9f312db1c2ce(-0x8000000000000000, var_88);
}
