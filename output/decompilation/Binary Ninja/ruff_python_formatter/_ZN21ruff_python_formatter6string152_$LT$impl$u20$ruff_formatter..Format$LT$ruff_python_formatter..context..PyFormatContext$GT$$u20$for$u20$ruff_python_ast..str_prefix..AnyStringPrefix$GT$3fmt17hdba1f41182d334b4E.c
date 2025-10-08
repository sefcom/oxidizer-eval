
  int32_t* ruff_python_formatter::string::_$LT$impl$u20$ruff_formatter..Format$LT$ruff_python_formatter..context..PyFormatContext$GT$$u20$for$u20$ruff_python_ast..str_prefix..AnyStringPrefix$GT$::fmt::hdba1f41182d334b4(int32_t* arg1, char* arg2, int64_t* arg3)

{
    int64_t* r14 = arg3;
    char rax = *arg2;
    char rcx = arg2[1];
    arg3 = rax != 3;
    arg2 = rcx < 2;
    arg2 |= arg3;
    
    if (arg2 == 1)
    {
        void* rax_1;
        int64_t rdx;
        rax_1 = ruff_python_ast::str_prefix::AnyStringPrefix::as_str::hfc265adb6e4a05ea(rax, rcx);
        void* var_20_1 = rax_1;
        int64_t var_18_1 = rdx;
        char var_28 = 4;
        (*(r14[1] + 0x18))(*r14, &var_28);
    }
    
    *arg1 = 4;
    return arg1;
}
