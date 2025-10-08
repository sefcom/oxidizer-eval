
  fn alacritty::migrate::yaml::migrate::h7955a864104fb60d(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: i64, arg5: i64, arg6: i64, arg7: i64) -> i64

{
    let mut var_208: i64 = arg6;
    let var_200: i64 = arg7;
    let rbp: i8 = *arg2.byte_offset(0x18);
    let mut var_f8: i32;
    let rdx_1: u64 =
        alacritty::config::deserialize_config::h5c79ebe9ac2f1598(&var_f8, arg3, arg4, rbp ^ 1);
    let mut var_298: *mut i64;
    let mut var_238: *mut *mut c_void;
    let mut var_1f8: i128;
    let mut var_1d8: i128;
    let mut var_e8: i128;
    let mut var_d8: i128;
    
    if var_f8 != 7
    {
        let var_a8: i64;
        let var_1a8_1: i64 = var_a8;
        let var_b8: i128;
        let var_1b8_1: i128 = var_b8;
        let zmm0: i128 = var_f8;
        let var_c8: i128;
        let var_1c8_1: i128 = var_c8;
        var_1d8 = var_d8;
        let var_1e8_1: i128 = var_e8;
        var_1f8 = zmm0;
        var_298 = &var_1f8;
        let var_290_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
            _$LT$alacritty..config..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h8f6deb2eaa2aacd3;
        var_238 = &data_c83280;
        let var_230_1: i64 = 1;
        let var_218_1: i64 = 0;
        let var_228_1: *mut *mut i64 = &var_298;
        let var_220_1: i64 = 1;
        let mut var_110: i128;
        core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_110, 0, rdx_1, &var_238);
        let var_100: i64;
        arg1[3] = var_100;
        *arg1.byte_offset(8) = var_110;
        *arg1 = 1;
        return core::ptr::drop_in_place$LT$alacritty..config..Error$GT$::hc0565752af3cd056(
            &var_1f8);
    }
    
    let mut var_228: i64;
    var_228 = var_e8;
    let var_f0: i128;
    var_238 = var_f0;
    
    if *arg2.byte_offset(0x19) == 0
    {
        alacritty::migrate::yaml::migrate_imports::he16b1e9186b09947(&var_1f8, arg2, &var_238, 
            arg3, arg4, arg5);
    }
    
    let mut var_1e8: i128;
    
    if *arg2.byte_offset(0x19) == 0 && !(0 + -(var_1f8))
    {
        arg1[3] = var_1e8;
        *arg1.byte_offset(8) = var_1f8;
        *arg1 = 1;
    }
    else
    {
        let rdx_3: u64 = toml::ser::to_string::hd0ad620e8ee3c864(&var_1f8, &var_238);
        let mut var_278: i128;
        
        if var_1f8 != 1
        {
            let mut var_258: i128 = var_1f8;
            let var_248_1: i64 = *var_1e8[8];
            var_298 = &var_208;
            let var_290_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hde322f69d68256c4;
            var_1f8 = &data_c83290;
            *var_1f8[8] = 2;
            var_1d8 = 0;
            var_1e8 = &var_298;
            *var_1e8[8] = 1;
            core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_f8, 0, rdx_3, 
                &var_1f8);
            var_278 = var_f8;
            let rax_5: i64 = var_e8;
            alacritty::migrate::migrate_toml::h20014181f4101fc3(&var_1f8, &var_258);
            let r15_1: i64 = var_1f8;
            var_298 = var_1f8;
            let rax_6: i64 = *var_1e8[8];
            let mut rdi_8: *mut i128;
            
            if r15_1 != 0xc
            {
                memcpy(&var_d8, &var_1d8, 0xa8);
                let var_f0_1: i128 = var_298;
                *var_e8[8] = rax_6;
                var_f8 = r15_1;
                let mut var_128: i128;
                _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hfd01effef2c7df3f(&var_128, &var_f8);
                let var_118: i64;
                let var_248_2: i64 = var_118;
                var_258 = var_128;
                core::ptr::drop_in_place$LT$toml_edit..document..DocumentMut$GT$::h9bb944d092de2eb6(
                    &var_f8);
                alacritty::migrate::write_results::h27f18712553304e3(&var_1f8, rbp, 
                    *arg2.byte_offset(0x1b), &var_278, *var_258[8]);
                let rax_11: i64 = var_1f8;
                
                if -(rax_11) != -0x8000000000000000
                {
                    *arg1.byte_offset(0x10) = var_1f8;
                    arg1[1] = rax_11;
                    *arg1 = 1;
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(
                        &var_278);
                }
                else
                {
                    arg1[3] = rax_5;
                    *arg1.byte_offset(8) = var_278;
                    *arg1 = 0;
                }
                
                rdi_8 = &var_258;
            }
            else
            {
                arg1[3] = rax_6;
                *arg1.byte_offset(8) = var_298;
                *arg1 = 1;
                rdi_8 = &var_278;
            }
            
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(rdi_8);
        }
        else
        {
            var_e8 = *var_1e8[8];
            var_f8 = var_1f8;
            alacritty::migrate::yaml::migrate::_$u7b$$u7b$closure$u7d$$u7d$::hc6ee86b888e3d3cb(
                &var_298, &var_f8, rdx_3);
            let zmm0_1: i128 = var_298;
            var_278 = zmm0_1;
            let var_288: i64;
            let var_268_1: i64 = var_288;
            arg1[3] = var_288;
            *arg1.byte_offset(8) = zmm0_1;
            *arg1 = 1;
        }
    }
    core::ptr::drop_in_place$LT$toml..value..Value$GT$::h7761fefc14a7cec1(&var_238)
}
