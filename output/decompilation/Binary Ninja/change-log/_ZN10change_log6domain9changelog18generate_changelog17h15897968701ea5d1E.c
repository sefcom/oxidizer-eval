
  int128_t* change_log::domain::changelog::generate_changelog::h15897968701ea5d1(int128_t* arg1, int64_t* arg2)

{
    int64_t rbp;
    int64_t var_8 = rbp;
    int64_t var_168 = 0;
    int64_t var_160 = 1;
    int64_t var_158 = 0;
    int64_t rax;
    int64_t rdx;
    rax = std::thread::local::LocalKey$LT$T$GT$::with::heeb658250516b418();
    int128_t var_98 = data_aa5b58;
    int128_t var_a8 = *data_aa5b48;
    int64_t var_88 = rax;
    int64_t var_80 = rdx;
    int64_t rax_1;
    int64_t rdx_1;
    rax_1 = std::thread::local::LocalKey$LT$T$GT$::with::heeb658250516b418();
    int128_t var_c8 = data_aa5b58;
    int128_t var_d8 = *data_aa5b48;
    int64_t var_b8 = rax_1;
    int64_t var_b0 = rdx_1;
    int64_t var_f0 = 0;
    int64_t var_e8 = 8;
    int64_t var_e0 = 0;
    int128_t var_1c8;
    _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::hfe44976d49bd0547(&var_1c8);
    int128_t var_78 = var_1c8;
    int64_t rax_2 = arg2[2];
    int128_t var_1b8;
    int128_t var_138;
    int128_t var_128;
    
    if (rax_2)
    {
        void* r12_1 = arg2[1];
        int64_t i = 0;
        
        do
        {
            if (*(r12_1 + i + 0x58))
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_1c8, r12_1 + i + 0x48);
                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hf09db0658b520e22(&var_78, 
                    &var_1c8);
            }
            
            char* rax_3;
            int64_t rdx_2;
            rax_3 = change_log::domain::changelog::category_from_pr_type::h091454f49f5cc1c5(
                *(r12_1 + i + 8), *(r12_1 + i + 0x10));
            
            if (rax_3)
            {
                if (!*(r12_1 + i + 0x60))
                {
                    hashbrown::rustc_entry::_$LT$impl$u20$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$GT$::rustc_entry::h0d631eb2439e9909(&var_1c8, &var_a8, rax_3, rdx_2);
                    
                    if (!var_1c8)
                    {
                        var_138 = var_1c8;
                        var_138 = 0;
                    }
                    else
                    {
                        int128_t zmm0_4 = var_1c8;
                        var_128 = var_1b8;
                        var_138 = zmm0_4;
                    }
                    
                    void* rax_5 = std::collections::hash::map::Entry$LT$K$C$V$GT$::or_default::h37f8d28162c96b61(&var_138);
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_1c8, r12_1 + i + 0x18);
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hab16c5672367a118(rax_5, &var_1c8);
                }
                else
                {
                    hashbrown::rustc_entry::_$LT$impl$u20$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$GT$::rustc_entry::h0d631eb2439e9909(&var_1c8, &var_d8, rax_3, rdx_2);
                    
                    if (!var_1c8)
                    {
                        var_138 = var_1c8;
                        var_138 = 0;
                    }
                    else
                    {
                        int128_t zmm0_3 = var_1c8;
                        var_128 = var_1b8;
                        var_138 = zmm0_3;
                    }
                    
                    void* rax_4 = std::collections::hash::map::Entry$LT$K$C$V$GT$::or_default::h37f8d28162c96b61(&var_138);
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_1c8, r12_1 + i + 0x18);
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hab16c5672367a118(rax_4, &var_1c8);
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_1c8, r12_1 + i + 0x30);
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hab16c5672367a118(&var_f0, &var_1c8);
                }
            }
            
            i += 0x68;
        } while (rax_2 * 0x68 != i);
    }
    
    int128_t var_200;
    int64_t var_1f0;
    int128_t var_1e8;
    int128_t var_1a8;
    int128_t** i_1;
    int128_t* var_148;
    int128_t var_118;
    
    if (!*var_1b8[8])
        rbp = 1;
    else
    {
        rbp = 1;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h9f76318f46fbb90d(&var_168, "# Summary\n\nIn this release, we…", &data_4c54b0[0x40]);
        int128_t zmm0_5 = var_78;
        var_118 = var_1a8;
        var_128 = var_1b8;
        var_138 = zmm0_5;
        _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h991e3d21f5644337(&var_1c8, &var_138);
        void var_48;
        core::iter::traits::iterator::Iterator::collect::h0de00b5364e9b9c9(&var_48, &var_1c8);
        void* var_40;
        int64_t var_38;
        alloc::slice::stable_sort::h83943790025e9447(var_40, var_38);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h8df512d2ded3f811(&var_138, &var_48);
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0220764a290286f5(&i_1, &var_138);
        
        if (!(0 + -(i_1)))
        {
            do
            {
                int64_t var_178;
                int64_t var_1d8_1 = var_178;
                var_1e8 = i_1;
                var_148 = &var_1e8;
                int64_t (* var_140_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_1c8 = &data_aa5b80;
                *var_1c8[8] = 2;
                var_1a8 = 0;
                var_1b8 = &var_148;
                *var_1b8[8] = 1;
                core::option::Option$LT$T$GT$::map_or_else::h8667f145713f23f9(&var_200, &var_1c8);
                var_1c8 = var_200;
                var_1b8 = var_1f0;
                int64_t rsi_21 = *var_1c8[8];
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h9f76318f46fbb90d(&var_168, rsi_21, var_1f0 + rsi_21);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h97ccf84ef02c8f94(&var_1c8);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h97ccf84ef02c8f94(&var_1e8);
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0220764a290286f5(&i_1, &var_138);
            } while (i_1 != -0x8000000000000000);
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::hf692e010f2269745(&var_138);
        alloc::string::String::push::h0ede46164189e411(&var_168, 0xa);
        rbp = 0;
    }
    
    var_138 = "FeaturesS";
    *var_138[8] = 8;
    var_128 = "Fixes\n# Breaking\n\n- \n\nMigra…";
    *var_128[8] = 5;
    var_118 = "ChoresFixes\n# Breaking\n\n- \n\n…";
    *var_118[8] = 6;
    
    if (*var_c8[8])
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h9f76318f46fbb90d(&var_168, "# Breaking\n\n- \n\nMigration No…", "- \n\nMigration Notesscripts/cha…");
        int128_t* var_150 = &var_138;
        void* rax_7 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h54a470f9e611ad5c(
            &var_d8, &var_138);
        
        if (rax_7)
        {
            i_1 = &var_150;
            int64_t (* var_180_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6dc4ff969fc020b;
            var_1c8 = &data_aa5ba0;
            *var_1c8[8] = 2;
            var_1a8 = 0;
            var_1b8 = &i_1;
            *var_1b8[8] = 1;
            core::option::Option$LT$T$GT$::map_or_else::h8667f145713f23f9(&var_200, &var_1c8);
            var_1e8 = var_200;
            int64_t var_1d8_2 = var_1f0;
            int64_t rsi_25 = *var_1e8[8];
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h9f76318f46fbb90d(&var_168, rsi_25, var_1f0 + rsi_25);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h97ccf84ef02c8f94(&var_1e8);
            core::iter::traits::iterator::Iterator::collect::hbd6d1aa0d4b5008c(&var_200, 
                *(rax_7 + 0x18));
            alloc::str::join_generic_copy::h7dd5fc911c59ac5b(&var_1c8, *var_200[8], var_1f0, 
                "\n# Breaking\n\n- \n\nMigration …", 1);
            int64_t var_178_1 = var_1b8;
            i_1 = var_1c8;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h7a6bd4f0094bad36(&var_200);
            var_148 = &i_1;
            int64_t (* var_140_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_1c8 = &data_aa5bc0;
            *var_1c8[8] = 2;
            var_1a8 = 0;
            var_1b8 = &var_148;
            *var_1b8[8] = 1;
            core::option::Option$LT$T$GT$::map_or_else::h8667f145713f23f9(&var_200, &var_1c8);
            var_1e8 = var_200;
            int64_t var_1d8_3 = var_1f0;
            int64_t rsi_29 = *var_1e8[8];
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h9f76318f46fbb90d(&var_168, rsi_29, var_1f0 + rsi_29);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h97ccf84ef02c8f94(&var_1e8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h97ccf84ef02c8f94(&i_1);
        }
        
        var_150 = &var_128;
        void* rax_11 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h54a470f9e611ad5c(
            &var_d8, &var_128);
        
        if (rax_11)
        {
            i_1 = &var_150;
            int64_t (* var_180_2)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6dc4ff969fc020b;
            var_1c8 = &data_aa5ba0;
            *var_1c8[8] = 2;
            var_1a8 = 0;
            var_1b8 = &i_1;
            *var_1b8[8] = 1;
            core::option::Option$LT$T$GT$::map_or_else::h8667f145713f23f9(&var_200, &var_1c8);
            var_1e8 = var_200;
            int64_t var_1d8_4 = var_1f0;
            int64_t rsi_32 = *var_1e8[8];
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h9f76318f46fbb90d(&var_168, rsi_32, var_1f0 + rsi_32);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h97ccf84ef02c8f94(&var_1e8);
            core::iter::traits::iterator::Iterator::collect::hbd6d1aa0d4b5008c(&var_200, 
                *(rax_11 + 0x18));
            alloc::str::join_generic_copy::h7dd5fc911c59ac5b(&var_1c8, *var_200[8], var_1f0, 
                "\n# Breaking\n\n- \n\nMigration …", 1);
            int64_t var_178_2 = var_1b8;
            i_1 = var_1c8;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h7a6bd4f0094bad36(&var_200);
            var_148 = &i_1;
            int64_t (* var_140_3)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_1c8 = &data_aa5bc0;
            *var_1c8[8] = 2;
            var_1a8 = 0;
            var_1b8 = &var_148;
            *var_1b8[8] = 1;
            core::option::Option$LT$T$GT$::map_or_else::h8667f145713f23f9(&var_200, &var_1c8);
            var_1e8 = var_200;
            int64_t var_1d8_5 = var_1f0;
            int64_t rsi_36 = *var_1e8[8];
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h9f76318f46fbb90d(&var_168, rsi_36, var_1f0 + rsi_36);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h97ccf84ef02c8f94(&var_1e8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h97ccf84ef02c8f94(&i_1);
        }
        
        var_150 = &var_118;
        void* rax_15 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h54a470f9e611ad5c(
            &var_d8, &var_118);
        
        if (rax_15)
        {
            i_1 = &var_150;
            int64_t (* var_180_3)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6dc4ff969fc020b;
            var_1c8 = &data_aa5ba0;
            *var_1c8[8] = 2;
            var_1a8 = 0;
            var_1b8 = &i_1;
            *var_1b8[8] = 1;
            core::option::Option$LT$T$GT$::map_or_else::h8667f145713f23f9(&var_200, &var_1c8);
            var_1e8 = var_200;
            int64_t var_1d8_6 = var_1f0;
            int64_t rsi_39 = *var_1e8[8];
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h9f76318f46fbb90d(&var_168, rsi_39, var_1f0 + rsi_39);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h97ccf84ef02c8f94(&var_1e8);
            core::iter::traits::iterator::Iterator::collect::hbd6d1aa0d4b5008c(&var_200, 
                *(rax_15 + 0x18));
            alloc::str::join_generic_copy::h7dd5fc911c59ac5b(&var_1c8, *var_200[8], var_1f0, 
                "\n# Breaking\n\n- \n\nMigration …", 1);
            int64_t var_178_3 = var_1b8;
            i_1 = var_1c8;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h7a6bd4f0094bad36(&var_200);
            var_148 = &i_1;
            int64_t (* var_140_4)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_1c8 = &data_aa5bc0;
            *var_1c8[8] = 2;
            var_1a8 = 0;
            var_1b8 = &var_148;
            *var_1b8[8] = 1;
            core::option::Option$LT$T$GT$::map_or_else::h8667f145713f23f9(&var_200, &var_1c8);
            var_1e8 = var_200;
            int64_t var_1d8_7 = var_1f0;
            int64_t rsi_43 = *var_1e8[8];
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h9f76318f46fbb90d(&var_168, rsi_43, var_1f0 + rsi_43);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h97ccf84ef02c8f94(&var_1e8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h97ccf84ef02c8f94(&i_1);
        }
    }
    
    void* rax_19 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h54a470f9e611ad5c(
        &var_a8, &var_138);
    
    if (rax_19)
        change_log::domain::changelog::generate_changelog::_$u7b$$u7b$closure$u7d$$u7d$::h5267fa083183a71d(&var_168, var_138, *var_138[8], *(rax_19 + 0x18), *(rax_19 + 0x20));
    
    void* rax_20 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h54a470f9e611ad5c(
        &var_a8, &var_128);
    
    if (rax_20)
        change_log::domain::changelog::generate_changelog::_$u7b$$u7b$closure$u7d$$u7d$::h5267fa083183a71d(&var_168, var_128, *var_128[8], *(rax_20 + 0x18), *(rax_20 + 0x20));
    
    void* rax_21 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h54a470f9e611ad5c(
        &var_a8, &var_118);
    
    if (rax_21)
        change_log::domain::changelog::generate_changelog::_$u7b$$u7b$closure$u7d$$u7d$::h5267fa083183a71d(&var_168, var_118, *var_118[8], *(rax_21 + 0x18), *(rax_21 + 0x20));
    
    if (var_e0)
        change_log::domain::changelog::generate_changelog::_$u7b$$u7b$closure$u7d$$u7d$::h5267fa083183a71d(&var_168, "Migration Notesscripts/change-lo…", 0xf, var_e8, var_e0);
    
    int64_t rax_22;
    uint64_t rdx_31;
    rax_22 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h600657c26d527ff2(var_160, var_158);
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hf07736205cb4a9e6(&var_1c8, rax_22, rdx_31);
    arg1[1] = var_1b8;
    *arg1 = var_1c8;
    
    if (rbp)
        core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$alloc..string..String$GT$$GT$::he8816c9b59b211bd(&var_78);
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h7a6bd4f0094bad36(
        &var_f0);
    core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$$RF$str$C$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$$GT$::h2c36cc80d5141f6d(&var_d8);
    core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$$RF$str$C$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$$GT$::h2c36cc80d5141f6d(&var_a8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h97ccf84ef02c8f94(&var_168);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$change_log..domain..models..ChangelogInfo$GT$$GT$::h16241f9709ce52a3(arg2);
    return arg1;
}
