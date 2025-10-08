
  int64_t rg::flags::hiargs::current_dir::hccfc382326763d75(int64_t* arg1)

{
    void** const var_50;
    std::env::current_dir::h2d02f56ea8ff76eb(&var_50);
    int64_t result;
    
    if (!(0 + -(var_50)))
    {
        arg1[2] = result;
        *arg1 = var_50;
        return result;
    }
    
    int64_t var_48;
    int64_t var_58 = var_48;
    std::env::var_os::hb4475f8d1a095f3c(&var_50, "PWDfailed to run command '' to g…");
    void** const rdi_2 = var_50;
    
    if (rdi_2 != -0x8000000000000000)
    {
        if (!result)
        {
            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::ha1b355bbd6f8eb7b(rdi_2, 
                var_48);
            goto label_652bf8;
        }
        
        *arg1 = rdi_2;
        arg1[1] = var_48;
        arg1[2] = result;
    }
    else
    {
        core::ptr::drop_in_place$LT$rg..flags..FlagValue$GT$::hd36131b5df04d880(
            -0x8000000000000000, var_48);
        label_652bf8:
        int64_t* var_20 = &var_58;
        int64_t (* var_18_1)(int64_t* arg1, int64_t* arg2) =
            _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
        var_50 = &data_7eb280;
        int64_t var_48_1 = 2;
        int64_t var_30_1 = 0;
        int64_t** var_40 = &var_20;
        int64_t var_38_1 = 1;
        arg1[1] = anyhow::__private::format_err::hd87f3faee3401bd9(&var_50);
        *arg1 = -0x8000000000000000;
    }
    
    return core::ptr::drop_in_place$LT$std..io..error..Error$GT$::haa31b1f83e302f9e(&var_58);
}
