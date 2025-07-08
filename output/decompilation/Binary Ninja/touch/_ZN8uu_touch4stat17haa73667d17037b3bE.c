
  int64_t uu_touch::stat::haa73667d17037b3b(int64_t* arg1, int64_t arg2, int64_t arg3, int32_t arg4)

{
    int64_t result;
    int32_t var_178;
    int64_t var_170;
    
    if (!arg4)
    {
        std::fs::symlink_metadata::ha4686baccc39e49a(&var_178, arg2);
        
        if (var_178 != 2)
            goto label_5c3307;
        
        arg1[1] = var_170;
        result = 1;
    }
    else
    {
        int32_t var_c8;
        std::fs::metadata::h73b841bac6708bdf(&var_c8, arg2);
        
        if (var_c8 != 2)
        {
            memcpy(&var_178, &var_c8, 0xb0);
            label_5c3307:
            int64_t var_110;
            arg1[1] = var_110;
            int32_t var_108;
            arg1[2] = var_108;
            int64_t var_100;
            arg1[3] = var_100;
            int32_t var_f8;
            arg1[4] = var_f8;
            result = 0;
        }
        else
        {
            int64_t var_c0;
            uu_touch::stat::_$u7b$$u7b$closure$u7d$$u7d$::hfaffa2c55f8502ed(&var_178, arg2, arg3, 
                var_c0);
            
            if (var_178 != 2)
                goto label_5c3307;
            
            arg1[1] = var_170;
            result = 1;
        }
    }
    *arg1 = result;
    return result;
}
