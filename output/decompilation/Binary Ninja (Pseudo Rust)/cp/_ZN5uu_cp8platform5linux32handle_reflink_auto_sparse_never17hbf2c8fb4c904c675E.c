
  fn uu_cp::platform::linux::handle_reflink_auto_sparse_never::hbf2c8fb4c904c675(arg1: *mut i8) -> i64

{
    let mut var_40: i64;
    uu_cp::platform::linux::check_for_data::h21b9fcb33088a74c(&var_40);
    let var_38: i8;
    let mut result: i64;
    
    if var_38 != 2
    {
        let r12_1: i64 = var_40;
        uu_cp::platform::linux::check_sparse_detection::he625f50b8a9bdb43(&var_40);
        
        if var_40 == 0
        {
            let rax: i8 = *var_40[1];
            let mut rcx_1: i64;
            rcx_1 = r12_1 < 0x200;
            let mut rdx_1: i8 = 3;
            
            if var_38 == 0
            {
                rdx_1 = rcx_1 * 3;
            }
            
            arg1[1] = rdx_1;
            arg1[2] = 1;
            arg1[3] = (rax * 2) | 1;
            result = 0;
        }
        else
        {
            *arg1.byte_offset(8) = var_38;
            result = 1;
        }
    }
    else
    {
        *arg1.byte_offset(8) = var_40;
        result = 1;
    }
    
    *arg1 = result;
    result
}
