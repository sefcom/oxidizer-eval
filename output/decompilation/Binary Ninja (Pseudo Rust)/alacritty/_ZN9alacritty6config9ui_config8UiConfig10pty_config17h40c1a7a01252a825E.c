
  fn alacritty::config::ui_config::UiConfig::pty_config::h40c1a7a01252a825(arg1: *mut i128, arg2: *mut c_void) -> i64

{
    let mut var_50: i64;
    
    if *arg2.byte_offset(0x360) != -0x7fffffffffffffff
    {
        _$LT$alacritty..config..ui_config..Program$u20$as$u20$core..clone..Clone$GT$::clone::ha9cecc4ab8fd9e38(&var_50, arg2.byte_offset(0x360));
    }
    else
    {
        var_50 = -0x7fffffffffffffff;
    }
    
    let mut var_98: i64;
    core::option::Option$LT$T$GT$::or_else::hb40315794b9ee246(&var_98, &var_50, arg2);
    let mut rax: i64 = var_98;
    let mut var_c8: i64;
    let mut var_b8: i64;
    let mut var_a8: i64;
    
    if rax != -0x7fffffffffffffff
    {
        let var_90: i64;
        let mut rdx_2: i64 = var_90;
        let var_80: i64;
        let mut rcx_1: i64 = var_80;
        let mut rsi_3: i64;
        let mut rdi_3: i64;
        let mut r9_1: i64;
        let var_88: i64;
        
        if rax != -0x8000000000000000
        {
            let var_78: i64;
            rsi_3 = var_78;
            let var_70: i64;
            rdi_3 = var_70;
            r9_1 = rcx_1;
            rcx_1 = var_88;
        }
        else
        {
            rsi_3 = 8;
            rdi_3 = 0;
            rax = rdx_2;
            r9_1 = 0;
            rdx_2 = var_88;
        }
        var_c8 = rax;
        let var_c0_1: i64 = rdx_2;
        var_b8 = rcx_1;
        let var_b0_1: i64 = r9_1;
        var_a8 = rsi_3;
        let var_a0_1: i64 = rdi_3;
        
        if *arg2.byte_offset(0x310) != -0x8000000000000000
        {
            goto 'label_8368f3;
        }
        
        var_98 = -0x8000000000000000;
    }
    else
    {
        var_c8 = -0x8000000000000000;
        
        if *arg2.byte_offset(0x310) == -0x8000000000000000
        {
            var_98 = -0x8000000000000000;
        }
        else
        {
            'label_8368f3:
            _$LT$$RF$str$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h0eee6798dc8ee10d(&var_50, *arg2.byte_offset(0x318), *arg2.byte_offset(0x320));
            let var_40: i64;
            let var_88_1: i64 = var_40;
            var_98 = var_50;
        }
    }
    
    let mut var_68: i128;
    core::option::Option$LT$T$GT$::or_else::ha0e97caec7d64104(&var_68, &var_98, arg2);
    let mut result: i64;
    let mut rdx_4: i64;
    result = std::thread::local::LocalKey$LT$T$GT$::with::h1712436c6fb8facc();
    arg1[2] = var_a8;
    arg1[1] = var_b8;
    *arg1 = var_c8;
    arg1[3] = var_68;
    let var_58: i64;
    arg1[4] = var_58;
    *arg1.byte_offset(0x78) = 0;
    *arg1.byte_offset(0x48) = *data_c75358;
    *arg1.byte_offset(0x58) = data_c75368;
    *arg1.byte_offset(0x68) = result;
    arg1[7] = rdx_4;
    result
}
