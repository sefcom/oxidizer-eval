
  fn bat::line_range::LineRanges::from::h4ce85643fa8989ac(arg1: *mut i128, arg2: *mut i128) -> *mut i128

{
    let r13: *mut c_void = *arg2.byte_offset(8);
    let rbp_2: *mut c_void = (arg2[1] << 5) + r13;
    let mut rax: i8;
    let mut rdx: i64;
    rax = core::iter::traits::iterator::Iterator::reduce::h527244d24d37bf97(r13, rbp_2);
    let mut var_b0: i64 = 0;
    let var_78: i64 = 0;
    let var_40: *mut c_void = r13;
    let var_38: *mut c_void = rbp_2;
    let mut var_c8: i64;
    itertools::minmax::minmax_impl::h4fbfb0ef3728aa92(&var_c8, &var_b0);
    let mut rax_1: i64 = var_c8;
    let mut rcx: i64;
    
    if rax_1 == 0
    {
        rcx = rax_1;
    }
    else
    {
        let var_c0: i64;
        
        if rax_1 != 1
        {
            rax_1 = var_c0;
            let var_b8: i64;
            rcx = var_b8;
        }
        else
        {
            rax_1 = var_c0;
            rcx = rax_1;
        }
    }
    
    arg1[1] = arg2[1];
    *arg1 = *arg2;
    *arg1.byte_offset(0x18) = (0 - 0) | rdx;
    arg1[2] = rax_1;
    *arg1.byte_offset(0x28) = rcx;
    arg1
}
