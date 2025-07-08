
  void* const uu_env::parse_signal_opt::h51ec0e44148ee3e7(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    int64_t* rbx;
    int64_t* var_30 = rbx;
    
    if (arg3)
    {
        int64_t var_80 = arg2;
        int64_t var_78_1 = arg3;
        char var_70_1 = 0;
        void var_98;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hdbc1dc456658658e(&var_98, &var_80);
        void* const result_1;
        int64_t var_88;
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h38052905bffb397a(&result_1, var_88, 
            0);
        int64_t* var_110;
        
        if (result_1)
        {
            alloc::raw_vec::handle_error::h2372476369f9b8ac(var_110);
            /* no return */
        }
        
        int64_t* var_e0 = var_110;
        size_t var_108;
        size_t var_d8_1 = var_108;
        int64_t var_d0_1 = 0;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h19448f981cde5e53(&result_1, &var_98);
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h3d344e0b0e9083cd(&result_1, &var_e0);
        void var_68;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h19448f981cde5e53(&var_68, &var_e0);
        char* i_3;
        int64_t rdx;
        i_3 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8b5092016aec3a93(&var_68);
        
        if (i_3)
        {
            char* i_1 = i_3;
            int64_t r14_1 = rdx;
            char* i;
            
            do
            {
                std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&result_1, i_1, r14_1);
                int64_t* var_c8;
                void* const result;
                
                if (result_1)
                {
                    var_c8 = 1;
                    char* i_2 = i_1;
                    int64_t var_b8_1 = r14_1;
                    char var_b0_1 = 1;
                    void** var_a8 = &var_c8;
                    int64_t (* var_a0_1)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    result_1 = &data_5488b0;
                    int64_t var_110_1 = 2;
                    int64_t var_f8_1 = 0;
                    void*** var_108_1 = &var_a8;
                    int64_t var_100_1 = 1;
                    int128_t var_48;
                    core::option::Option$LT$T$GT$::map_or_else::ha7b9eb55e1cbc84d(&var_48, 
                        &result_1);
                    var_100_1 = 1;
                    result_1 = var_48;
                    int64_t var_38;
                    int64_t var_108_2 = var_38;
                    result = alloc::boxed::Box$LT$T$GT$::new::h48315bbd00cc7109(&result_1);
                    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::h97b2a0834aefedf7(&var_68);
                    return result;
                }
                
                uu_env::parse_signal_value::hd39e24cc594f23d4(&result_1, var_110, var_108);
                result = result_1;
                
                if (result)
                {
                    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::h97b2a0834aefedf7(&var_68);
                    return result;
                }
                
                var_c8 = var_110;
                
                if (!_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h4b9b47ba52f5f211(&var_c8, arg1[0xd], arg1[0xe]))
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h7268e86c4e26498f(&arg1[0xc], var_110);
                
                int64_t rdx_1;
                i = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8b5092016aec3a93(&var_68);
                i_1 = i;
                r14_1 = rdx_1;
            } while (i);
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::h97b2a0834aefedf7(&var_68);
    }
    
    return nullptr;
}
