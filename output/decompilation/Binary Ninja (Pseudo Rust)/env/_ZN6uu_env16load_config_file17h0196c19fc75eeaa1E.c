
  fn uu_env::load_config_file::h0196c19fc75eeaa1(arg1: *mut c_void) -> *mut i128

{
    let rax: i64 = *arg1.byte_offset(8);
    let rcx_2: i64 = (*arg1.byte_offset(0x10) << 4) + rax;
    let mut var_298: i64 = rax;
    let var_290: i64 = rcx_2;
    
    for let mut i: *mut i64 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4336037a61c6f015(&var_298); i != 0; i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4336037a61c6f015(&var_298)
    {
        let r14_1: i64 = *i;
        let rbp_1: u64 = i[1];
        let mut var_228: *mut i32;
        let mut var_178: *mut c_void;
        let mut var_e0: *mut i32;
        
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h93758be011b95af6(r14_1, rbp_1, "-: uu_env0.0.28Set each NAME to …", 1) == 0
        {
            ini::Ini::load_from_file_opt::hd6c09423a76f6016(&var_e0, r14_1, rbp_1, 1, 1);
        }
        else
        {
            std::io::stdio::stdin::h7215cc131abb55d8();
            var_178 = &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5;
            let mut rax_2: *mut i32;
            let mut rdx_1: i8;
            rax_2 = std::io::stdio::Stdin::lock::h161a36d857331d7f(&var_178);
            var_228 = rax_2;
            ini::Ini::read_from_opt::h195aa31934f88d20(&var_e0, &var_228, 1, 1);
            core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::h1864f028de0891ba(var_228, 
                rdx_1 & 1);
        }
        
        let r14_2: *mut i32 = var_e0;
        let mut var_288: *mut *mut i32;
        let var_d8: *mut *mut i32;
        let var_d0: i64;
        let var_c8: i128;
        let var_b8: i64;
        
        if r14_2 == -0x8000000000000000
        {
            let var_268_2: i64 = var_b8;
            let var_278_2: i128 = var_c8;
            var_288 = var_d8;
            let var_280_2: i64 = var_d0;
            return uu_env::load_config_file::_$u7b$$u7b$closure$u7d$$u7d$::h3c9173ecfcad8e32(r14_1, 
                rbp_1, &var_288);
        }
        
        let mut var_168_1: i64 = var_b8;
        var_178 = var_c8;
        let var_40: i128;
        let var_f0_1: i128 = var_40;
        let var_50: i128;
        let var_100_1: i128 = var_50;
        let var_60: i128;
        let var_110_1: i128 = var_60;
        let var_70: i128;
        let var_120_1: i128 = var_70;
        let var_80: i128;
        let var_130_1: i128 = var_80;
        let var_90: i128;
        let var_140_1: i128 = var_90;
        let var_a0: i128;
        let var_150_1: i128 = var_a0;
        let var_b0: i128;
        let mut var_160_1: i128 = var_b0;
        let mut var_210: ();
        memcpy(&var_210, &var_178, 0x98);
        var_228 = r14_2;
        let mut var_220: i8;
        var_220 = var_d8;
        let var_218_1: i64 = var_d0;
        var_288 = &var_228;
        let mut var_1e8: ();
        let var_280_1: *mut c_void = &var_1e8;
        let var_1c8: i128;
        let var_278_1: i128 = var_1c8;
        let var_1b8: i64;
        let var_268_1: i64 = var_1b8;
        
        loop
        {
            let mut var_240: ();
            _$LT$ini..SectionIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8b11506b46190202(&var_240, &var_288);
            let var_230: *mut c_void;
            
            if var_230 == 0
            {
                break;
            }
            
            let rdx_4: i64 = *var_230.byte_offset(0x70);
            var_178 = var_230;
            let var_170_1: *mut c_void = var_230.byte_offset(0x40);
            var_168_1 = *var_230.byte_offset(0x60);
            *var_160_1[8] = rdx_4;
            
            loop
            {
                let mut var_260: i64;
                _$LT$ini..PropertyIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcf3320d67a61f47f(&var_260, &var_178);
                let rdi_11: i64 = var_260;
                
                if rdi_11 == 0
                {
                    break;
                }
                
                let var_258: i64;
                let var_250: i64;
                std::env::set_var::h7c2f382f05be9345(rdi_11, var_258, var_250);
            }
        }
        
        core::ptr::drop_in_place$LT$ini..Ini$GT$::h02eafa7b2766ffac(&var_228);
    }
    
    nullptr
}
