
  uint64_t ruff_python_formatter::verbatim::Indentation::trim_indent::h4ed1435bb0f1173f(int32_t arg1, int32_t* arg2, char* arg3, int64_t arg4)

{
    int32_t rax;
    int32_t rdx;
    rax = _$LT$$RF$T$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h21ba564204b53270(arg2);
    uint64_t rbx = rdx;
    uint64_t rax_1;
    int64_t rdx_1;
    rax_1 = ruff_text_size::range::_$LT$impl$u20$core..convert..From$LT$ruff_text_size..range..TextRange$GT$$u20$for$u20$core..ops..range..Range$LT$T$GT$$GT$::from::h5565193b43bb472c(rax, rdx);
    void* rax_2;
    void* rdx_3;
    rax_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rax_1, rdx_1, arg3, arg4);
    
    if (!rax_2)
    {
        core::str::slice_error_fail::h1a2885084e28d077(arg3, arg4, rax_1, rdx_1);
        /* no return */
    }
    
    void* var_48 = rax_2;
    void* var_40 = rdx_3 + rax_2;
    int32_t r14_1;
    
    if (!arg1)
        r14_1 = 0;
    else
    {
        uint64_t i = arg1;
        r14_1 = 0;
        
        do
        {
            char rax_4;
            int32_t rdx_5;
            rax_4 = core::str::validations::next_code_point::hfc8b8c1898281fd8(&var_48, rbx);
            
            if (!(rax_4 & 1))
                break;
            
            if (rdx_5 != 0x20 && rdx_5 != 9)
                break;
            
            r14_1 += 1;
            i -= 1;
        } while (i);
    }
    
    int32_t r14_2 = r14_1 + rax;
    
    if (r14_2 <= rbx)
        return r14_2;
    
    core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
    /* no return */
}
