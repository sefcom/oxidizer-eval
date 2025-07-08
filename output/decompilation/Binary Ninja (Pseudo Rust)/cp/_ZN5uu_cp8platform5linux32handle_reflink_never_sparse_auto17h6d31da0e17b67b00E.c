
  fn uu_cp::platform::linux::handle_reflink_never_sparse_auto::h6d31da0e17b67b00(arg1: *mut i8, arg2: i64, arg3: i64, arg4: i64) -> i64

{
    let mut var_50: i64;
    uu_cp::platform::linux::check_for_data::h21b9fcb33088a74c(&var_50);
    let var_48: bool;
    let mut result: i64;
    
    if var_48 != 2
    {
        let rax: i64 = var_50;
        uu_cp::platform::linux::check_sparse_detection::he625f50b8a9bdb43(&var_50);
        
        if var_50 == 0
        {
            let mut rbp_1: i8 = *var_50[1];
            let mut r12: i64;
            let mut r14: bool;
            
            if var_48 == 0 && rax >= 0x200
            {
                r14 = rbp_1 == 0;
                rbp_1 = (rbp_1 * 2) | 1;
                r14 ^= 3;
                r12 = 0;
            }
            else if rbp_1 == 0
            {
                r12 = 3;
                r14 = true;
                rbp_1 = 1;
            }
            else
            {
                r14 = true;
                let var_40: i64;
                
                if var_48 != 0
                {
                    r14 = ((var_40 != 0) * 2) | 1;
                }
                rbp_1 = 3;
                r12 = 3;
            }
            
            let mut rax_4: bool = true;
            
            if uu_cp::platform::linux::check_dest_is_fifo::h1ec55e7a10ac562c(arg4) == 0
            {
                rax_4 = r14;
            }
            
            arg1[1] = r12;
            arg1[2] = 1;
            arg1[3] = rbp_1;
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
