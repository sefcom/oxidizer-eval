
  int64_t backdoorautomater::sanitizer::sanitize_port::h389e8c38eed4b27b(int128_t* arg1, int128_t* arg2)

{
    void** const var_98;
    regex::regex::string::Regex::new::h6831ffd0596491b3(&var_98, 
        "[^0-9]+Error ! Given port cannot…");
    void* var_68;
    core::result::Result$LT$T$C$E$GT$::unwrap::h6578ed1ee3bd5b33(&var_68, &var_98);
    int64_t r12 = *(arg2 + 8);
    int64_t r13 = arg2[1];
    void* var_60;
    
    if (regex::regex::string::Regex::is_match_at::h541fe506ce15d7f3(var_68, var_60, r12, r13))
        var_98 = &data_62a538;
    else
    {
        char* rax_1;
        int64_t rdx_2;
        rax_1 = core::str::_$LT$impl$u20$str$GT$::trim_matches::heb9c2373ab7cadcf(r12, r13);
        int32_t rax_2 = core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$u16$GT$::from_str::heff271509baf40e5(rax_1, rdx_2);
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4aa1dd8ab670f689(&var_98, 
            "Error ! Given port is invalid ! …", 0x21);
        int64_t var_88;
        int64_t var_38_1 = var_88;
        int128_t var_48 = var_98;
        _$LT$alloc..string..String$u20$as$u20$core..ops..arith..Add$LT$$RF$str$GT$$GT$::add::h6b8d6456597bb7a1(&var_98, &var_48, r12, r13);
        int64_t var_90;
        int16_t rax_4 =
            core::result::Result$LT$T$C$E$GT$::expect::hf7fc92646f7b125b(rax_2, var_90, var_88);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_98);
        
        if (!rax_4)
            var_98 = &data_62a4e8;
        else
        {
            if (rax_4 != 0xffff)
            {
                arg1[1] = arg2[1];
                *arg1 = *arg2;
                return 
                    core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h5dc5ee83f4543ad0(
                    &var_68);
            }
            
            var_98 = &data_62a510;
        }
    }
    
    int64_t var_90_1 = 1;
    int64_t var_88_1 = 8;
    int128_t var_80 = {0};
    core::panicking::panic_fmt::he7d3af46f65769b3();
    /* no return */
}
