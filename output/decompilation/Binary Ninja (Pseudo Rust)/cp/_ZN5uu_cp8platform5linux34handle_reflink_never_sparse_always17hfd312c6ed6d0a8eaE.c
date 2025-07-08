
  fn uu_cp::platform::linux::handle_reflink_never_sparse_always::hfd312c6ed6d0a8ea(arg1: *mut i8, arg2: u64, arg3: i64, arg4: i64) -> i64

{
    let mut var_50: i64;
    uu_cp::platform::linux::check_for_data::h21b9fcb33088a74c(&var_50);
    let var_48: i8;
    let mut result: i64;
    
    if var_48 != 2
    {
        let rax: i64 = var_50;
        uu_cp::platform::linux::check_sparse_detection::he625f50b8a9bdb43(&var_50);
        
        if var_50 == 0
        {
            let mut rbp_1: i8 = *var_50[1];
            let mut r12: i64;
            let mut r13: u64;
            let var_40: i64;
            
            if var_48 == 0
            {
                let mut rax_1: i64;
                rax_1 = rax < 0x200;
                r12 = 0;
                r13 = rax_1 * 3;
                
                if rbp_1 == 0
                {
                    rbp_1 = 2;
                }
                else
                {
                    r13 = r13;
                    
                    if var_40 != 0
                    {
                        r13 = 0;
                    }
                    
                    rbp_1 = 3;
                }
            }
            else
            {
                r12 = var_40 == 0;
                rbp_1 = rbp_1 * 2 + 2;
                r13 = 3;
            }
            let rax_2: i8 =
                uu_cp::platform::linux::check_dest_is_fifo::h1ec55e7a10ac562c(arg4) | r12;
            arg1[1] = r13;
            arg1[2] = 1;
            arg1[3] = rbp_1;
            arg1[4] = rax_2;
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
