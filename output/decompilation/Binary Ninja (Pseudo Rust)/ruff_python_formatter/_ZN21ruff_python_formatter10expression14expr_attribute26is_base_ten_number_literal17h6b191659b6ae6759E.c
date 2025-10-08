
  fn ruff_python_formatter::expression::expr_attribute::is_base_ten_number_literal::h6b191659b6ae6759(arg1: *mut i32, arg2: *mut i8, arg3: i64) -> u64

{
    let rax: i64;
    let var_38: i64 = rax;
    let mut rbx: u64;
    
    if *arg1 != 0x15
    {
        rbx = 0;
    }
    else
    {
        let rax_1: i64 = *arg1.byte_offset(8);
        rbx = 1;
        
        if rax_1 == 0
        {
            let mut rax_4: u64;
            let mut rdx: i64;
            rax_4 = ruff_text_size::range::_$LT$impl$u20$core..convert..From$LT$ruff_text_size..range..TextRange$GT$$u20$for$u20$core..ops..range..Range$LT$T$GT$$GT$::from::h5565193b43bb472c(arg1[8], arg1[9]);
            let mut rax_5: *mut c_void;
            let mut rdx_2: i64;
            rax_5 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rax_4, rdx, arg2, arg3);
            
            if rax_5 == 0
            {
                core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, rax_4, rdx);
                /* no return */
            }
            
            if rdx_2 > 1 && *rax_5 == 0x30
            {
                let rcx_3: i8 = *rax_5.byte_offset(1) - 0x42;
                
                if rcx_3 <= 0x36
                {
                    rbx = 0x3fdffeffbfdffe >> rcx_3;
                }
            }
        }
        else if rax_1 != 1
        {
            rbx = 0;
        }
    }
    
    rbx &= 1;
    rbx
}
