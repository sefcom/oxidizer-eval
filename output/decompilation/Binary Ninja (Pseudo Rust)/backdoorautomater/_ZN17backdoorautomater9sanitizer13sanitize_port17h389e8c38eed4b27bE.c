
  fn backdoorautomater::sanitizer::sanitize_port::h389e8c38eed4b27b(arg1: *mut i128, arg2: *mut i128) -> i64

{
    let mut var_98: *mut *mut c_void;
    regex::regex::string::Regex::new::h6831ffd0596491b3(&var_98, 
        "[^0-9]+Error ! Given port cannot…");
    let mut var_68: *mut c_void;
    core::result::Result$LT$T$C$E$GT$::unwrap::h6578ed1ee3bd5b33(&var_68, &var_98);
    let r12: i64 = *arg2.byte_offset(8);
    let r13: i64 = arg2[1];
    let var_60: *mut c_void;
    
    if regex::regex::string::Regex::is_match_at::h541fe506ce15d7f3(var_68, var_60, r12, r13) != 0
    {
        var_98 = &data_62a538;
    }
    else
    {
        let mut rax_1: *mut i8;
        let mut rdx_2: i64;
        rax_1 = core::str::_$LT$impl$u20$str$GT$::trim_matches::heb9c2373ab7cadcf(r12, r13);
        let rax_2: i32 = core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$u16$GT$::from_str::heff271509baf40e5(rax_1, rdx_2);
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4aa1dd8ab670f689(&var_98, 
            "Error ! Given port is invalid ! …", 0x21);
        let var_88: i64;
        let var_38_1: i64 = var_88;
        let mut var_48: i128 = var_98;
        _$LT$alloc..string..String$u20$as$u20$core..ops..arith..Add$LT$$RF$str$GT$$GT$::add::h6b8d6456597bb7a1(&var_98, &var_48, r12, r13);
        let var_90: i64;
        let rax_4: i16 =
            core::result::Result$LT$T$C$E$GT$::expect::hf7fc92646f7b125b(rax_2, var_90, var_88);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_98);
        
        if rax_4 == 0
        {
            var_98 = &data_62a4e8;
        }
        else
        {
            if rax_4 != 0xffff
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
    
    let var_90_1: i64 = 1;
    let var_88_1: i64 = 8;
    let var_80: i128 = {0};
    core::panicking::panic_fmt::he7d3af46f65769b3();
    /* no return */
}
