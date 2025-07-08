
  fn uu_cp::platform::linux::handle_reflink_auto_sparse_auto::h1e687e1533235ec7(arg1: *mut i8, arg2: i64, arg3: i64, arg4: i64) -> i64

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
            let mut rdi_2: i64;
            let mut r12: i64;
            let mut r13: i64;
            
            if var_48 == 0
            {
                r13 = rbp_1 == 0;
                r12 = rax - 1 < 0x1ff;
                r12 *= 2;
                r13 ^= 3;
                rbp_1 = (rbp_1 * 2) | 1;
                rdi_2 = arg4;
            }
            else
            {
                if rax == 0
                {
                    r12 = 4;
                }
                else
                {
                    r12 = 2;
                }
                
                rdi_2 = arg4;
                
                if rbp_1 == 0
                {
                    rbp_1 = 1;
                    r13 = 2;
                }
                else
                {
                    r13 = 3;
                    rbp_1 = 3;
                    let var_40: i64;
                    
                    if var_40 == 0
                    {
                        r12 = 4;
                        r13 = 1;
                    }
                }
            }
            
            let mut rax_2: i8 = 1;
            
            if uu_cp::platform::linux::check_dest_is_fifo::h1ec55e7a10ac562c(rdi_2) == 0
            {
                rax_2 = r13;
            }
            
            arg1[1] = r12;
            arg1[2] = 4;
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
