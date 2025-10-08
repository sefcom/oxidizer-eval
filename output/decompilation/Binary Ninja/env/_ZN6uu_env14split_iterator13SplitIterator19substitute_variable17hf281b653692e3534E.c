
  int64_t uu_env::split_iterator::SplitIterator::substitute_variable::hf281b653692e3534(int32_t* arg1, int64_t* arg2)

{
    void* var_48 = &arg2[3];
    int32_t result_1;
    uu_env::variable_parser::VariableParser::parse_variable::h7989a880208e7e71(&result_1, &var_48);
    int32_t result = result_1;
    int128_t var_68;
    int128_t var_58;
    
    if (result != 0xc)
    {
        *arg1 = result;
        int32_t var_6c;
        arg1[1] = var_6c;
        *(arg1 + 8) = var_68;
        *(arg1 + 0x18) = var_58;
        return result;
    }
    
    int64_t r12_1 = var_58;
    int128_t var_38_1 = var_68;
    int64_t var_40 = -0x8000000000000000;
    std::env::var_os::h7920fba9b28ef82d(&result_1, &var_40);
    int64_t r15_1 = result_1;
    
    if (-(r15_1) != -0x8000000000000000)
        uu_env::string_expander::StringExpander::put_string::he3009d358d45b1af(arg2, &result_1);
    else if (r12_1)
        uu_env::string_expander::StringExpander::put_native_string::ha027471422dd1e5c(arg2, r12_1, 
            *var_58[8]);
    
    *arg1 = 0xc;
    return core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..ffi..os_str..OsStr$GT$$GT$::hf18cf8a450edb385(r15_1, var_68);
}
