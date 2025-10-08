
  int64_t ruff_python_formatter::builders::JoinCommaSeparatedBuilder::finish::h8ba77baf5c7e2006(int128_t* arg1, void* arg2)

{
    int32_t rax = *(arg2 + 8);
    int64_t var_20 = *(arg2 + 0x20);
    void* var_18 = arg2;
    void* var_10 = arg2 + 0x28;
    void* var_8 = arg2 + 0x2c;
    
    if (rax == 4)
        return ruff_python_formatter::builders::JoinCommaSeparatedBuilder::finish::_$u7b$$u7b$closure$u7d$$u7d$::hc0f4d7c6cc211d36(arg1, &var_20);
    
    *arg1 = rax;
    *(arg1 + 4) = *(arg2 + 0xc);
    int32_t result = *(arg2 + 0x1c);
    *(arg1 + 0x14) = result;
    return result;
}
