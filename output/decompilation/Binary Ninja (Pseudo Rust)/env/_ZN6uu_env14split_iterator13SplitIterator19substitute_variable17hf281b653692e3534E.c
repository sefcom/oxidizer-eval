
  fn uu_env::split_iterator::SplitIterator::substitute_variable::hf281b653692e3534(arg1: *mut i32, arg2: *mut i64) -> i64

{
    let mut var_48: *mut c_void = &arg2[3];
    let mut result_1: i32;
    uu_env::variable_parser::VariableParser::parse_variable::h7989a880208e7e71(&result_1, &var_48);
    let result: i32 = result_1;
    let var_68: i128;
    let var_58: i128;
    
    if result != 0xc
    {
        *arg1 = result;
        let var_6c: i32;
        arg1[1] = var_6c;
        *arg1.byte_offset(8) = var_68;
        *arg1.byte_offset(0x18) = var_58;
        return result;
    }
    
    let r12_1: i64 = var_58;
    let var_38_1: i128 = var_68;
    let mut var_40: i64 = -0x8000000000000000;
    std::env::var_os::h7920fba9b28ef82d(&result_1, &var_40);
    let r15_1: i64 = result_1;
    
    if -(r15_1) != -0x8000000000000000
    {
        uu_env::string_expander::StringExpander::put_string::he3009d358d45b1af(arg2, &result_1);
    }
    else if r12_1 != 0
    {
        uu_env::string_expander::StringExpander::put_native_string::ha027471422dd1e5c(arg2, r12_1, 
            *var_58[8]);
    }
    
    *arg1 = 0xc;
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..ffi..os_str..OsStr$GT$$GT$::hf18cf8a450edb385(r15_1, var_68)
}
