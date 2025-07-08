
  fn uu_sort::custom_str_cmp::custom_str_cmp::h4737421826ca2422(arg1: i64, arg2: u64, arg3: i64, arg4: u64, arg5: i8, arg6: i32, arg7: i8) -> i64

{
    let mut var_72: i8 = arg5;
    let mut var_71: i8 = arg6;
    let mut rax_3: i32;
    
    if arg6 != 0 || arg7 != 0 || arg5 != 0
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
            let rax_4: i32 = core::iter::traits::iterator::Iterator::try_fold::hd22c190233dc3738(
                &var_70, &var_60);
            rax_3 = core::iter::traits::iterator::Iterator::try_fold::hba92221d128020d6(&var_50, 
                &var_40);
            
            if rax_4 == 0x110000
            {
                rax_3 = rax_3 != 0x110000;
                rax_3 = -(rax_3);
                break;
            }
            
            if rax_3 == 0x110000
            {
                rax_3 = 1;
                break;
            }
            
            rax_3 = uu_sort::custom_str_cmp::cmp_chars::h48aa6e867f01ccd6(rax_4, rax_3, arg7);
        } while rax_3 == 0;
    }
    else
    {
        let mut rbx_2: i64 = arg2 - arg4;
        
        if arg2 < arg4
        {
            arg4 = arg2;
        }
        
        let rax_2: i64 = memcmp(arg1, arg3, arg4);
        
        if rax_2 != 0
        {
            rbx_2 = rax_2;
        }
        
        let mut rcx: i32;
        rcx = rbx_2 != 0;
        rax_3 = 0xff;
        
        if rbx_2 >= 0
        {
            return rcx;
        }
    }
    
    rax_3
}
