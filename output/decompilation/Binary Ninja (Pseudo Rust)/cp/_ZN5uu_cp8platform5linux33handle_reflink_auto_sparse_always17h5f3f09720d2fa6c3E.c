
  fn uu_cp::platform::linux::handle_reflink_auto_sparse_always::h5f3f09720d2fa6c3(arg1: *mut i8, arg2: i64, arg3: i64, arg4: i64) -> i64

{
    let mut var_58: i64;
    uu_cp::platform::linux::check_for_data::h21b9fcb33088a74c(&var_58);
    let var_50: i8;
    let mut result: i64;
    
    if var_50 != 2
    {
        let r8: i64;
        let var_38_1: i64 = r8;
        let r14_1: i64 = var_58;
        uu_cp::platform::linux::check_sparse_detection::he625f50b8a9bdb43(&var_58);
        
        if var_58 == 0
        {
            let mut rcx: i64;
            rcx = r14_1 < 0x200;
            let var_48: i64;
            let mut rbp_1: i8 = 2 - 0;
            
            if var_50 == 0
            {
                rbp_1 = 2;
            }
            
            let mut r14_2: i8 = 3;
            
            if var_50 == 0
            {
                r14_2 = rcx * 3;
            }
            
            let mut r15_2: i8 = 4 - (var_50 == 0);
            
            if *var_58[1] == 0
            {
                r15_2 = 2;
            }
            
            let mut rax_2: i8 = 1;
            
            if uu_cp::platform::linux::check_dest_is_fifo::h1ec55e7a10ac562c(arg4) == 0
            {
                rax_2 = rbp_1;
            }
            
            arg1[1] = r14_2;
            arg1[2] = 4;
            arg1[3] = r15_2;
            arg1[4] = rax_2;
            result = 0;
        }
        else
        {
            *arg1.byte_offset(8) = var_50;
            result = 1;
        }
    }
    else
    {
        *arg1.byte_offset(8) = var_58;
        result = 1;
    }
    
    *arg1 = result;
    result
}
