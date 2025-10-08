
  int64_t ruff_python_formatter::comments::format::strip_comment_prefix::hbac1a00885230484(int32_t* arg1, int64_t arg2, int64_t arg3)

{
    int32_t var_1c = 0;
    char* rax;
    uint64_t rdx;
    rax = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x23, &var_1c);
    char* rax_1;
    int64_t result_1;
    rax_1 =
        _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hd66f2c78bdb8496c(
        rax, rdx, arg2, arg3);
    char const* const rsi_2 = "Didn't find expected comment tok…";
    
    if (rax_1)
        rsi_2 = rax_1;
    
    int32_t rcx_1;
    rcx_1 = rax_1;
    int64_t result = 0x26;
    
    if (rax_1)
        result = result_1;
    
    *arg1 = rcx_1 << 2;
    *(arg1 + 8) = rsi_2;
    *(arg1 + 0x10) = result;
    return result;
}
