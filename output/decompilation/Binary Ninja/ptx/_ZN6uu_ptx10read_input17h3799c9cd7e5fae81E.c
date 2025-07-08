
  int64_t* uu_ptx::read_input::h3799c9cd7e5fae81(int64_t* arg1, void* arg2, int64_t arg3, void* arg4)

{
    void* var_1d8;
    std::thread::local::LocalKey$LT$T$GT$::try_with::h56169180d99f5faa(&var_1d8);
    int64_t rax;
    int64_t rdx;
    rax = core::result::Result$LT$T$C$E$GT$::expect::h52231f17148c3285(&var_1d8);
    int128_t var_168 = *data_6ed8f8;
    int128_t zmm0 = data_6ed908;
    int64_t var_140 = rdx;
    int64_t var_198 = 0;
    int64_t var_190 = 8;
    int64_t var_188 = 0;
    void* var_1d0;
    int64_t* result;
    
    if (!arg3)
    {
        result = arg1;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h21f7190cf2fce050(&var_198, 
            "-:assertion failed: beg <= endas…", 1);
    }
    else if (!*(arg4 + 0x58))
    {
        result = arg1;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h21f7190cf2fce050(&var_198, *(arg2 + 8), 
            *(arg2 + 0x10));
    }
    else
    {
        var_1d8 = arg2;
        var_1d0 = arg2 + arg3 * 0x18;
        result = arg1;
        
        while (true)
        {
            void* rax_3 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he2542eee79d3070c(&var_1d8);
            
            if (!rax_3)
                break;
            
            alloc::vec::Vec$LT$T$C$A$GT$::push::h21f7190cf2fce050(&var_198, *(rax_3 + 8), 
                *(rax_3 + 0x10));
        }
    }
    
    void var_118;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hdb3cfba9de7d7f84(&var_118, &var_198);
    int64_t rax_4;
    uint64_t rdx_3;
    rax_4 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf55ab871a8e5779f(&var_118);
    
    if (!rax_4)
    {
        label_5b69c0:
        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$str$GT$$GT$::h736feeb61ffeaf15(&var_118);
        int128_t zmm0_3 = var_168;
        *(result + 0x20) = rax;
        *(result + 0x10) = zmm0;
        *result = zmm0_3;
    }
    else
    {
        int64_t rbp_1 = rax_4;
        uint64_t r14_1 = rdx_3;
        int64_t r13_1 = 0;
        
        while (true)
        {
            int64_t* rax_6;
            void* const rcx;
            
            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he450917857c3e673(rbp_1, r14_1, "-:assertion failed: beg <= endas…", 1))
            {
                std::fs::File::open::h478ac8dba32f1ae3(&var_1d8, rbp_1);
                
                if (!var_1d8)
                {
                    rax_6 = alloc::boxed::Box$LT$T$GT$::new::h9f305fe194b67db1(*var_1d8[4]);
                    rcx = &data_6edcd8;
                    goto label_5b6879;
                }
                
                result[1] = var_1d0;
            }
            else
            {
                std::io::stdio::stdin::h7215cc131abb55d8();
                rax_6 = alloc::boxed::Box$LT$T$GT$::new::h0dfaa371efd7c18c(
                    &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5);
                rcx = &data_6edd30;
                label_5b6879:
                int128_t var_a0;
                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hd17c935e00db073b(
                    &var_a0, 0x2000, rax_6, rcx);
                int128_t var_d8 = var_a0;
                int128_t var_90;
                int128_t var_c8_1 = var_90;
                int128_t var_80;
                int128_t var_b8_1 = var_80;
                int64_t var_70;
                int64_t var_a8_1 = var_70;
                core::iter::adapters::try_process::he3ba2ce09273ab77(&var_1d8, &var_d8);
                void* rax_8 = var_1d8;
                
                if (rax_8 == -0x8000000000000000)
                    result[1] = var_1d0;
                else
                {
                    int64_t var_1c8;
                    int64_t r15_1 = var_1c8;
                    void* var_178_1 = var_1d0;
                    int128_t var_130;
                    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h8574ea4db7118a44(&var_130, var_1d0, var_1d0 + r15_1 * 0x18);
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h881c0d1e76b3a749(
                        &var_1d8, rbp_1, r14_1);
                    int64_t var_e8_1 = var_1c8;
                    int128_t var_f8 = var_1d8;
                    var_1c8 = r15_1;
                    var_1d8 = rax_8;
                    int64_t var_120;
                    int64_t var_1b0_1 = var_120;
                    int128_t var_1c0_1 = var_130;
                    int64_t var_1a8_1 = r13_1;
                    void var_68;
                    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hc03c4a862eb36838(
                        &var_68, &var_168, &var_f8, &var_1d8);
                    core::ptr::drop_in_place$LT$core..option..Option$LT$uu_ptx..FileContent$GT$$GT$::h581f5f8adb3a9895(&var_68);
                    r13_1 += r15_1;
                    int64_t rax_13;
                    uint64_t rdx_9;
                    rax_13 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf55ab871a8e5779f(&var_118);
                    rbp_1 = rax_13;
                    r14_1 = rdx_9;
                    result = arg1;
                    
                    if (!rax_13)
                        goto label_5b69c0;
                    
                    continue;
                }
            }
            *result = 0;
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$str$GT$$GT$::h736feeb61ffeaf15(&var_118);
            core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$alloc..string..String$C$uu_ptx..FileContent$GT$$GT$::h021de779c702ee73(&var_168);
            break;
        }
    }
    
    return result;
}
