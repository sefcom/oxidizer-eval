
  fn ruff_python_formatter::statement::suite::stub_suite_can_omit_empty_line::h43e547e2359e7308(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: *mut c_void) -> u64

{
    let var_40: i64 = arg3;
    let mut rbx: i64;
    let mut rbp_1: i32;
    
    if !(0 + -(*arg1))
    {
        rbx = *arg4.byte_offset(0x30);
        rbp_1 = 0;
    }
    else
    {
        rbx = *arg4.byte_offset(0x30);
        
        if ruff_python_formatter::statement::suite::contains_only_an_ellipsis::hc074c7c945b43356(
            arg1[5], arg1[6], *rbx(arg3).byte_offset(0x10)) == 0
        {
            rbp_1 = 0;
            arg3 = var_40;
        }
        else if *arg2 != -0x8000000000000000
        {
            rbp_1 = 0;
            arg3 = var_40;
        }
        else
        {
            arg3 = var_40;
            rbp_1 = ruff_python_formatter::statement::suite::stub_suite_can_omit_empty_line::_$u7b$$u7b$closure$u7d$$u7d$::ha35b9a0bfd41ca2e(var_40, arg4, &arg2[1]);
        }
    }
    
    let rax_4: *mut c_void = rbx(arg3);
    let rcx: i64 = *arg1;
    let mut rax_5: *mut i64;
    let mut r13_1: bool;
    
    if *rax_4.byte_offset(0x3a) == 0
    {
        if rcx > -0x7fffffffffffffe9
        {
            if *arg2 != -0x8000000000000000
            {
                r13_1 = false;
            }
            else
            {
                r13_1 = arg2[3] != 0;
            }
            
            goto 'label_721cce;
        }
        
        r13_1 = false;
        rax_5 = nullptr;
    }
    else
    {
        r13_1 = false;
        rax_5 = nullptr;
        
        if rcx > -0x7fffffffffffffe9
        {
            'label_721cce:
            
            if ruff_python_formatter::statement::suite::contains_only_an_ellipsis::hc074c7c945b43356(arg1[4], arg1[5], *rbx(var_40).byte_offset(0x10)) == 0
            {
                rax_5 = nullptr;
            }
            else
            {
                rax_5 = *arg2 > -0x7fffffffffffffe9;
            }
        }
    }
    
    rbp_1 |= r13_1;
    rbp_1 |= rax_5;
    rbp_1
}
