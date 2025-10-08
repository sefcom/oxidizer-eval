
  int64_t ruff_python_formatter::comments::placement::are_parameters_parenthesized::hc4bf8dd1314cbfd0(int32_t arg1, int32_t arg2, char* arg3, int64_t arg4)

{
    int64_t rax;
    int64_t var_38 = rax;
    uint64_t rax_1;
    int64_t rdx;
    rax_1 = ruff_text_size::range::_$LT$impl$u20$core..convert..From$LT$ruff_text_size..range..TextRange$GT$$u20$for$u20$core..ops..range..Range$LT$T$GT$$GT$::from::h5565193b43bb472c(arg1, arg2);
    void* rax_2;
    int64_t rdx_2;
    rax_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rax_1, rdx, arg3, arg4);
    
    if (!rax_2)
    {
        core::str::slice_error_fail::h1a2885084e28d077(arg3, arg4, rax_1, rdx);
        /* no return */
    }
    
    *var_38[4] = 0;
    char* rax_3;
    uint64_t rdx_3;
    rax_3 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x28, &*var_38[4]);
    return core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf48f8dbcb851e47f(rax_2, rdx_2, 
        rax_3, rdx_3);
}
