
  int32_t* alacritty::migrate::migrate_imports::h8e2e1e348fec4079(int128_t* arg1, void* arg2, int64_t arg3, int64_t arg4, int32_t* arg5, int64_t arg6)

{
    int32_t* result = toml_edit::table::Table::get::h59a6b417f8465fa5(
        _$LT$toml_edit..document..DocumentMut$u20$as$u20$core..ops..deref..Deref$GT$::deref::h8d71f7078bbb8200(arg5), 
        "generalRegexSearchleft_fdfaleft_…", 7);
    
    if (result)
    {
        result = toml_edit::item::Item::get::he2e7ec39562f45c3(result);
        
        if (result && *result == 7 && *(result + 0x30))
        {
            if (!arg6)
                /* tailcall */
                return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h4cfefc754dbf8fee(arg1, "Exceeded maximum configuration i…", 0x2b);
            
            uint64_t rax_2 = _$LT$$RF$toml_edit..array..Array$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h6c2f59cc75dec506(&result[2]);
            char rax_3 = *(arg2 + 0x18);
            
            while (true)
            {
                int64_t rax_4;
                int64_t rdx;
                rax_4 = core::iter::traits::iterator::Iterator::try_fold::h03af57499146cca1(rax_2, 
                    &data_c8aba8);
                
                if (!rax_4)
                    break;
                
                void var_130;
                alacritty::config::normalize_import::h3c4d0292275a0832(&var_130, arg3, arg4, rax_4);
                int64_t var_128;
                char const (** const var_e0)[0x90];
                std::fs::metadata::h8f40e5ed4fcd8161(&var_e0, var_128);
                int32_t r15_1 = var_e0;
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h672bb05c96f66e9c(&var_e0);
                int128_t var_158;
                uint64_t var_120;
                int128_t var_108;
                int128_t var_d8;
                int64_t var_c8;
                
                if (r15_1 != 2)
                {
                    alacritty::migrate::migrate_config::heae155b6e6f7f60c(&var_e0, arg2, var_128, 
                        var_120, arg6 - 1);
                    
                    if (var_e0 == 1)
                    {
                        int64_t var_f8_1 = var_c8;
                        var_108 = var_d8;
                        arg1[1] = var_c8;
                        *arg1 = var_d8;
                        core::mem::drop::ha42964a555fb617b(&var_130);
                        return core::ptr::drop_in_place$LT$core..iter..adapters..filter_map..FilterMap$LT$alloc..boxed..Box$LT$dyn$u20$core..iter..traits..iterator..Iterator$u2b$Item$u20$$u3d$$u20$$RF$toml_edit..value..Value$GT$$C$alacritty..migrate..migrate_imports..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::hf0cce8b0e762af76(rax_2, &data_c8aba8);
                    }
                    
                    var_158 = var_d8;
                    int128_t var_148_1 = var_c8;
                    int64_t var_b8;
                    int64_t var_138_1 = var_b8;
                    
                    if (rax_3 & 1)
                    {
                        alacritty::migrate::Migration::success_message::h6e70dbedf75118d1(&var_108, 
                            &var_158, 1);
                        int128_t* var_118 = &var_108;
                        int64_t (* var_110_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                        var_e0 = &data_c82f40;
                        var_d8 = 2;
                        int64_t var_c0_2 = 0;
                        *var_d8[8] = &var_118;
                        var_c8 = 1;
                        std::io::stdio::_print::h5e446ff973c02de6(&var_e0);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(
                            &var_108);
                    }
                    
                    core::ptr::drop_in_place$LT$alacritty..migrate..Migration$GT$::h82cf96c51dcdbc49(&var_158);
                }
                else if (rax_3 & 1)
                {
                    var_108 = var_128;
                    *var_108[8] = var_120;
                    var_158 = &var_108;
                    *var_158[8] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
                    var_e0 = &data_c83520;
                    var_d8 = 2;
                    int64_t var_c0_1 = 0;
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
    return result;
}
