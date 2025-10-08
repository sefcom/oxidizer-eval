
  fn uu_cp::platform::linux::handle_reflink_auto_sparse_auto::hc3f72f8fab662c9c(arg1: *mut i8, arg2: i64, arg3: u64, arg4: i64) -> u64

{
    let mut var_48: u64;
    uu_cp::platform::linux::check_for_data::h216f58a42b2327b0(&var_48);
    let var_40: i8;
    let mut result: u64;
    
    if var_40 != 2
    {
        let mut rbp_1: u64 = var_48;
        uu_cp::platform::linux::check_sparse_detection::hf45a87016948019f(&var_48, arg2);
        
        if var_48 != 1
        {
            let mut rax_1: u32 = *var_48[1];
            let mut rdi_2: i64;
            let mut r12: u64;
            let mut r13: i64;
            
            if (var_40 & 1) == 0
            {
                r13 = rbp_1 - 1 < 0x1ff;
                r13 *= 2;
                rbp_1 = rax_1 + 2;
                rax_1 *= 2;
                rax_1 += 1;
                r12 = rax_1;
                rdi_2 = arg4;
            }
            else if rbp_1 == 0
            {
                r13 = 4;
                
                if rax_1 == 0
                {
                    r12 = 1;
                    rbp_1 = 2;
                    rdi_2 = arg4;
                }
                else
                {
                    'label_49c261:
                    rbp_1 = 3;
                    r12 = 3;
                    rdi_2 = arg4;
                    let var_38: i64;
                    
                    if var_38 == 0
                    {
                        r13 = 4;
                        rbp_1 = 1;
                    }
                }
            }
            else
            {
                r12 = 1;
                r13 = 2;
                
                if rax_1 != 0
                {
                    goto 'label_49c261;
                }
                
                rbp_1 = 2;
                rdi_2 = arg4;
            }
            
            let mut rax_3: i8 = 1;
            
            if uu_cp::platform::linux::check_dest_is_fifo::h6561bbf78e4b4973(rdi_2) == 0
            {
                rax_3 = rbp_1;
            }
            
            arg1[1] = r13;
            arg1[2] = 4;
            arg1[3] = r12;
            arg1[4] = rax_3;
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
