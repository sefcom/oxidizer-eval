
  int64_t rg::flags::doc::help::remove_roff::h5826915916572aef(int128_t* arg1, int64_t arg2, int64_t arg3)

{
    int64_t var_168 = 0;
    int64_t var_160 = 8;
    int64_t var_158 = 0;
    int64_t rax;
    int64_t rdx;
    rax = core::str::_$LT$impl$u20$str$GT$::trim_matches::hd0360e9e77a44e0f(arg2, arg3);
    int64_t var_b0;
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(&var_b0, 
        0xa, rax, rdx);
    int64_t var_c0 = 0;
    int16_t var_80 = 0;
    int128_t var_1e8;
    int128_t var_1d0;
    
    while (true)
    {
        int64_t rax_1;
        int64_t rdx_2;
        rax_1 = core::str::iter::SplitInternal$LT$P$GT$::next_inclusive::hd02aa349d3b3c93b(&var_c0);
        int64_t rax_2;
        uint64_t rdx_3;
        
        if (rax_1)
            rax_2 = _$LT$core..str..LinesMap$u20$as$u20$core..ops..function..Fn$LT$$LP$$RF$str$C$$RP$$GT$$GT$::call::h32b8dbc7f07f5738(rax_1, rdx_2);
        
        int128_t* var_208;
        int64_t (* var_200)(void* arg1, int64_t arg2);
        uint64_t var_1f8;
        int128_t* var_1d8;
        void var_150;
        int128_t var_138;
        
        if (!rax_1 || !rax_2)
        {
            alloc::vec::Vec$LT$T$C$A$GT$::dedup_by::h568bd5b4596aea07(&var_168);
            alloc::str::join_generic_copy::h51bc700a0c907f5e(&var_1e8, var_160, var_158, 
                "\n/home/34r7hm4n/dev/oxidizer/ox…", 1);
            int128_t* var_128_1 = var_1d8;
            var_138 = var_1e8;
            alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_1e8, *var_138[8], 
                var_1d8, "\fB\nThe alias will be replaced …", 3, 1, nullptr);
            alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_c0, *var_1e8[8], 
                var_1d8, &data_483d67[0x1e], 3, 1, nullptr);
            alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_208, rdx, var_b0, 
                "\fP, invalid hyperlink formatigl…", 3, 1, nullptr);
            alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_150, var_200, 
                var_1f8, &data_483d67[0x21], 2, "-\n_rg() {\n  local i cur prev o…", 1);
            int64_t var_148;
            int64_t var_140;
            alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(arg1, var_148, var_140, 
                &data_483d67[0x23], 2, "\xfatal runtime error: thread lo…", 1);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_150);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_208);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_c0);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_1e8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_138);
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h86d7461d11433c9d(&var_168);
        }
        
        if (!rdx_3)
            break;
        
        int128_t* var_128;
        
        if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h989fa1e58ec52438(rax_2, 
            rdx_3, "./cannot parse integer from empt…", 1))
        {
            if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h989fa1e58ec52438(rax_2, 
                rdx_3, "\fB\nThe alias will be replaced …", 3) &&
                core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::hee818f7537c900cd(rax_2, 
                rdx_3, "\fP, invalid hyperlink formatigl…", 3))
            {
                alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_1e8, rax_2, 
                    rdx_3, "\fB\nThe alias will be replaced …", 3, 1, nullptr);
                alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_138, 
                    *var_1e8[8], var_1d8, "\fP, invalid hyperlink formatigl…", 3, 1, nullptr);
                uint64_t rdx_12 =
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(
                    &var_1e8);
                var_208 = &var_138;
                var_200 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_1e8 = &data_7e5cf0;
                *var_1e8[8] = 2;
                *var_1d0[8] = 0;
                var_1d8 = &var_208;
                var_1d0 = 1;
                void var_48;
                core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_48, 0, rdx_12, 
                    &var_1e8);
                alloc::vec::Vec$LT$T$C$A$GT$::push::h128a0db80672107e(&var_168, &var_48);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_138);
                continue;
            }
            
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1dbf6ec1d593e24c(&var_1e8, rax_2, rdx_3);
            var_128 = var_1d8;
            var_138 = var_1e8;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h128a0db80672107e(&var_168, &var_138);
        }
        else
        {
            int128_t var_1a8;
            
            if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h989fa1e58ec52438(rax_2, 
                rdx_3, ".IP utf8java*.ml*.pmoptsinfo\", 4))
            {
                if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h989fa1e58ec52438(
                    rax_2, rdx_3, &data_463d40[8], 4) && !
                    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h989fa1e58ec52438(
                    rax_2, rdx_3, ".BI *.jsllvm*.lltoml", 4))
                {
                    if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h989fa1e58ec52438(
                            rax_2, rdx_3, &data_483d67[0x15], 3) && !core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h989fa1e58ec52438(rax_2, rdx_3, &data_483d67[0x18], 3)
                            && !core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h989fa1e58ec52438(rax_2, rdx_3, &data_483d67[0x1b], 3))
                        continue;
                    
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1dbf6ec1d593e24c(&var_1e8, 1, 0);
                    var_128 = var_1d8;
                    var_138 = var_1e8;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h128a0db80672107e(&var_168, &var_138);
                    continue;
                }
                
                _$LT$core..str..pattern..MultiCharEqPattern$LT$C$GT$$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::hc64003a72f8fb866(&var_1d0, rax_2, rdx_3);
                *var_1e8[8] = 0;
                var_1a8 = 1;
                var_1e8 = 1;
                core::iter::traits::iterator::Iterator::collect::h645f17ae341cd6fb(&var_138, 
                    &var_1e8);
                int64_t r12_2 = *var_138[8];
                alloc::str::join_generic_copy::hccb370bfa740ad62(&var_1e8, r12_2, var_128, 1, 0);
                var_1f8 = rdx_3;
                var_208 = var_1e8;
                uint64_t rdx_18 = core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hc0c276afa06f1591(var_138, r12_2);
                var_138 = &var_208;
                *var_138[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_1e8 = &data_462330;
                *var_1e8[8] = 1;
                *var_1d0[8] = 0;
                var_1d8 = &var_138;
                var_1d0 = 1;
                void var_60;
                core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_60, 0, rdx_18, 
                    &var_1e8);
                alloc::vec::Vec$LT$T$C$A$GT$::push::h128a0db80672107e(&var_168, &var_60);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_208);
            }
            else
            {
                core::str::pattern::StrSearcher::new::h3b91c04870bd602f(&var_138, rax_2, rdx_3, 
                    " \n        !FLAG!)\n          CO…", 1);
                int64_t var_d8;
                int64_t var_188_1 = var_d8;
                int128_t var_e8;
                int128_t var_198_1 = var_e8;
                int128_t var_f8;
                var_1a8 = var_f8;
                int128_t zmm0_1 = var_138;
                int128_t var_108;
                int128_t var_1b8_1 = var_108;
                int128_t var_118;
                var_1d0 = var_118;
                var_1d8 = var_128;
                var_1e8 = zmm0_1;
                int64_t var_180_1 = 0;
                uint64_t var_178_1 = rdx_3;
                int16_t var_170_1 = 1;
                int64_t rax_6 =
                    core::iter::traits::iterator::Iterator::advance_by::hb4775c3becbcfbcf(&var_1e8);
                int64_t rax_7;
                int64_t rdx_5;
                
                if (!rax_6)
                    rax_7 =
                        core::str::iter::SplitInternal$LT$P$GT$::next::h2b1f52f8e0fd141e(&var_1e8);
                
                if (rax_6 || !rax_7)
                {
                    core::option::expect_failed::h3f620cfb8545dc61(
                        "first argument to .IP.sp.PP.TP\f…");
                    /* no return */
                }
                
                alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_138, rax_7, 
                    rdx_5, "\(buAVX2aidl*.rbrakuyang|", 4, &data_483d8c, 3);
                alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_208, 
                    *var_138[8], var_128, "\fB\nThe alias will be replaced …", 3, 1, nullptr);
                alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_150, var_200, 
                    var_1f8, "\fP, invalid hyperlink formatigl…", 3, 
                    ":]/rustc/bf64d66bd58719fac2585ea…", 1);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_208);
                uint64_t rdx_8 =
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(
                    &var_138);
                var_138 = &var_150;
                *var_138[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_1e8 = &data_462330;
                *var_1e8[8] = 1;
                *var_1d0[8] = 0;
                var_1d8 = &var_138;
                var_1d0 = 1;
                void var_78;
                core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_78, 0, rdx_8, 
                    &var_1e8);
                alloc::vec::Vec$LT$T$C$A$GT$::push::h128a0db80672107e(&var_168, &var_78);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_150);
            }
        }
    }
    
    var_1e8 = &data_7ea690;
    *var_1e8[8] = 1;
    int64_t var_1d8_2 = 8;
    var_1d0 = {0};
    core::panicking::panic_fmt::h96f341d36638c225(&var_1e8);
    /* no return */
}
