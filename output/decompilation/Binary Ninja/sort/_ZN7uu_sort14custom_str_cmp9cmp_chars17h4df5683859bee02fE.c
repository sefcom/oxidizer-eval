
  int64_t uu_sort::custom_str_cmp::cmp_chars::h4df5683859bee02f(int32_t arg1, int32_t arg2, int32_t arg3) __pure

{
    if (!arg3)
    {
        bool c_1 = arg1 < arg2;
        return (arg1 != arg2 && !c_1) - 0;
    }
    
    int32_t rcx_1 = arg1 & 0x5f;
    
    if (arg1 - 0x61 >= 0x1a)
        rcx_1 = arg1;
    
    int32_t rdx_1 = arg2 & 0x5f;
    
    if (arg2 - 0x61 >= 0x1a)
        rdx_1 = arg2;
    
    bool c = rcx_1 < rdx_1;
    int32_t result;
    result = rcx_1 != rdx_1 && !c;
    result = result - 0;
    return result;
}
