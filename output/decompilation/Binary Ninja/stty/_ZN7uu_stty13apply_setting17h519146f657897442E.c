
  int64_t uu_stty::apply_setting::h519146f657897442(int128_t* arg1, int64_t arg2, uint64_t arg3)

{
    int64_t rbx = arg2;
    char result = 1;
    
    if (uu_stty::apply_baud_rate_flag::he6909650e23d0221(arg1, arg2, arg3) == 2)
    {
        int32_t var_2c = 0;
        int64_t rax_1;
        uint64_t rdx_1;
        rax_1 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hd66f2c78bdb8496c(core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(&var_2c), rbx, arg3);
        uint64_t r15_1 = rdx_1;
        
        if (rax_1)
            rbx = rax_1;
        
        if (!rax_1)
            r15_1 = arg3;
        
        result = uu_stty::apply_flag::he0c99d1085d1e908(arg1, rbx, r15_1, rax_1);
        
        if (result == 2)
        {
            result = uu_stty::apply_flag::h3592b40468ad7979(arg1, rbx, r15_1, rax_1);
            
            if (result == 2)
            {
                result = uu_stty::apply_flag::ha0fffc5722e8937c(arg1, rbx, r15_1, rax_1);
                
                if (result == 2)
                    return uu_stty::apply_flag::h86b64710a2727951(arg1, rbx, r15_1, rax_1) & 1;
            }
        }
    }
    
    return result;
}
