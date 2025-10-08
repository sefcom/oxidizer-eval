
  fn fd::regex_helper::hir_has_uppercase_char::h47600744d8eac6fa(arg1: *mut i64) -> *mut i8

{
    let mut rax_4: i8;
    
    loop
    {
        let rdx_1: i64 = *arg1;
        let mut r8_1: i64 = rdx_1 - 2;
        
        if r8_1 >= 8
        {
            r8_1 = 2;
        }
        
        let mut var_38: i64;
        
        if r8_1 - 1 <= 6
        {
            match r8_1
            {
                1 =>
                {
                    let rbx_1: *mut i8 = arg1[1];
                    let r14_1: *mut c_void = arg1[2];
                    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_38, rbx_1, r14_1);
                    let mut var_20: *mut i8;
                    
                    if (var_38 & 1) != 0
                    {
                        var_20 = rbx_1;
                        let var_18_1: *mut c_void = r14_1.byte_offset(rbx_1);
                        return _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::hdb2b8379688b931c(&var_20);
                    }
                    
                    let var_30: *mut i8;
                    var_20 = var_30;
                    let var_28: *mut c_void;
                    let var_18_2: *mut c_void = var_28.byte_offset(var_30);
                    rax_4 = core::iter::traits::iterator::Iterator::try_fold::hb263849006ded29d(
                        &var_20);
                    break;
                }
                2 =>
                {
                    if (rdx_1 & 1) == 0
                    {
                        let rax_7: i64 = arg1[2];
                        let rcx_9: i64 = rax_7 + (arg1[3] << 3);
                        var_38 = rax_7;
                        let var_30_3: i64 = rcx_9;
                        rax_4 = core::iter::traits::iterator::Iterator::try_fold::h8988d4c59a076347(
                            &var_38);
                    }
                    else
                    {
                        let rax_3: i64 = arg1[2];
                        let rcx_5: i64 = rax_3 + (arg1[3] << 1);
                        var_38 = rax_3;
                        let var_30_2: i64 = rcx_5;
                        rax_4 = core::iter::traits::iterator::Iterator::try_fold::hc1c7f954704853d3(
                            &var_38);
                    }
                    
                    break;
                }
                4 =>
                {
                    arg1 = arg1[2];
                    continue;
                }
                5 =>
                {
                    arg1 = arg1[1];
                    continue;
                }
                6 | 7 =>
                {
                    let rax: i64 = arg1[2];
                    let rcx: i64 = arg1[3];
                    var_38 = rax;
                    let var_30_1: i64 = rcx * 0x30 + rax;
                    return _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::haa53f3d57c60f664(&var_38);
                }
            }
        }
        return 0;
    }
    
    _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::hf5117a12fd3a5609(rax_4)
}
