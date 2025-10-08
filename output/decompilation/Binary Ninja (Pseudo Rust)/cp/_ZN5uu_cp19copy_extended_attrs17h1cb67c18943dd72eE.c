
  fn uu_cp::copy_extended_attrs::h1cb67c18943dd72e(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64, arg5: i64) -> i64

{
    let mut var_d8: i32;
    std::fs::symlink_metadata::h814bc3976f7d40c5(&var_d8, arg4);
    let mut result: i64;
    let var_a0: i32;
    let result_1: i64;
    
    if var_d8 == 2
    {
        result = result_1;
        *arg1 = -0x7fffffffffffffff;
        arg1[1] = result;
    }
    else if (var_a0 & 0x92) == 0
    {
        result = std::fs::set_permissions::h0aec1725d40e979b(arg4, arg5, var_a0 | 0x92);
        
        if result != 0
        {
            *arg1 = -0x7fffffffffffffff;
            arg1[1] = result;
        }
        else
        {
            let result_2: i64 =
                uucore::features::fsxattr::copy_xattrs::h21e16464ebe412bd(arg2, arg3, arg4);
            let mut result_3: i64 = result_2;
            std::fs::symlink_metadata::h814bc3976f7d40c5(&var_d8, arg4);
            let mut result_4: i64;
            
            if var_d8 == 2
            {
                result_4 = result_1;
                'label_4a1d6c:
                *arg1 = -0x7fffffffffffffff;
                arg1[1] = result_4;
                return core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h6803c44012521573(&result_3);
            }
            
            result_4 = std::fs::set_permissions::h0aec1725d40e979b(arg4, arg5, 0xffffff6d & var_a0);
            
            if result_4 != 0
            {
                goto 'label_4a1d6c;
            }
            
            result = result_2;
            
            if result != 0
            {
                *arg1 = -0x7fffffffffffffff;
                arg1[1] = result;
            }
            else
            {
                *arg1 = -0x7ffffffffffffff4;
            }
        }
    }
    else
    {
        result = uucore::features::fsxattr::copy_xattrs::h21e16464ebe412bd(arg2, arg3, arg4);
        
        if result == 0
        {
            *arg1 = -0x7ffffffffffffff4;
        }
        else
        {
            *arg1 = -0x7fffffffffffffff;
            arg1[1] = result;
        }
    }
    result
}
