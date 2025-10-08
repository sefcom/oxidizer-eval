
  fn alacritty::migrate::migrate_imports::h8e2e1e348fec4079(arg1: *mut i128, arg2: *mut c_void, arg3: i64, arg4: i64, arg5: *mut i32, arg6: i64) -> *mut i32

{
    let mut result: *mut i32 = toml_edit::table::Table::get::h59a6b417f8465fa5(
        _$LT$toml_edit..document..DocumentMut$u20$as$u20$core..ops..deref..Deref$GT$::deref::h8d71f7078bbb8200(arg5), 
        "generalRegexSearchleft_fdfaleft_…", 7);
    
    if result != 0
    {
        result = toml_edit::item::Item::get::he2e7ec39562f45c3(result);
        
        if result != 0 && *result == 7 && *result.byte_offset(0x30) != 0
        {
            if arg6 == 0
            {
                /* tailcall */
                return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h4cfefc754dbf8fee(arg1, "Exceeded maximum configuration i…", 0x2b);
            }
            
            let rax_2: u64 = _$LT$$RF$toml_edit..array..Array$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h6c2f59cc75dec506(&result[2]);
            let rax_3: i8 = *arg2.byte_offset(0x18);
            
            loop
            {
                let mut rax_4: i64;
                let mut rdx: i64;
                rax_4 = core::iter::traits::iterator::Iterator::try_fold::h03af57499146cca1(rax_2, 
                    &data_c8aba8);
                
                if rax_4 == 0
                {
                    break;
                }
                
                let mut var_130: ();
                alacritty::config::normalize_import::h3c4d0292275a0832(&var_130, arg3, arg4, rax_4);
                let var_128: i64;
                let mut var_e0: *mut *mut [i8; 0x90];
                std::fs::metadata::h8f40e5ed4fcd8161(&var_e0, var_128);
                let r15_1: i32 = var_e0;
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h672bb05c96f66e9c(&var_e0);
                let mut var_158: i128;
                let var_120: u64;
                let mut var_108: i128;
                let mut var_d8: i128;
                let mut var_c8: i64;
                
                if r15_1 != 2
                {
                    alacritty::migrate::migrate_config::heae155b6e6f7f60c(&var_e0, arg2, var_128, 
                        var_120, arg6 - 1);
                    
                    if var_e0 == 1
                    {
                        let var_f8_1: i64 = var_c8;
                        var_108 = var_d8;
                        arg1[1] = var_c8;
                        *arg1 = var_d8;
                        core::mem::drop::ha42964a555fb617b(&var_130);
                        return core::ptr::drop_in_place$LT$core..iter..adapters..filter_map..FilterMap$LT$alloc..boxed..Box$LT$dyn$u20$core..iter..traits..iterator..Iterator$u2b$Item$u20$$u3d$$u20$$RF$toml_edit..value..Value$GT$$C$alacritty..migrate..migrate_imports..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::hf0cce8b0e762af76(rax_2, &data_c8aba8);
                    }
                    
                    var_158 = var_d8;
                    let var_148_1: i128 = var_c8;
                    let var_b8: i64;
                    let var_138_1: i64 = var_b8;
                    
                    if (rax_3 & 1) != 0
                    {
                        alacritty::migrate::Migration::success_message::h6e70dbedf75118d1(&var_108, 
                            &var_158, 1);
                        let mut var_118: *mut i128 = &var_108;
                        let var_110_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                        var_e0 = &data_c82f40;
                        var_d8 = 2;
                        let var_c0_2: i64 = 0;
                        *var_d8[8] = &var_118;
                        var_c8 = 1;
                        std::io::stdio::_print::h5e446ff973c02de6(&var_e0);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(
                            &var_108);
                    }
                    
                    core::ptr::drop_in_place$LT$alacritty..migrate..Migration$GT$::h82cf96c51dcdbc49(&var_158);
                }
                else if (rax_3 & 1) != 0
                {
                    var_108 = var_128;
                    *var_108[8] = var_120;
                    var_158 = &var_108;
                    *var_158[8] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
                    var_e0 = &data_c83520;
                    var_d8 = 2;
                    let var_c0_1: i64 = 0;
                    *var_d8[8] = &var_158;
                    var_c8 = 1;
                    std::io::stdio::_print::h5e446ff973c02de6(&var_e0);
                }
                core::mem::drop::ha42964a555fb617b(&var_130);
            }
            
            result = core::ptr::drop_in_place$LT$core..iter..adapters..filter_map..FilterMap$LT$alloc..boxed..Box$LT$dyn$u20$core..iter..traits..iterator..Iterator$u2b$Item$u20$$u3d$$u20$$RF$toml_edit..value..Value$GT$$C$alacritty..migrate..migrate_imports..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::hf0cce8b0e762af76(rax_2, &data_c8aba8);
        }
    }
    
    *arg1 = -0x8000000000000000;
    result
}
