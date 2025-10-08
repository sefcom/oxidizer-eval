
  uint64_t ruff_python_formatter::string::docstring::needs_chaperone_space::h0757348e78c1bc42(char arg1, int64_t arg2, int64_t arg3, char arg4)

{
    uint64_t rbx;
    rbx = 1;
    
    if (!(ruff_python_formatter::string::docstring::count_consecutive_chars_from_end::h92240d424756d0e0(arg2, arg3) & 1))
    {
        if (!(arg4 & 1))
        {
            if (arg1 & 2)
            {
                int64_t rax_5;
                rax_5 = !(arg1 & 1);
                int32_t var_2c = 0;
                char* rax_6;
                uint64_t rdx_3;
                rax_6 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(rax_5 * 5 + 0x22, 
                    &var_2c);
                rbx = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h74aadde88527fc22(
                    arg2, arg3, rax_6, rdx_3);
            }
            else
                rbx = 0;
        }
        else if (!(arg1 & 2))
            rbx = 0;
        else
        {
            int64_t rax_1;
            rax_1 = !(arg1 & 1);
            int32_t var_30 = 0;
            char* rax_2;
            uint64_t rdx;
            rax_2 =
                core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(rax_1 * 5 + 0x22, &var_30);
            int64_t rax_3;
            int64_t rdx_2;
            rax_3 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_suffix_of::ha48df28aef4c1d38(rax_2, rdx, arg2, arg3);
            
            if (!rax_3)
                rbx = 0;
            else if (ruff_python_formatter::string::docstring::count_consecutive_chars_from_end::h92240d424756d0e0(rax_3, rdx_2) & 1)
                rbx = 0;
        }
    }
    
    return rbx;
}
