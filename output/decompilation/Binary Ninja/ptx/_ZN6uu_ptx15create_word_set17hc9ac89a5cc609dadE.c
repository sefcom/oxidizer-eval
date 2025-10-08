
  int128_t* uu_ptx::create_word_set::hc9ac89a5cc609dad(int128_t* arg1, void* arg2, void* arg3, int64_t* arg4)

{
    int64_t var_128;
    regex::regex::string::Regex::new::h830f62d081924685(&var_128, *(arg3 + 8));
    void var_90;
    core::result::Result$LT$T$C$E$GT$::unwrap::hcfdbcfab40fd90b7(&var_90, &var_128);
    regex::regex::string::Regex::new::h830f62d081924685(&var_128, *(arg2 + 0x38));
    void* var_b0;
    core::result::Result$LT$T$C$E$GT$::unwrap::hcfdbcfab40fd90b7(&var_b0, &var_128);
    int64_t var_1d0 = 0;
    int64_t var_1c0 = 0;
    void var_58;
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::iter::h6703a1916f75360f(&var_58, arg4);
    void* rax;
    void* rdx_2;
    rax = _$LT$hashbrown..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha5c58955d429264a(&var_58);
    void* var_220 = rax;
    
    if (rax)
    {
        char rax_1 = *(arg2 + 0x5a);
        char rax_2 = *(arg2 + 0x5c);
        char rax_3 = *(arg3 + 0x78);
        char rax_4 = *(arg3 + 0x79);
        
        while (true)
        {
            int64_t rax_7 = *(rdx_2 + 0x10);
            
            if (rax_7)
            {
                int64_t rcx = *(rdx_2 + 0x30);
                void* r14_1 = *(rdx_2 + 8);
                void* rax_9 = r14_1 + rax_7 * 0x18;
                void* rax_10 = r14_1 + 0x18;
                int64_t var_228_1 = 0;
                
                while (true)
                {
                    void* var_a8;
                    regex::regex::string::Regex::find_at::h85c38407f70a8d86(&var_128, var_b0, 
                        var_a8, *(r14_1 + 8), *(r14_1 + 0x10));
                    int64_t rax_11 = var_128;
                    int64_t var_218_1 = rax_11;
                    int64_t var_210_1 = rax_11;
                    int128_t var_118;
                    
                    if (rax_11)
                    {
                        var_210_1 = var_118;
                        var_218_1 = *var_118[8];
                    }
                    
                    int64_t r15_1 = *(r14_1 + 8);
                    int64_t r13_1 = *(r14_1 + 0x10);
                    int128_t var_1b8;
                    regex_automata::meta::regex::Regex::find_iter::hd357ef4be6b020eb(&var_1b8, 
                        &var_90, r15_1);
                    int128_t var_168;
                    int128_t var_d8_1 = var_168;
                    int128_t var_178;
                    int128_t var_e8_1 = var_178;
                    int128_t zmm0_2 = var_1b8;
                    int128_t var_188;
                    int128_t var_f8_1 = var_188;
                    int128_t var_198;
                    int128_t var_108 = var_198;
                    int128_t var_1a8;
                    var_118 = var_1a8;
                    var_128 = zmm0_2;
                    int64_t var_c0_1 = r15_1;
                    int64_t var_b8_1 = r13_1;
                    void* rcx_6;
                    
                    while (true)
                    {
                        int64_t* var_158;
                        regex_automata::util::iter::Searcher::advance::h485c3ae5de67fd8b(&var_1b8, 
                            &var_108, var_158, &var_128);
                        
                        if (var_1b8 != 1)
                        {
                            core::ptr::drop_in_place$LT$regex..regex..string..Matches$GT$::h69f3cac7d0754682(&var_128);
                            var_228_1 += 1;
                            rcx_6 = rax_10;
                            rax_10 = rcx_6 + 0x18;
                            r14_1 = rcx_6;
                            break;
                        }
                        
                        int64_t r15_2 = *var_1b8[8];
                        int64_t r13_2 = var_1a8;
                        
                        if (rax_1 & 1 && r15_2 == var_210_1 && r13_2 == var_218_1)
                            continue;
                        
                        char* r12_1 = *(r14_1 + 8);
                        int64_t rbp_2 = *(r14_1 + 0x10);
                        void* rax_17;
                        uint64_t rdx_7;
                        rax_17 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(r15_2, r13_2, r12_1, rbp_2);
                        
                        if (!rax_17)
                        {
                            core::str::slice_error_fail::h1a2885084e28d077(r12_1, rbp_2, r15_2, 
                                r13_2);
                            /* no return */
                        }
                        
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he9e3a9b23988b07f(&var_1b8, rax_17, rdx_7);
                        uint64_t var_238_1 = var_1a8;
                        int128_t var_248 = var_1b8;
                        int64_t rax_19;
                        
                        if (rax_3 & 1)
                            rax_19 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hcc18adac9e94b896(arg3 + 0x18, &var_248);
                        
                        if (rax_3 & 1 && !rax_19)
                        {
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_248);
                            continue;
                        }
                        else if (rax_4 & 1 && hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hcc18adac9e94b896(arg3 + 0x48, &var_248))
                        {
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_248);
                            continue;
                        }
                        
                        if (rax_2 & 1)
                        {
                            alloc::str::_$LT$impl$u20$str$GT$::to_uppercase::hf8ab82a15f19393f(
                                &var_1b8, *var_248[8], var_238_1);
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_248);
                            var_238_1 = var_1a8;
                            var_248 = var_1b8;
                        }
                        
                        int128_t zmm0_3 = var_248;
                        int128_t var_70;
                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_70, var_220);
                        var_1a8 = var_238_1;
                        var_1b8 = zmm0_3;
                        var_188 = rcx + var_228_1;
                        *var_188[8] = var_228_1;
                        var_178 = r15_2;
                        *var_178[8] = r13_2;
                        int64_t var_60;
                        *var_198[8] = var_60;
                        var_1a8 = var_70;
                        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h22c09da831677363(&var_1d0, &var_1b8);
                    }
                    
                    if (rcx_6 == rax_9)
                        rax_10 = rcx_6;
                    
                    if (rcx_6 == rax_9)
                        break;
                }
            }
            
            void* rax_6;
            rax_6 = _$LT$hashbrown..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha5c58955d429264a(&var_58);
            var_220 = rax_6;
            
            if (!rax_6)
                break;
        }
    }
    
    arg1[1] = var_1c0;
    *arg1 = var_1d0;
    core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h1c6ec398caf69ee4(&var_b0);
    core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h1c6ec398caf69ee4(&var_90);
    return arg1;
}
