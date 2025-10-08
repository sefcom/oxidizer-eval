
  fn uu_env::load_config_file::he01b7851b1bda2a1(arg1: *mut c_void) -> u64

{
    let rax: i64 = *arg1.byte_offset(0x10);
    
    if rax != 0
    {
        let mut i: *mut i64 = *arg1.byte_offset(8);
        
        do
        {
            let rbp_1: i64 = *i;
            let r12_1: u64 = i[1];
            let mut var_240: *mut i32;
            let mut var_178: *mut c_void;
            let mut var_e0: *mut i32;
            
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h1e3c3d7f0695123e(rbp_1, r12_1, "-: uu_env(uutils coreutils) 0.0.…", 1) == 0
            {
                ini::Ini::load_from_file_opt::h4049ee98f0c71d18(&var_e0, rbp_1);
            }
            else
            {
                std::io::stdio::stdin::h9a05a2c3e7544b2a();
                var_178 = &std::io::stdio::stdin::INSTANCE::heccb3522b341563b;
                let mut rax_5: *mut i32;
                let mut rdx_1: i8;
                rax_5 = std::io::stdio::Stdin::lock::h8b2bf765bae79e2f(&var_178);
                var_240 = rax_5;
                ini::Ini::read_from_opt::hdafb0393949e35e7(&var_e0, &var_240);
                core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::h608b5571d6d78c42(
                    var_240, rdx_1 & 1);
            }
            
            let rbp_2: *mut i32 = var_e0;
            let mut var_288: *mut *mut i32;
            let var_d8: *mut *mut i32;
            let var_d0: i64;
            let var_c8: i128;
            let var_b8: i64;
            
            if -(rbp_2) == -0x8000000000000000
            {
                let var_268_2: i64 = var_b8;
                let var_278_2: i128 = var_c8;
                var_288 = var_d8;
                let var_280_2: i64 = var_d0;
                return uu_env::load_config_file::_$u7b$$u7b$closure$u7d$$u7d$::h995fee399d624ab1(
                    rbp_1, r12_1, &var_288);
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
            let mut var_228: ();
            memcpy(&var_228, &var_178, 0x98);
            var_240 = rbp_2;
            let mut var_238: i8;
            var_238 = var_d8;
            let var_230_1: i64 = var_d0;
            var_288 = &var_240;
            let mut var_200: ();
            let var_280_1: *mut c_void = &var_200;
            let var_1e0: i128;
            let var_278_1: i128 = var_1e0;
            let var_1d0: i64;
            let var_268_1: i64 = var_1d0;
            
            loop
            {
                let mut var_190: ();
                _$LT$ini..SectionIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha182df54595ace07(&var_190, &var_288);
                let var_180: *mut c_void;
                
                if var_180 == 0
                {
                    break;
                }
                
                let rdx_4: i64 = *var_180.byte_offset(0x70);
                var_178 = var_180;
                let var_170_1: *mut c_void = var_180.byte_offset(0x40);
                var_168_1 = *var_180.byte_offset(0x60);
                *var_160_1[8] = rdx_4;
                
                loop
                {
                    let mut var_260: i64;
                    _$LT$ini..PropertyIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h578d705864b3efa6(&var_260, &var_178);
                    let rdi_9: i64 = var_260;
                    
                    if rdi_9 == 0
                    {
                        break;
                    }
                    
                    let var_258: i64;
                    let var_250: i64;
                    std::env::set_var::h09da1a9546dab808(rdi_9, var_258, var_250);
                }
            }
            
            core::ptr::drop_in_place$LT$ini..Ini$GT$::h63a28054a6428a59(&var_240);
            i = &i[2];
        } while i != &i[rax * 2];
    }
    
    0
}
