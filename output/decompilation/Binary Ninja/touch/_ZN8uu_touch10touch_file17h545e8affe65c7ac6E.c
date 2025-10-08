
  uint64_t uu_touch::touch_file::h545e8affe65c7ac6(int64_t arg1, uint64_t arg2, int32_t arg3, int64_t* arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8)

{
    uint64_t rbx = arg3;
    void var_118;
    int64_t var_e0;
    uint64_t var_d8;
    char r13;
    
    if (!arg3)
    {
        var_e0 = arg1;
        var_d8 = arg2;
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hc12c33350263b863(
            &var_118, &var_e0);
        r13 = *(arg4 + 0x31);
        
        if (!r13)
            std::fs::metadata::hb661f9d8212cddd7(&var_e0, arg1);
        else
            std::fs::symlink_metadata::h73fb12f4b49f31d3(&var_e0, arg1);
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h443e6c10e45cdc42(&var_118, "-setting times of : No such file…", 1);
        r13 = *(arg4 + 0x31);
        
        if (r13)
            std::fs::symlink_metadata::h73fb12f4b49f31d3(&var_e0, arg1);
        else
            std::fs::metadata::hb661f9d8212cddd7(&var_e0, arg1);
    }
    
    if (var_e0 != 2)
        goto label_53a270;
    
    uint64_t result;
    
    if (std::io::error::Error::kind::h135fe00c4e7365f3(var_d8))
        result = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h68349bb2678f12e3();
    else if (arg4[6])
    {
        result = 0;
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h082d50199f5b7db7(var_d8);
    }
    else
    {
        int32_t var_1a8;
        void** const var_198;
        int64_t** var_160;
        int64_t* var_128;
        
        if (!r13)
        {
            std::fs::File::create::hd43d6cc5f8658b35(&var_1a8, arg1);
            int32_t rax_5 = var_1a8;
            
            if (rax_5 != 1)
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..File$C$std..io..error..Error$GT$$GT$::h8e368889d6e3af53(&var_1a8);
                
                if (!_$LT$uu_touch..Source$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5fb9aae744f6919a(arg4[3]) || -(*arg4) != -0x8000000000000000)
                {
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h082d50199f5b7db7(
                        var_d8);
                    label_53a270:
                    uint64_t var_1b8_1 = arg8;
                    uint64_t result_2;
                    int64_t* rdx_8;
                    result_2 = uu_touch::update_times::h1071b1d93aae9977(arg1, arg2, rbx, r13, 
                        *(arg4 + 0x33), arg5, arg6, arg7);
                    result = result_2;
                }
                else
                {
                    result = 0;
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h082d50199f5b7db7(
                        var_d8);
                }
            }
            else
            {
                int32_t var_138 = rax_5;
                alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_198, arg1, arg2);
                int64_t** var_190;
                var_160 = var_190;
                void* var_188;
                int128_t var_158;
                var_158 = var_188 + var_190;
                char rax_7;
                int32_t rdx_5;
                rax_7 = core::str::validations::next_code_point_reverse::hdcaf59bd311a5e74(
                    &var_160, rbx);
                uint64_t rbp;
                rbp = rdx_5 != 0x110000;
                rbp &= rax_7;
                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h07fb0c98f54110e9(
                    &var_198);
                
                if (rbp != 1 || rdx_5 != 0x2f)
                {
                    result = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h4cebff401ee48b9e();
                    
                    if (!*(arg4 + 0x32))
                    {
                        uint64_t result_1 = result;
                        uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                        int64_t* rax_20;
                        int64_t rdx_12;
                        rax_20 = uucore::util_name::h074417a1e6395129();
                        var_128 = rax_20;
                        int64_t var_120_3 = rdx_12;
                        var_160 = &var_128;
                        var_158 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h18af96482be5ae0f;
                        *var_158[8] = &result_1;
                        char var_148;
                        var_148 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hb8dab0358c2b5eef;
                        var_198 = &data_679d48;
                        int64_t var_190_3 = 3;
                        int64_t var_178_3 = 0;
                        int64_t* var_188_5 = &var_160;
                        int64_t var_180_3 = 2;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_198);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::he5ad635d7f3c6690(result_1);
                        result = 0;
                    }
                }
                else
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h443e6c10e45cdc42(&var_160, "No such file or directorycannot …", 0x19);
                    int64_t var_188_3 = *var_158[8];
                    var_198 = var_160;
                    std::io::error::Error::_new::hbf6e5d7f23cac6f9(0x28, 
                        alloc::boxed::Box$LT$T$GT$::new::hbf084ac93ba6f116(&var_198), &data_679d98);
                    result = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::ha0ee1aa1888405cd();
                    int64_t var_1a0;
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h082d50199f5b7db7(
                        var_1a0);
                }
                
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h082d50199f5b7db7(var_d8);
            }
        }
        else
        {
            var_160 = nullptr;
            int64_t var_110;
            int128_t var_158_1 = var_110;
            char var_148_1 = 1;
            var_128 = &var_160;
            int64_t (* var_120_1)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_198 = &data_679d28;
            int64_t var_190_1 = 2;
            int64_t var_178_1 = 0;
            int64_t** var_188_1 = &var_128;
            int64_t var_180_1 = 1;
            int128_t var_f8;
            core::option::Option$LT$T$GT$::map_or_else::h42b45f6f6f73b099(&var_f8, &var_198);
            var_180_1 = 1;
            var_198 = var_f8;
            int64_t var_e8;
            int64_t var_188_2 = var_e8;
            result = alloc::boxed::Box$LT$T$GT$::new::hd8fce8cb627455b5(&var_198);
            
            if (!*(arg4 + 0x32))
            {
                var_1a8 = result;
                void** const var_1a0_1 = &data_679e10;
                uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::ha04d37fdd51c3108(result));
                int64_t* rax_18;
                int64_t rdx_10;
                rax_18 = uucore::util_name::h074417a1e6395129();
                var_128 = rax_18;
                int64_t var_120_2 = rdx_10;
                var_160 = &var_128;
                var_158_1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h18af96482be5ae0f;
                *var_158_1[8] = &var_1a8;
                var_148_1 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hebd9cee9c3e78f58;
                var_198 = &data_679d48;
                int64_t var_190_2 = 3;
                int64_t var_178_2 = 0;
                int64_t* var_188_4 = &var_160;
                int64_t var_180_2 = 2;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_198);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hfd5022d5ded5c4d2(var_1a8, var_1a0_1);
                result = 0;
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h082d50199f5b7db7(var_d8);
            }
            else
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h082d50199f5b7db7(var_d8);
        }
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hc61d8ef8308f20d8(&var_118);
    return result;
}
