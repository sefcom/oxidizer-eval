
  fn just::recipe::Recipe$LT$D$GT$::groups::hd8e05377223fb99f(arg1: *mut i128, arg2: *mut c_void) -> i64

{
    let rax_1: i64 = *arg2.byte_offset(0xd8);
    let rcx: i64 = *arg2.byte_offset(0xe0);
    let mut r8: i64 = rax_1;
    let mut rdx: i64;
    rdx = rax_1 != 0;
    
    if rax_1 != 0
    {
        r8 = *arg2.byte_offset(0xe8);
    }
    
    let mut var_48: i64 = rdx;
    let var_40: i64 = 0;
    let var_38: i64 = rax_1;
    let var_30: i64 = rcx;
    let var_28: i64 = rdx;
    let var_20: i64 = 0;
    let var_18: i64 = rax_1;
    let var_10: i64 = rcx;
    let var_8: i64 = r8;
    core::iter::traits::iterator::Iterator::collect::hacd0d0c4bf6f330c(arg1, &var_48)
}
