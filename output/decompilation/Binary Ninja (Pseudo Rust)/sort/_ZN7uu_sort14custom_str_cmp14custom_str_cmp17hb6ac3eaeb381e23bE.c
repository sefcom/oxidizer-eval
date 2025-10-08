
  fn uu_sort::custom_str_cmp::custom_str_cmp::hb6ac3eaeb381e23b(arg1: i64, arg2: u64, arg3: i64, arg4: u64, arg5: i8, arg6: i8, arg7: i8) -> i64

{
    let mut var_72: i8 = arg5;
    let mut var_71: i8 = arg6;
    let mut result: i64;
    
    if (arg5 | arg6 | arg7) != 1
    {
        let mut result_1: i64 = arg2 - arg4;
        
        if arg2 < arg4
        {
            arg4 = arg2;
        }
        
        result = memcmp(arg1, arg3, arg4);
        
        if result != 0
        {
            result_1 = result;
        }
        
        result = result_1 > 0;
        result -= result_1 < 0;
    }
    else
    {
        let mut var_70: i64 = arg1;
        let var_68_1: i64 = arg2 + arg1;
        let mut var_60: *mut i8 = &var_72;
        let var_58_1: *mut i8 = &var_71;
        let mut var_50: i64 = arg3;
        let var_48_1: i64 = arg4 + arg3;
        let mut var_40: *mut i8 = &var_72;
        let var_38_1: *mut i8 = &var_71;
        
        do
        {
            let rax_1: i32 = core::iter::traits::iterator::Iterator::try_fold::h14f3f1dbf790deba(
                &var_70, &var_60);
            result = core::iter::traits::iterator::Iterator::try_fold::h14f3f1dbf790deba(&var_50, 
                &var_40);
            
            if rax_1 == 0x110000
            {
                result = result != 0x110000;
                result = -(result);
                break;
            }
            
            if result == 0x110000
            {
                result = 1;
                break;
            }
            
            result = uu_sort::custom_str_cmp::cmp_chars::h4df5683859bee02f(rax_1, result, arg7);
        } while result == 0;
    }
    
    result
}
