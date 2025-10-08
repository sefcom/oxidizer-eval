
  fn uu_cp::platform::linux::handle_reflink_never_sparse_always::heed2137fe7113b5a(arg1: *mut i8, arg2: i64, arg3: u64, arg4: i64) -> i64

{
    let mut var_48: i64;
    uu_cp::platform::linux::check_for_data::h216f58a42b2327b0(&var_48);
    let var_40: i8;
    let mut result: i64;
    
    if var_40 != 2
    {
        let r14_1: i64 = var_48;
        uu_cp::platform::linux::check_sparse_detection::hf45a87016948019f(&var_48, arg2);
        
        if var_48 != 1
        {
            let mut rbp_1: i8 = *var_48[1];
            let mut r12: u64;
            let mut r13: i64;
            let var_38: i64;
            
            if (var_40 & 1) == 0
            {
                let mut rax_1: i64;
                rax_1 = r14_1 < 0x200;
                r12 = rax_1 * 3;
                r13 = 0;
                
                if rbp_1 == 0
                {
                    rbp_1 = 2;
                }
                else
                {
                    r12 = r12;
                    
                    if var_38 != 0
                    {
                        r12 = 0;
                    }
                    
                    rbp_1 = 3;
                }
            }
            else
            {
                r13 = var_38 == 0;
                rbp_1 = rbp_1 * 2 + 2;
                r12 = 3;
            }
            let rax_2: i8 =
                (uu_cp::platform::linux::check_dest_is_fifo::h6561bbf78e4b4973(arg4) | r13) & 1;
            arg1[1] = r12;
            arg1[2] = 1;
            arg1[3] = rbp_1;
            arg1[4] = rax_2;
            result = 0;
        }
        else
        {
            *arg1.byte_offset(8) = var_40;
            result = 1;
        }
    }
    else
    {
        *arg1.byte_offset(8) = var_48;
        result = 1;
    }
    
    *arg1 = result;
    result
}
