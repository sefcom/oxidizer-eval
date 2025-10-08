
  uint64_t ruff_python_formatter::expression::expr_attribute::is_base_ten_number_literal::h6b191659b6ae6759(int32_t* arg1, char* arg2, int64_t arg3)

{
    int64_t rax;
    int64_t var_38 = rax;
    uint64_t rbx;
    
    if (*arg1 != 0x15)
        rbx = 0;
    else
    {
        int64_t rax_1 = *(arg1 + 8);
        rbx = 1;
        
        if (!rax_1)
        {
            uint64_t rax_4;
            int64_t rdx;
            rax_4 = ruff_text_size::range::_$LT$impl$u20$core..convert..From$LT$ruff_text_size..range..TextRange$GT$$u20$for$u20$core..ops..range..Range$LT$T$GT$$GT$::from::h5565193b43bb472c(arg1[8], arg1[9]);
            void* rax_5;
            int64_t rdx_2;
            rax_5 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rax_4, rdx, arg2, arg3);
            
            if (!rax_5)
            {
                core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, rax_4, rdx);
                /* no return */
            }
            
            if (rdx_2 > 1 && *rax_5 == 0x30)
            {
                char rcx_3 = *(rax_5 + 1) - 0x42;
                
                if (rcx_3 <= 0x36)
                    rbx = 0x3fdffeffbfdffe >> rcx_3;
            }
        }
        else if (rax_1 != 1)
            rbx = 0;
    }
    
    rbx &= 1;
    return rbx;
}
