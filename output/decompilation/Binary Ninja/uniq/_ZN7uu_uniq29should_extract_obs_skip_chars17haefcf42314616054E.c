
  bool uu_uniq::should_extract_obs_skip_chars::haefcf42314616054(int64_t arg1, int64_t arg2, char arg3, char arg4)

{
    int32_t var_30 = 0;
    char* rax;
    uint64_t rdx;
    rax = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2b, &var_30);
    
    if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h164e9dfb27ee38d7(arg1, arg2, rax, 
        rdx))
    {
        char rax_2;
        int64_t rdx_2;
        rax_2 = uucore::mods::posix::posix_version::hbd100c054fc97897();
        
        if (!((~rax_2 | arg3 | rdx_2 >= 0x30a2a | arg4) & 1))
        {
            uint64_t rbx_1 = arg2 + arg1;
            var_30 = arg1;
            uint64_t var_28_1 = rbx_1;
            
            if (!_$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::advance_by::h79c51f2353e76d38(&var_30, 1))
            {
                bool rax_4;
                int32_t rdx_3;
                rax_4 = core::str::validations::next_code_point::h563de53b3cb3d652(&var_30, rbx_1);
                
                if (rax_4 & 1)
                    return rdx_3 - 0x30 < 0xa;
            }
        }
    }
    
    return false;
}
