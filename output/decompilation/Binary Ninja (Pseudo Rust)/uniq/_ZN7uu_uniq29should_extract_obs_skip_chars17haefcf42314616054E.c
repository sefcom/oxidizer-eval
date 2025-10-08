
  fn uu_uniq::should_extract_obs_skip_chars::haefcf42314616054(arg1: i64, arg2: i64, arg3: i8, arg4: i8) -> bool

{
    let mut var_30: i32 = 0;
    let mut rax: *mut i8;
    let mut rdx: u64;
    rax = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2b, &var_30);
    
    if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h164e9dfb27ee38d7(arg1, arg2, rax, 
        rdx) != 0
    {
        let mut rax_2: i8;
        let mut rdx_2: i64;
        rax_2 = uucore::mods::posix::posix_version::hbd100c054fc97897();
        
        if ((!rax_2 | arg3 | rdx_2 >= 0x30a2a | arg4) & 1) == 0
        {
            let rbx_1: u64 = arg2 + arg1;
            var_30 = arg1;
            let var_28_1: u64 = rbx_1;
            
            if _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::advance_by::h79c51f2353e76d38(&var_30, 1) == 0
            {
                let mut rax_4: bool;
                let mut rdx_3: i32;
                rax_4 = core::str::validations::next_code_point::h563de53b3cb3d652(&var_30, rbx_1);
                
                if (rax_4 & 1) != 0
                {
                    return rdx_3 - 0x30 < 0xa;
                }
            }
        }
    }
    
    false
}
