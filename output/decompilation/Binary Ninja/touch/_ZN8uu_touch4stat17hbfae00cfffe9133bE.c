
  int64_t uu_touch::stat::hbfae00cfffe9133b(int64_t* arg1, int64_t arg2, int64_t arg3, int32_t arg4)

{
    int64_t result;
    int64_t rcx_1;
    int32_t var_178;
    int64_t result_1;
    
    if (!arg4)
    {
        std::fs::symlink_metadata::h73fb12f4b49f31d3(&var_178, arg2);
        
        if (var_178 != 2)
        {
            label_53aa44:
            int64_t result_2;
            result = result_2;
            int32_t var_108;
            arg1[2] = var_108;
            int64_t var_100;
            arg1[3] = var_100;
            int32_t var_f8;
            arg1[4] = var_f8;
            rcx_1 = 0;
        }
        else
        {
            result = result_1;
            rcx_1 = 1;
        }
    }
    else
    {
        int32_t var_c8;
        std::fs::metadata::hb661f9d8212cddd7(&var_c8, arg2);
        
        if (var_c8 != 2)
        {
            memcpy(&var_178, &var_c8, 0xb0);
            
            if (var_178 != 2)
                goto label_53aa44;
            
            result = result_1;
            rcx_1 = 1;
        }
        else
        {
            int64_t var_c0;
            uu_touch::stat::_$u7b$$u7b$closure$u7d$$u7d$::hd10e3b17b3c6cbb4(&var_178, arg2, arg3, 
                var_c0);
            
            if (var_178 != 2)
                goto label_53aa44;
            
            result = result_1;
            rcx_1 = 1;
        }
    }
    arg1[1] = result;
    *arg1 = rcx_1;
    return result;
}
