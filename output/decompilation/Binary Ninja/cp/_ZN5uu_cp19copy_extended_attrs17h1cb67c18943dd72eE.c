
  int64_t uu_cp::copy_extended_attrs::h1cb67c18943dd72e(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5)

{
    int32_t var_d8;
    std::fs::symlink_metadata::h814bc3976f7d40c5(&var_d8, arg4);
    int64_t result;
    int32_t var_a0;
    int64_t result_1;
    
    if (var_d8 == 2)
    {
        result = result_1;
        *arg1 = -0x7fffffffffffffff;
        arg1[1] = result;
    }
    else if (!(var_a0 & 0x92))
    {
        result = std::fs::set_permissions::h0aec1725d40e979b(arg4, arg5, var_a0 | 0x92);
        
        if (result)
        {
            *arg1 = -0x7fffffffffffffff;
            arg1[1] = result;
        }
        else
        {
            int64_t result_2 =
                uucore::features::fsxattr::copy_xattrs::h21e16464ebe412bd(arg2, arg3, arg4);
            int64_t result_3 = result_2;
            std::fs::symlink_metadata::h814bc3976f7d40c5(&var_d8, arg4);
            int64_t result_4;
            
            if (var_d8 == 2)
            {
                result_4 = result_1;
                label_4a1d6c:
                *arg1 = -0x7fffffffffffffff;
                arg1[1] = result_4;
                return core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h6803c44012521573(&result_3);
            }
            
            result_4 = std::fs::set_permissions::h0aec1725d40e979b(arg4, arg5, 0xffffff6d & var_a0);
            
            if (result_4)
                goto label_4a1d6c;
            
            result = result_2;
            
            if (result)
            {
                *arg1 = -0x7fffffffffffffff;
                arg1[1] = result;
            }
            else
                *arg1 = -0x7ffffffffffffff4;
        }
    }
    else
    {
        result = uucore::features::fsxattr::copy_xattrs::h21e16464ebe412bd(arg2, arg3, arg4);
        
        if (!result)
            *arg1 = -0x7ffffffffffffff4;
        else
        {
            *arg1 = -0x7fffffffffffffff;
            arg1[1] = result;
        }
    }
    return result;
}
