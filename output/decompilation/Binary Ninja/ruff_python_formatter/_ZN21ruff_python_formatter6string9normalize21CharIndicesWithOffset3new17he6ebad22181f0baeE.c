
  void* ruff_python_formatter::string::normalize::CharIndicesWithOffset::new::he6ebad22181f0bae(void** arg1, char* arg2, int64_t arg3, int64_t arg4)

{
    int64_t rax;
    int64_t var_28 = rax;
    void* result;
    void* rdx;
    result = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(arg4, arg2, arg3);
    
    if (!result)
    {
        core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, arg4, arg3);
        /* no return */
    }
    
    *arg1 = result;
    arg1[1] = rdx + result;
    arg1[2] = arg4;
    return result;
}
