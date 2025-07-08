
  fn uu_touch::stat::haa73667d17037b3b(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i32) -> i64

{
    let mut result: i64;
    let mut var_178: i32;
    let var_170: i64;
    
    if arg4 == 0
    {
        std::fs::symlink_metadata::ha4686baccc39e49a(&var_178, arg2);
        
        if var_178 != 2
        {
            goto 'label_5c3307;
        }
        
        arg1[1] = var_170;
        result = 1;
    }
    else
    {
        let mut var_c8: i32;
        std::fs::metadata::h73b841bac6708bdf(&var_c8, arg2);
        
        if var_c8 != 2
        {
            memcpy(&var_178, &var_c8, 0xb0);
            'label_5c3307:
            let var_110: i64;
            arg1[1] = var_110;
            let var_108: i32;
            arg1[2] = var_108;
            let var_100: i64;
            arg1[3] = var_100;
            let var_f8: i32;
            arg1[4] = var_f8;
            result = 0;
        }
        else
        {
            let var_c0: i64;
            uu_touch::stat::_$u7b$$u7b$closure$u7d$$u7d$::hfaffa2c55f8502ed(&var_178, arg2, arg3, 
                var_c0);
            
            if var_178 != 2
            {
                goto 'label_5c3307;
            }
            
            arg1[1] = var_170;
            result = 1;
        }
    }
    *arg1 = result;
    result
}
