
  fn just::function::trim_start_match::h93698abdc24bc85e(arg1: *mut i64, arg2: i64, arg3: i64, arg4: u64, arg5: i64, arg6: u64) -> *mut i64

{
    let mut r14: i64 = arg3;
    let mut rax: i64;
    let mut rdx: u64;
    rax =
        _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hd66f2c78bdb8496c(
        arg5, arg6, arg3, arg4);
    
    if rax == 0
    {
        rdx = arg4;
    }
    
    if rax != 0
    {
        r14 = rax;
    }
    
    let mut var_30: i128;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_30, r14, rdx);
    let var_20: i64;
    arg1[3] = var_20;
    *arg1.byte_offset(8) = var_30;
    *arg1 = 0;
    arg1
}
