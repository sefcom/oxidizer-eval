
  fn uu_env::split_iterator::SplitIterator::substitute_variable::h1db80b01658fc728(arg1: *mut i32, arg2: *mut i64) -> i64

{
    let mut var_48: *mut c_void = &arg2[3];
    let mut result_1: i32;
    uu_env::variable_parser::VariableParser::parse_variable::h1713cd6810b8ef74(&result_1, &var_48);
    let result: i32 = result_1;
    let var_68: i128;
    let var_58: i128;
    
    if result != 8
    {
        *arg1 = result;
        let var_6c: i32;
        arg1[1] = var_6c;
        *arg1.byte_offset(8) = var_68;
        *arg1.byte_offset(0x18) = var_58;
        return result;
    }
    
    let r15_1: i64 = var_58;
    let var_38_1: i128 = var_68;
    let mut var_40: i64 = -0x8000000000000000;
    std::env::var_os::h9e209a112117a791(&result_1, &var_40);
    
    if result_1 != -0x8000000000000000
    {
        uu_env::string_expander::StringExpander::put_string::h88bd9b4cfb26db83(arg2, &result_1);
    }
    else if r15_1 != 0
    {
        uu_env::string_expander::StringExpander::put_native_string::h4ed77b672753a87e(arg2, r15_1, 
            *var_58[8]);
    }
    
    *arg1 = 8;
    core::ptr::drop_in_place$LT$core..option..Option$LT$std..ffi..os_str..OsString$GT$$GT$::h424bf7a51d52b228(&result_1)
}
