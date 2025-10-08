
  fn just::execution_context::ExecutionContext::working_directory::hcc9cc51d43cb6ad6(arg1: *mut i128, arg2: *mut c_void, arg3: *mut c_void) -> i64

{
    let mut rdx: *mut c_void = arg3.byte_offset(0x18);
    
    if *arg2.byte_offset(0x230) != 0x25
    {
        rdx = arg2.byte_offset(0x78);
    }
    
    let rsi: i64 = *rdx.byte_offset(8);
    let rdx_1: u64 = *rdx.byte_offset(0x10);
    
    if 0 + -(*arg2.byte_offset(0x1c8))
    {
        /* tailcall */
        return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(arg1, rsi, rdx_1);
    }
    
    /* tailcall */
    std::path::Path::join::h509d33a3bbf89c2c(arg1, rsi, rdx_1, arg2.byte_offset(0x1c8))
}
