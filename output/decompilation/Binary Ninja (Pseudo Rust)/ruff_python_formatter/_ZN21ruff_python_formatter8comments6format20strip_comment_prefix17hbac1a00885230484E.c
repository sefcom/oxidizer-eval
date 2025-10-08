
  fn ruff_python_formatter::comments::format::strip_comment_prefix::hbac1a00885230484(arg1: *mut i32, arg2: i64, arg3: i64) -> i64

{
    let mut var_1c: i32 = 0;
    let mut rax: *mut i8;
    let mut rdx: u64;
    rax = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x23, &var_1c);
    let mut rax_1: *mut i8;
    let mut result_1: i64;
    rax_1 =
        _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hd66f2c78bdb8496c(
        rax, rdx, arg2, arg3);
    let mut rsi_2: *const i8 = "Didn't find expected comment tok…";
    
    if rax_1 != 0
    {
        rsi_2 = rax_1;
    }
    
    let mut rcx_1: i32;
    rcx_1 = rax_1 != 0;
    let mut result: i64 = 0x26;
    
    if rax_1 != 0
    {
        result = result_1;
    }
    
    *arg1 = rcx_1 << 2;
    *arg1.byte_offset(8) = rsi_2;
    *arg1.byte_offset(0x10) = result;
    result
}
