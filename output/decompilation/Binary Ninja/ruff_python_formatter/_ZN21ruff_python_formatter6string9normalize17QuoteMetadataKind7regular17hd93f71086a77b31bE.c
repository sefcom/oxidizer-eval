
  int64_t ruff_python_formatter::string::normalize::QuoteMetadataKind::regular::hd93f71086a77b31b(uint64_t arg1, int64_t arg2, int64_t arg3)

{
    int64_t var_30 = arg2;
    int64_t var_28 = arg3 + arg2;
    int32_t rbp = 0;
    int32_t r15 = 0;
    char result;
    
    while (true)
    {
        int32_t rdx_1;
        result = core::str::validations::next_code_point::hfc8b8c1898281fd8(&var_30, arg1);
        
        if (!(result & 1))
            break;
        
        if (rdx_1 == 0x22)
            rbp += 1;
        else if (rdx_1 == 0x27)
            r15 += 1;
    }
    
    *(arg1 + 4) = r15;
    *(arg1 + 8) = rbp;
    *arg1 = 2;
    return result;
}
