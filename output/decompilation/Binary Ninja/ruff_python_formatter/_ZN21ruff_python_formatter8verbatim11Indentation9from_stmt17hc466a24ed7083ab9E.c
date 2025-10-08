
  uint64_t ruff_python_formatter::verbatim::Indentation::from_stmt::hc466a24ed7083ab9(int64_t* arg1, char* arg2, uint64_t arg3)

{
    int32_t rax_1 = _$LT$str$u20$as$u20$ruff_source_file..line_ranges..LineRanges$GT$::line_start::h88cc009d0f122bfe(arg2, arg3, 
        _$LT$ruff_python_ast..generated..Stmt$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h6da43eeee2e8d007(arg1));
    int32_t rax_2 = _$LT$ruff_python_ast..generated..Stmt$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h6da43eeee2e8d007(arg1);
    
    if (rax_1 > rax_2)
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
        /* no return */
    }
    
    uint64_t rax_3;
    int64_t rdx_1;
    rax_3 = ruff_text_size::range::_$LT$impl$u20$core..convert..From$LT$ruff_text_size..range..TextRange$GT$$u20$for$u20$core..ops..range..Range$LT$T$GT$$GT$::from::h5565193b43bb472c(rax_1, rax_2);
    void* rax_4;
    void* rdx_3;
    rax_4 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rax_3, rdx_1, arg2, arg3);
    
    if (!rax_4)
    {
        core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, rax_3, rdx_1);
        /* no return */
    }
    
    void* var_38 = rax_4;
    void* var_30 = rdx_3 + rax_4;
    char rax_5;
    int32_t i;
    rax_5 = core::str::validations::next_code_point::hfc8b8c1898281fd8(&var_38, arg3);
    uint64_t rbx_1 = 0;
    
    if (rax_5 & 1)
    {
        rbx_1 = 0;
        
        while (i == 9 || i == 0x20)
        {
            rbx_1 = rbx_1 + 1;
            char rax_6;
            rax_6 = core::str::validations::next_code_point::hfc8b8c1898281fd8(&var_38, rbx_1);
            
            if (!(rax_6 & 1))
                break;
        }
    }
    
    return rbx_1;
}
