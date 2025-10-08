
  fn rg::flags::parse::Parser::find_long::h9dc8bf2eec00e1d3(arg1: *mut i64, arg2: *mut c_void, arg3: *mut i64, arg4: u64) -> i64

{
    let rax: i64;
    let var_28: i64 = rax;
    let mut rax_1: i8;
    let mut rdx_1: i64;
    rax_1 = rg::flags::parse::FlagMap::find::hdf23bd2dbf42aadc(arg2.byte_offset(0x18), arg3, arg4);
    
    if (rax_1 & 1) == 0
    {
        /* tailcall */
        return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1dbf6ec1d593e24c(arg1, arg3, arg4);
    }
    
    let rsi_1: i64 = *arg2.byte_offset(0x10);
    
    if rdx_1 >= rsi_1
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(rdx_1, rsi_1);
        /* no return */
    }
    
    let result: i64 = rdx_1 * 0x28 + *arg2.byte_offset(8);
    arg1[1] = result;
    *arg1 = -0x8000000000000000;
    result
}
