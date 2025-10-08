
  fn uu_cp::platform::linux::handle_reflink_auto_sparse_always::haaf9f37e7b58eafa(arg1: *mut i8, arg2: i64, arg3: i64, arg4: i64) -> i64

{
    let mut var_50: i64;
    uu_cp::platform::linux::check_for_data::h216f58a42b2327b0(&var_50);
    let var_48: i8;
    let mut result: i64;
    
    if var_48 != 2
    {
        let r8: i64;
        let var_38_1: i64 = r8;
        let rbp_1: i64 = var_50;
        uu_cp::platform::linux::check_sparse_detection::hf45a87016948019f(&var_50, arg2);
        
        if var_50 != 1
        {
            let mut rax_1: i64;
            rax_1 = (var_48 & 1) != 0;
            let mut rbp_2: i8 = 3;
            
            if rbp_1 >= 0x200
            {
                rbp_2 = rax_1 * 3;
            }
            
            let mut r12: i64;
            let mut r14: i8;
            let var_40: i64;
            
            if *var_50[1] == 0
            {
                r14 = 2;
                r12 = 2;
                r12 = 2 - (var_40 == 0 & var_48);
            }
            else if (var_48 & 1) == 0
            {
                r14 = 3;
                r12 = 2;
            }
            else
            {
                r12 = 2;
                r12 = 2 - 0;
                r14 = 4;
            }
            let mut rax_4: i8 = 1;
            
            if uu_cp::platform::linux::check_dest_is_fifo::h6561bbf78e4b4973(arg4) == 0
            {
                rax_4 = r12;
            }
            
            arg1[1] = rbp_2;
            arg1[2] = 4;
            arg1[3] = r14;
            arg1[4] = rax_4;
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
