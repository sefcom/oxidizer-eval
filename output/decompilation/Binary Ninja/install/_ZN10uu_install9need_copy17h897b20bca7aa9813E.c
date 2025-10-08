
  uint64_t uu_install::need_copy::h897b20bca7aa9813(int64_t* arg1, char* arg2, int64_t arg3, char* arg4, int64_t arg5, void* arg6)

{
    int32_t var_e0;
    std::fs::metadata::hd1e2f191d36a0fa4(&var_e0, arg2);
    uint64_t result;
    
    if (var_e0 == 2)
    {
        result = core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h8e5ba91c564dca48(&var_e0);
        arg1[1] = 1;
    }
    else
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h8e5ba91c564dca48(&var_e0);
        std::fs::metadata::hd1e2f191d36a0fa4(&var_e0, arg4);
        
        if (var_e0 != 2)
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h8e5ba91c564dca48(&var_e0);
            int32_t var_a8;
            
            if (*(arg6 + 0x48) != 1)
            {
                result = 0x1ed;
                
                if (var_a8 & 0xe00 || result != (var_a8 & 0xfff)
                        || ((var_a8 & 0xf000) ^ 0x8000) | ((var_a8 & 0xf000) ^ 0x8000))
                    arg1[1] = 1;
                else
                {
                    label_469a95:
                    uint64_t result_2;
                    result = result_2;
                    int32_t var_a4;
                    
                    if (result_2 != result || (*(arg6 + 0x50) == 1 && *(arg6 + 0x54) != var_a4))
                        arg1[1] = 1;
                    else
                    {
                        int32_t result_1;
                        int64_t r14_2;
                        
                        if (!(*(arg6 + 0x58) & 1))
                        {
                            result = uucore::features::process::geteuid::hd0ed7b4820ed9632();
                            r14_2 = arg5;
                            
                            if (var_a4 != result)
                                arg1[1] = 1;
                            else
                            {
                                result = uucore::features::process::getegid::h2ca565c9eb3bafb7();
                                
                                if (result_1 == result)
                                    goto label_469afe;
                                
                                arg1[1] = 1;
                            }
                        }
                        else
                        {
                            result = result_1;
                            r14_2 = arg5;
                            
                            if (*(arg6 + 0x5c) != result)
                                arg1[1] = 1;
                            else
                            {
                                label_469afe:
                                core::str::converts::from_utf8::h8a6dc80f786921e0(&var_e0, arg2, 
                                    arg3);
                                
                                if (var_e0 & 1)
                                {
                                    core::option::unwrap_failed::h893f57cb7db71cb7();
                                    /* no return */
                                }
                                
                                core::str::converts::from_utf8::h8a6dc80f786921e0(&var_e0, arg4, 
                                    r14_2);
                                
                                if (var_e0 == 1)
                                {
                                    core::option::unwrap_failed::h893f57cb7db71cb7();
                                    /* no return */
                                }
                                
                                int64_t var_d8;
                                int64_t var_d0;
                                result = file_diff::diff::hc189182ac6271185(var_d8, var_d0, var_d8);
                                
                                if (!result)
                                    arg1[1] = 1;
                                else
                                    arg1[1] = 0;
                            }
                        }
                    }
                }
            }
            else
            {
                result = *(arg6 + 0x4c);
                
                if (!((result | var_a8 | var_a8) & 0xe00) && result == (var_a8 & 0xfff)
                        && !(((var_a8 & 0xf000) ^ 0x8000) | ((var_a8 & 0xf000) ^ 0x8000)))
                    goto label_469a95;
                
                arg1[1] = 1;
            }
        }
        else
        {
            result = core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h8e5ba91c564dca48(&var_e0);
            arg1[1] = 1;
        }
    }
    
    *arg1 = 0;
    return result;
}
