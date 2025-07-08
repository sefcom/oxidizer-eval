
  int64_t uu_env::split_iterator::SplitIterator::substitute_variable::h1db80b01658fc728(int32_t* arg1, int64_t* arg2)

{
    void* var_48 = &arg2[3];
    int32_t result_1;
    uu_env::variable_parser::VariableParser::parse_variable::h1713cd6810b8ef74(&result_1, &var_48);
    int32_t result = result_1;
    int128_t var_68;
    int128_t var_58;
    
    if (result != 8)
    {
        *arg1 = result;
        int32_t var_6c;
        arg1[1] = var_6c;
        *(arg1 + 8) = var_68;
        *(arg1 + 0x18) = var_58;
        return result;
    }
    
    int64_t r15_1 = var_58;
    int128_t var_38_1 = var_68;
    int64_t var_40 = -0x8000000000000000;
    std::env::var_os::h9e209a112117a791(&result_1, &var_40);
    
    if (result_1 != -0x8000000000000000)
        uu_env::string_expander::StringExpander::put_string::h88bd9b4cfb26db83(arg2, &result_1);
    else if (r15_1)
        uu_env::string_expander::StringExpander::put_native_string::h4ed77b672753a87e(arg2, r15_1, 
            *var_58[8]);
    
    *arg1 = 8;
    return core::ptr::drop_in_place$LT$core..option..Option$LT$std..ffi..os_str..OsString$GT$$GT$::h424bf7a51d52b228(&result_1);
}
