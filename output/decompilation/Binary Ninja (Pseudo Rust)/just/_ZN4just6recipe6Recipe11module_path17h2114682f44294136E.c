
  fn just::recipe::Recipe::module_path::h2114682f44294136(arg1: *mut c_void) -> *mut c_void

{
    let mut rax: *mut i8;
    let mut rdx: i64;
    rax = just::recipe::Recipe::namepath::haa1c710e3a0b6f26(arg1);
    let mut rax_1: i8;
    let mut rdx_1: i64;
    rax_1 = core::str::_$LT$impl$u20$str$GT$::rfind::h11352625ba47f292(rax, rdx);
    let mut r15: i64 = rdx_1;
    
    if (rax_1 & 1) == 0
    {
        r15 = 0;
    }
    
    let result: *mut c_void = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(0, r15, rax, rdx);
    
    if result != 0
    {
        return result;
    }
    
    core::str::slice_error_fail::h1a2885084e28d077(rax, rdx, 0, r15);
    /* no return */
}
