
  fn uu_cp::platform::linux::handle_reflink_never_sparse_auto::h718df85bcf1cef5c(arg1: *mut i8, arg2: i64, arg3: i64, arg4: i64) -> i64

{
    let mut var_50: i64;
    uu_cp::platform::linux::check_for_data::h216f58a42b2327b0(&var_50);
    let var_48: i8;
    let mut result: i64;
    
    if var_48 != 2
    {
        let r14_1: i64 = var_50;
        uu_cp::platform::linux::check_sparse_detection::hf45a87016948019f(&var_50, arg2);
        
        if var_50 != 1
        {
            let mut __saved_rdx_1: i8 = *var_50[1];
            let mut rbp: i8;
            let mut r13: i64;
            
            if (r14_1 >= 0x200 & (var_48 ^ 1)) != 0
            {
                rbp = __saved_rdx_1 * 2 + 1;
                __saved_rdx_1 |= 2;
                r13 = 0;
            }
            else if __saved_rdx_1 == 0
            {
                r13 = 3;
                __saved_rdx_1 = 2;
                rbp = 1;
            }
            else
            {
                let var_40: i64;
                __saved_rdx_1 = ((var_40 != 0 | !var_48) & 1) * 2 + 1;
                rbp = 3;
                r13 = 3;
            }
            
            let mut __saved_rdx_2: i8 = 1;
            
            if uu_cp::platform::linux::check_dest_is_fifo::h6561bbf78e4b4973(arg4) == 0
            {
                __saved_rdx_2 = __saved_rdx_1;
            }
            
            arg1[1] = r13;
            arg1[2] = 1;
            arg1[3] = rbp;
            arg1[4] = __saved_rdx_2;
            result = 0;
        }
        else
        {
            *arg1.byte_offset(8) = var_48;
            result = 1;
        }
    }
    else
    {
        *arg1.byte_offset(8) = var_50;
        result = 1;
    }
    
    *arg1 = result;
    result
}
