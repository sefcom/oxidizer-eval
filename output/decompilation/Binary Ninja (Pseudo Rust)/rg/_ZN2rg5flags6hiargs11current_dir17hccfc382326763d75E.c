
  fn rg::flags::hiargs::current_dir::hccfc382326763d75(arg1: *mut i64) -> i64

{
    let mut var_50: *mut *mut c_void;
    std::env::current_dir::h2d02f56ea8ff76eb(&var_50);
    let result: i64;
    
    if !(0 + -(var_50))
    {
        arg1[2] = result;
        *arg1 = var_50;
        return result;
    }
    
    let var_48: i64;
    let mut var_58: i64 = var_48;
    std::env::var_os::hb4475f8d1a095f3c(&var_50, "PWDfailed to run command '' to g…");
    let rdi_2: *mut *mut c_void = var_50;
    
    if rdi_2 != -0x8000000000000000
    {
        if result == 0
        {
            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::ha1b355bbd6f8eb7b(rdi_2, 
                var_48);
            goto 'label_652bf8;
        }
        
        *arg1 = rdi_2;
        arg1[1] = var_48;
        arg1[2] = result;
    }
    else
    {
        core::ptr::drop_in_place$LT$rg..flags..FlagValue$GT$::hd36131b5df04d880(
            -0x8000000000000000, var_48);
        'label_652bf8:
        let mut var_20: *mut i64 = &var_58;
        let var_18_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
            _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
        var_50 = &data_7eb280;
        let var_48_1: i64 = 2;
        let var_30_1: i64 = 0;
        let var_40: *mut *mut i64 = &var_20;
        let var_38_1: i64 = 1;
        arg1[1] = anyhow::__private::format_err::hd87f3faee3401bd9(&var_50);
        *arg1 = -0x8000000000000000;
    }
    
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::haa31b1f83e302f9e(&var_58)
}
