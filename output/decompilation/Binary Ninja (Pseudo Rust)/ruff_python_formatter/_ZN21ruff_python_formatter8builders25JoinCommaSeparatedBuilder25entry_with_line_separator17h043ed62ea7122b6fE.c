
  fn ruff_python_formatter::builders::JoinCommaSeparatedBuilder::entry_with_line_separator::h043ed62ea7122b6f(arg1: *mut c_void) -> *mut c_void

{
    let mut var_59: i8 = 0;
    let rax: i32 = *arg1.byte_offset(8);
    let mut var_40: i64 = *arg1.byte_offset(0x20);
    let var_38: *mut c_void = arg1;
    let var_30: *mut i8 = &var_59;
    let rsi: i64;
    let var_28: i64 = rsi;
    let rdx: i64;
    let var_20: i64 = rdx;
    let var_18: *mut c_void = &data_97e6a0;
    let mut var_58: i32;
    let mut var_54: i128;
    
    if rax != 4
    {
        var_58 = rax;
        var_54 = *arg1.byte_offset(0xc);
        let var_44_1: i32 = *arg1.byte_offset(0x1c);
    }
    else
    {
        ruff_python_formatter::builders::JoinCommaSeparatedBuilder::entry_with_line_separator::_$u7b$$u7b$closure$u7d$$u7d$::h089cedb806c88fe2(&var_58, &var_40);
    }
    
    *arg1.byte_offset(0x18) = *var_54[0xc];
    *arg1.byte_offset(8) = var_58;
    *arg1.byte_offset(0xc) = var_54;
    *arg1.byte_offset(0x14) = *var_54[8];
    arg1
}
