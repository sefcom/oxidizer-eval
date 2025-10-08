
  uint64_t ruff_python_formatter::string::docstring::contains_unescaped_newline::h725af0d29cbc1dc9(char* arg1, int64_t arg2)

{
    int64_t rax;
    int64_t var_38 = rax;
    int64_t r14 = arg2;
    char* r12 = arg1;
    int64_t rdx_2;
    
    while (true)
    {
        *var_38[3] = 0x5c;
        int32_t rax_1;
        rax_1 = memchr::arch::generic::memchr::search_slice_with_raw::hb25a568564df487c(r12, r14, 
            &*var_38[3]);
        
        if (rax_1 & 1)
        {
            void* rax_2;
            int64_t rdx_4;
            rax_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(rdx_2 + 1, r12, r14);
            
            if (!rax_2)
                break;
            
            char* rax_3;
            int64_t rdx_5;
            rax_3 = _$LT$str$u20$as$u20$ruff_python_trivia..whitespace..PythonWhitespace$GT$::trim_whitespace_start::h664fc8ac076cf662(rax_2, rdx_4);
            r12 = rax_3;
            r14 = rdx_5;
            *var_38[4] = 0;
            char* rax_4;
            uint64_t rdx_6;
            rax_4 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0xa, &*var_38[4]);
            
            if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf48f8dbcb851e47f(r12, 
                    r14, rax_4, rdx_6))
                continue;
        }
        
        int32_t r13_1;
        r13_1 = rax_1 & 1;
        return r13_1;
    }
    
    core::str::slice_error_fail::h1a2885084e28d077(r12, r14, rdx_2 + 1, r14);
    /* no return */
}
