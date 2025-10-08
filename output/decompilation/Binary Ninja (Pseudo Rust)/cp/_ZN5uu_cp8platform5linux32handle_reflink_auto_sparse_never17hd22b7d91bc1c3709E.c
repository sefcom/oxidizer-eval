
  fn uu_cp::platform::linux::handle_reflink_auto_sparse_never::hd22b7d91bc1c3709(arg1: *mut i8, arg2: i64) -> i64

{
    let mut var_40: i64;
    uu_cp::platform::linux::check_for_data::h216f58a42b2327b0(&var_40);
    let var_38: i8;
    let mut result: i64;
    
    if var_38 != 2
    {
        let r12_1: i64 = var_40;
        uu_cp::platform::linux::check_sparse_detection::hf45a87016948019f(&var_40, arg2);
        
        if var_40 != 1
        {
            let rax: i8 = *var_40[1];
            let mut rcx_1: i64;
            rcx_1 = (var_38 & 1) != 0;
            let mut rdx_1: i8 = 3;
            
            if r12_1 >= 0x200
            {
                rdx_1 = rcx_1 * 3;
            }
            
            arg1[1] = rdx_1;
            arg1[2] = 1;
            arg1[3] = rax * 2 + 1;
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
