
  fn uu_touch::stat::hbfae00cfffe9133b(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i32) -> i64

{
    let mut result: i64;
    let mut rcx_1: i64;
    let mut var_178: i32;
    let result_1: i64;
    
    if arg4 == 0
    {
        std::fs::symlink_metadata::h73fb12f4b49f31d3(&var_178, arg2);
        
        if var_178 != 2
        {
            'label_53aa44:
            let result_2: i64;
            result = result_2;
            let var_108: i32;
            arg1[2] = var_108;
            let var_100: i64;
            arg1[3] = var_100;
            let var_f8: i32;
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
        let mut var_c8: i32;
        std::fs::metadata::hb661f9d8212cddd7(&var_c8, arg2);
        
        if var_c8 != 2
        {
            memcpy(&var_178, &var_c8, 0xb0);
            
            if var_178 != 2
            {
                goto 'label_53aa44;
            }
            
            result = result_1;
            rcx_1 = 1;
        }
        else
        {
            let var_c0: i64;
            uu_touch::stat::_$u7b$$u7b$closure$u7d$$u7d$::hd10e3b17b3c6cbb4(&var_178, arg2, arg3, 
                var_c0);
            
            if var_178 != 2
            {
                goto 'label_53aa44;
            }
            
            result = result_1;
            rcx_1 = 1;
        }
    }
    arg1[1] = result;
    *arg1 = rcx_1;
    result
}
