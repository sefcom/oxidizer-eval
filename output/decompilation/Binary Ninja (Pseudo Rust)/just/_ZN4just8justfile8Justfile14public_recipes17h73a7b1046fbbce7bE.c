
  fn just::justfile::Justfile::public_recipes::h73a7b1046fbbce7b(arg1: *mut i128, arg2: *mut c_void, arg3: i8) -> i64

{
    let rax: i64 = *arg2.byte_offset(0x2b8);
    let rcx: i64 = *arg2.byte_offset(0x2c0);
    let mut rdi: i64 = rax;
    let mut rdx: i64;
    rdx = rax != 0;
    
    if rax != 0
    {
        rdi = *arg2.byte_offset(0x2c8);
    }
    
    let mut var_60: i64 = rdx;
    let var_58: i64 = 0;
    let var_50: i64 = rax;
    let var_48: i64 = rcx;
    let var_40: i64 = rdx;
    let var_38: i64 = 0;
    let var_30: i64 = rax;
    let var_28: i64 = rcx;
    let var_20: i64 = rdi;
    let mut var_78: i128;
    core::iter::traits::iterator::Iterator::collect::hbb775d42487379fd(&var_78, &var_60);
    let result: i64;
    
    if (arg3 & 1) != 0
    {
        alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::sort_by_key::h123c6b3426d0d3c7(*var_78[8], 
            result);
    }
    
    arg1[1] = result;
    *arg1 = var_78;
    result
}
