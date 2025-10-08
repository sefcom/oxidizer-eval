
  int64_t uu_more::Pager::should_squeeze_line::hcc3a424a86437f5a(void* arg1, int64_t arg2, int64_t arg3)

{
    if (*(arg1 + 0x81) != 1)
        return 0;
    
    int64_t rax;
    int64_t var_18 = rax;
    int64_t rax_1 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h829d259aa4156da6(arg2, arg3);
    int64_t result = *(arg1 + 0x20);
    bool rcx_1;
    
    if (!result)
        rcx_1 = false;
    else
    {
        int64_t rcx = *(arg1 + 0x18);
        int64_t rax_2 = result * 3;
        rcx_1 = !core::str::_$LT$impl$u20$str$GT$::trim_matches::h829d259aa4156da6(
            *(rcx + (rax_2 << 3) - 0x10), *(rcx + (rax_2 << 3) - 8));
    }
    
    result = !rax_1;
    result &= rcx_1;
    return result;
}
