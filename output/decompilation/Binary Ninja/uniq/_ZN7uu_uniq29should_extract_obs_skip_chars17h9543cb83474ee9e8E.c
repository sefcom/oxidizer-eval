
  int64_t uu_uniq::should_extract_obs_skip_chars::h9543cb83474ee9e8(int64_t arg1, int64_t arg2, char arg3, char arg4)

{
    int32_t var_30 = 0;
    int64_t rax;
    uint64_t rdx;
    rax = core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x2b, &var_30);
    
    if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::haa80fb3b22d1f855(arg1, arg2, 
            rax, rdx))
        return 0;
    
    int64_t rax_2;
    int64_t rdx_2;
    rax_2 = uucore::mods::posix::posix_version::hc5e57a413e94e657();
    
    if (!rax_2 || rdx_2 > 0x30a29 || arg3 || arg4)
        return 0;
    
    uint64_t rbx_1 = arg2 + arg1;
    var_30 = arg1;
    uint64_t var_28_1 = rbx_1;
    int32_t rdi_2 = 0x110000;
    
    if (!_$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::advance_by::h7ba654970d2c1b3e(&var_30))
    {
        int32_t rax_5;
        int32_t rdx_3;
        rax_5 = core::str::validations::next_code_point::h660536d7d7533ae5(&var_30, rbx_1);
        rdi_2 = 0x110000;
        
        if (rax_5)
            rdi_2 = rdx_3;
    }
    
    return core::option::Option$LT$T$GT$::map_or::h5ed9b95e0ff28c57(rdi_2);
}
