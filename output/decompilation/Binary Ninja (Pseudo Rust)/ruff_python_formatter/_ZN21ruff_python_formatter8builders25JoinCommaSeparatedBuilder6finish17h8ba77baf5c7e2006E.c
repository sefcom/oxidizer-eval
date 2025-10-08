
  fn ruff_python_formatter::builders::JoinCommaSeparatedBuilder::finish::h8ba77baf5c7e2006(arg1: *mut i128, arg2: *mut c_void) -> i64

{
    let rax: i32 = *arg2.byte_offset(8);
    let mut var_20: i64 = *arg2.byte_offset(0x20);
    let var_18: *mut c_void = arg2;
    let var_10: *mut c_void = arg2.byte_offset(0x28);
    let var_8: *mut c_void = arg2.byte_offset(0x2c);
    
    if rax == 4
    {
        return ruff_python_formatter::builders::JoinCommaSeparatedBuilder::finish::_$u7b$$u7b$closure$u7d$$u7d$::hc0f4d7c6cc211d36(arg1, &var_20);
    }
    
    *arg1 = rax;
    *arg1.byte_offset(4) = *arg2.byte_offset(0xc);
    let result: i32 = *arg2.byte_offset(0x1c);
    *arg1.byte_offset(0x14) = result;
    result
}
