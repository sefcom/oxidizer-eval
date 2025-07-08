
  int128_t* uu_ptx::create_word_set::ha43c71debbb1b6c6(int128_t* arg1, void* arg2, void* arg3, int64_t* arg4)

{
    int128_t var_148;
    regex::regex::string::Regex::new::h2b022f3b326b0361(&var_148, *(arg3 + 8));
    void var_90;
    core::result::Result$LT$T$C$E$GT$::unwrap::hc501836100c48eb1(&var_90, &var_148);
    regex::regex::string::Regex::new::h2b022f3b326b0361(&var_148, *(arg2 + 0x38));
    void* var_b0;
    core::result::Result$LT$T$C$E$GT$::unwrap::hc501836100c48eb1(&var_b0, &var_148);
    int64_t var_1e0 = 0;
    int64_t var_1d0 = 0;
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::iter::h033c4715d4164856(&var_148, arg4);
    int64_t var_128;
    int64_t var_38 = var_128;
    int128_t var_138;
    int128_t var_48 = var_138;
    int128_t var_58 = var_148;
    char rax_1 = *(arg2 + 0x5a);
    char rax_2 = *(arg2 + 0x5c);
    char rax_3 = *(arg3 + 0x78);
    char rax_4 = *(arg3 + 0x79);
    
    while (true)
    {
        void* rax_6;
        void* rdx_2;
        rax_6 = _$LT$hashbrown..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::haf25f5bee2ea9502(&var_58);
        
        if (!rax_6)
            break;
        
        int64_t rax_7 = *(rdx_2 + 0x30);
        int64_t rax_8 = *(rdx_2 + 8);
        int64_t rcx = *(rdx_2 + 0x10);
        int64_t var_1c8 = rax_8;
        int64_t var_1c0_1 = rax_8 + rcx * 0x18;
        void* rax_9 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he2542eee79d3070c(&var_1c8);
        
        if (rax_9)
        {
            int64_t var_220_1 = 0;
            
            while (true)
            {
                char* r14_1 = *(rax_9 + 8);
                void* r12_1 = *(rax_9 + 0x10);
                void* var_a8;
                regex::regex::string::Regex::find_at::hf05a7654ffba1dbb(&var_148, var_b0, var_a8, 
                    r14_1, r12_1);
                int64_t r15_1 = var_148;
                int64_t var_218_1 = r15_1;
                
                if (r15_1)
                {
                    r15_1 = var_138;
                    var_218_1 = *var_138[8];
                }
                
                int128_t var_1b8;
                regex_automata::meta::regex::Regex::find_iter::h9e67946da93e5169(&var_1b8, &var_90, 
                    r14_1);
                int128_t var_168;
                int128_t var_f8_1 = var_168;
                int128_t var_178;
                int128_t var_108_1 = var_178;
                int128_t var_188;
                int128_t var_118_1 = var_188;
                int128_t var_198;
                var_128 = var_198;
                int128_t var_1a8;
                var_138 = var_1a8;
                var_148 = var_1b8;
                char* var_e0_1 = r14_1;
                void* var_d8_1 = r12_1;
                
                while (true)
                {
                    int64_t* var_158;
                    regex_automata::util::iter::Searcher::advance::hf2daab265d806bac(&var_1b8, 
                        &var_128, var_158, &var_148);
                    
                    if (!var_1b8)
                    {
                        core::ptr::drop_in_place$LT$regex..regex..string..Matches$GT$::h0da4c5b7d9432e00(&var_148);
                        var_220_1 += 1;
                        rax_9 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he2542eee79d3070c(&var_1c8);
                        break;
                    }
                    
                    void* rbp_2 = *var_1b8[8];
                    void* rbx_1 = var_1a8;
                    
                    if (rax_1 && rbp_2 == r15_1 && core::cmp::impls::_$LT$impl$u20$core..cmp..PartialEq$u20$for$u20$usize$GT$::eq::h37bad34467ea7e13(rbx_1, var_218_1))
                        continue;
                    
                    void* rax_15;
                    uint64_t rdx_7;
                    rax_15 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(rbp_2, rbx_1, r14_1, r12_1);
                    
                    if (!rax_15)
                    {
                        core::str::slice_error_fail::h5dbb61534404fe7e(r14_1, r12_1, rbp_2, rbx_1);
                        /* no return */
                    }
                    
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h881c0d1e76b3a749(
                        &var_1b8, rax_15, rdx_7);
                    size_t var_228_1 = var_1a8;
                    int128_t var_238 = var_1b8;
                    void* rax_17;
                    
                    if (rax_3)
                        rax_17 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h627002b9e4e69103(arg3 + 0x18, &var_238);
                    
                    if (rax_3 && !rax_17)
                    {
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(
                            &var_238);
                        continue;
                    }
                    else if (rax_4 &&
                        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h627002b9e4e69103(
                        arg3 + 0x48, &var_238))
                    {
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(
                            &var_238);
                        continue;
                    }
                    
                    if (rax_2)
                    {
                        alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h8673807247540a26(
                            &var_1b8, *var_238[8], var_228_1);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(
                            &var_238);
                        var_228_1 = var_1a8;
                        var_238 = var_1b8;
                    }
                    
                    int128_t zmm0_3 = var_238;
                    int128_t var_70;
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&var_70, rax_6);
                    var_1a8 = var_228_1;
                    var_1b8 = zmm0_3;
                    var_188 = rax_7 + var_220_1;
                    *var_188[8] = var_220_1;
                    var_178 = rbp_2;
                    *var_178[8] = rbx_1;
                    int64_t var_60;
                    *var_198[8] = var_60;
                    var_1a8 = var_70;
                    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h814780906c3007c3(&var_1e0, &var_1b8);
                }
                
                if (!rax_9)
                    break;
            }
        }
    }
    
    arg1[1] = var_1d0;
    *arg1 = var_1e0;
    core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::hf34b8b1af3b36f38(&var_b0);
    core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::hf34b8b1af3b36f38(&var_90);
    return arg1;
}
