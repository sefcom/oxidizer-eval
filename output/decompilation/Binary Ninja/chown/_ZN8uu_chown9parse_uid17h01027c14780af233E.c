
  void uu_chown::parse_uid::h01027c14780af233(int64_t* arg1, char* arg2, uint64_t arg3, char* arg4, void* arg5, int32_t arg6)

{
    if (!arg3)
    {
        arg1[1] = 0;
        *arg1 = 0;
        return;
    }
    
    int64_t var_b0;
    _$LT$uucore..features..entries..Passwd$u20$as$u20$uucore..features..entries..Locate$LT$$RF$str$GT$$GT$::locate::h4bb3a5c7c498e57d(&var_b0, arg2, arg3);
    
    if (!(0 + -(var_b0)))
    {
        arg1[1] = 1;
        int32_t var_38;
        *(arg1 + 0xc) = var_38;
        *arg1 = 0;
        core::ptr::drop_in_place$LT$uucore..features..entries..Passwd$GT$::h9d92376eadf8fa93(
            &var_b0);
        return;
    }
    
    char rax_1 =
        _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h822e1c3c690e59b6(
        0x2e, arg4, arg5);
    bool rcx;
    
    if (rax_1)
        rcx = arg6 != 0x3a | _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h822e1c3c690e59b6(0x3a, arg4, arg5);
    
    void** const var_128;
    
    if (rax_1 && !rcx)
    {
        uu_chown::parse_spec::h35c2058a4fb20997(&var_128, arg4, arg5, 0x2e);
        int64_t rax_8;
        
        if (var_128 != 1)
        {
            arg1[1] = var_128;
            rax_8 = 0;
        }
        else
        {
            int64_t var_120;
            rax_8 = var_120;
            int64_t var_118;
            arg1[1] = var_118;
        }
        
        *arg1 = rax_8;
    }
    else
    {
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
            int64_t var_e8 = 0;
            char* var_e0_1 = arg4;
            void* var_d8_1 = arg5;
            char var_d0_1 = 1;
            int64_t* var_f8 = &var_e8;
            int64_t (* var_f0_1)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_128 = &data_4f5f08;
            int64_t var_120_1 = 1;
            int64_t var_108_1 = 0;
            int64_t** var_118_1 = &var_f8;
            int64_t var_110_1 = 1;
            int128_t var_c8;
            core::option::Option$LT$T$GT$::map_or_else::h4bc4c2e4ba7ee2f5(&var_c8, &var_128);
            var_110_1 = 1;
            var_128 = var_c8;
            int64_t var_b8;
            int64_t var_118_2 = var_b8;
            *arg1 = alloc::boxed::Box$LT$T$GT$::new::hb4f3be129963c03f(&var_128);
            arg1[1] = &data_4f5f38;
        }
    }
    core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..entries..Passwd$C$std..io..error..Error$GT$$GT$::h7476ebf99eb029b9(&var_b0);
}
