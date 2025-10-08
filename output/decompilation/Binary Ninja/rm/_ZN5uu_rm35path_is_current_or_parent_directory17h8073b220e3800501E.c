
  uint64_t uu_rm::path_is_current_or_parent_directory::h8073b220e3800501(char* arg1, int64_t arg2)

{
    uint64_t rbp;
    uint64_t var_8 = rbp;
    char* var_28 = arg1;
    int64_t var_20 = arg2;
    int64_t var_30 = 0;
    
    if (arg2 == 2)
    {
        rbp = 1;
        
        if (*arg1 != 0x2e2e)
        {
            label_45edba:
            int16_t var_34 = 0x2e2f;
            rbp = 1;
            
            if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::hfb293b5be5b6c72e(arg1, 
                arg2, &var_34, 2))
            {
                var_34 = 0x2e2f;
                char var_32_1 = 0x2e;
                
                if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::hfb293b5be5b6c72e(arg1, 
                    arg2, &var_34, 3))
                {
                    var_34 = 0x2e2f;
                    char var_32_2 = 0x2f;
                    
                    if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::hfb293b5be5b6c72e(
                        arg1, arg2, &var_34, 3))
                    {
                        __builtin_strncpy(&var_34, "/../", 4);
                        rbp = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::hfb293b5be5b6c72e(arg1, arg2, &var_34, 4);
                    }
                }
            }
        }
    }
    else
    {
        if (arg2 != 1)
            goto label_45edba;
        
        rbp = 1;
        
        if (*arg1 != 0x2e)
            goto label_45edba;
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$$RF$$u5b$u8$u5d$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h161a4a1502d63dd1(&var_30);
    return rbp;
}
