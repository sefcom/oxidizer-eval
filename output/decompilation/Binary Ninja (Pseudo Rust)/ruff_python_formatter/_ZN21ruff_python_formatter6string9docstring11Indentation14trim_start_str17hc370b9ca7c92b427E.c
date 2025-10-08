
  fn ruff_python_formatter::string::docstring::Indentation::trim_start_str::hc370b9ca7c92b427(arg1: *mut i32, arg2: *mut i8, arg3: u64) -> *mut i8

{
    let mut rbx: u64 = arg3;
    let mut result: *mut i8 = arg2;
    let rax: i64 =
        ruff_python_formatter::string::docstring::Indentation::columns::h9e266497152669ca(arg1);
    let mut result_1: *mut i8 = result;
    let var_38: *mut c_void = &result[rbx];
    let mut rax_2: i8;
    let mut rdx: i32;
    rax_2 = core::str::validations::next_code_point::hfc8b8c1898281fd8(&result_1, rbx);
    
    if (rax_2 & 1) != 0
    {
        let mut r13_1: i32 = rdx;
        let mut rbp_1: i64 = 0;
        
        while rbp_1 < rax
        {
            let mut result_2: *mut c_void;
            let mut rdx_2: u64;
            let mut r13_2: i64;
            
            if r13_1 == 0x20
            {
                'label_726920:
                rbp_1 += 1;
                r13_2 = 1;
                'label_726932:
                result_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r13_2, result, rbx);
                
                if result_2 == 0
                {
                    core::str::slice_error_fail::h1a2885084e28d077(result, rbx, r13_2, rbx);
                    /* no return */
                }
            }
            else
            {
                if r13_1 != 9
                {
                    if r13_1 - 9 < 5
                    {
                        goto 'label_726920;
                    }
                    
                    if r13_1 < 0x80
                    {
                        break;
                    }
                    
                    if core::unicode::unicode_data::white_space::lookup::hae563f9e204d99ae(r13_1)
                        == 0
                    {
                        break;
                    }
                    
                    if r13_1 >= 0x800
                    {
                        r13_2 = 4 - 0;
                        rbp_1 += r13_2;
                    }
                    else
                    {
                        rbp_1 += 2;
                        r13_2 = 2;
                    }
                    
                    goto 'label_726932;
                }
                
                result_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(1, result, rbx);
                
                if result_2 == 0
                {
                    core::str::slice_error_fail::h1a2885084e28d077(result, rbx, 1, rbx);
                    /* no return */
                }
                
                rbp_1 = (rbp_1 & 0xfffffffffffffff8) + 8;
            }
            rbx = rdx_2;
            result = result_2;
            let mut rax_3: i8;
            let mut rdx_3: i32;
            rax_3 = core::str::validations::next_code_point::hfc8b8c1898281fd8(&result_1, rbx);
            r13_1 = rdx_3;
            
            if (rax_3 & 1) == 0
            {
                break;
            }
        }
    }
    
    result
}
