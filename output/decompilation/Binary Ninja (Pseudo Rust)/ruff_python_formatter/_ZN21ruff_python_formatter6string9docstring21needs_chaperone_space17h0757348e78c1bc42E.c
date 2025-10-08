
  fn ruff_python_formatter::string::docstring::needs_chaperone_space::h0757348e78c1bc42(arg1: i8, arg2: i64, arg3: i64, arg4: i8) -> u64

{
    let mut rbx: u64;
    rbx = 1;
    
    if (ruff_python_formatter::string::docstring::count_consecutive_chars_from_end::h92240d424756d0e0(arg2, arg3) & 1) == 0
    {
        if (arg4 & 1) == 0
        {
            if (arg1 & 2) != 0
            {
                let mut rax_5: i64;
                rax_5 = (arg1 & 1) == 0;
                let mut var_2c: i32 = 0;
                let mut rax_6: *mut i8;
                let mut rdx_3: u64;
                rax_6 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(rax_5 * 5 + 0x22, 
                    &var_2c);
                rbx = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h74aadde88527fc22(
                    arg2, arg3, rax_6, rdx_3);
            }
            else
            {
                rbx = 0;
            }
        }
        else if (arg1 & 2) == 0
        {
            rbx = 0;
        }
        else
        {
            let mut rax_1: i64;
            rax_1 = (arg1 & 1) == 0;
            let mut var_30: i32 = 0;
            let mut rax_2: *mut i8;
            let mut rdx: u64;
            rax_2 =
                core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(rax_1 * 5 + 0x22, &var_30);
            let mut rax_3: i64;
            let mut rdx_2: i64;
            rax_3 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_suffix_of::ha48df28aef4c1d38(rax_2, rdx, arg2, arg3);
            
            if rax_3 == 0
            {
                rbx = 0;
            }
            else if (ruff_python_formatter::string::docstring::count_consecutive_chars_from_end::h92240d424756d0e0(rax_3, rdx_2) & 1) != 0
            {
                rbx = 0;
            }
        }
    }
    
    rbx
}
