
  int64_t uu_base32::base_common::fast_encode::write_to_output::h5f7916e193db6f77(int64_t* arg1, int64_t* arg2, int64_t arg3, void* arg4, char arg5)

{
    int64_t rax;
    int64_t var_8 = rax;
    int64_t rcx = *(arg4 + 0x38);
    int64_t result;
    
    if (*arg1 != -0x8000000000000000)
    {
        result = uu_base32::base_common::fast_encode::write_with_line_breaks::h03d07599502588da(
            arg1, arg2, arg3, rcx, arg5);
        
        if (result)
            return result;
    }
    else
    {
        result = uu_base32::base_common::fast_encode::write_without_line_breaks::h6fa0e036bb3780e0(
            arg2, arg3, rcx, arg5);
        
        if (result)
            return result;
    }
    return 0;
}
