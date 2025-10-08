
  int64_t uu_who::platform::unix::Who::print_user::hb7a5018d3494c7fe(void* arg1, void* arg2)

{
    int64_t var_1b0;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hdbc64a9c3b715b62(&var_1b0, &data_4192a0[4], 4);
    void** const var_e8;
    uucore::features::utmpx::Utmpx::tty_device::h164f6e4ca04cfddc(&var_e8, arg2);
    int64_t var_e0;
    std::path::PathBuf::push::h73b92207671fa87e(&var_1b0, var_e0);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_e8);
    int64_t var_1a8;
    std::fs::metadata::ha1d25b3542fa29b7(&var_e8, var_1a8);
    void** const rdi_5 = var_e8;
    int64_t var_198;
    char const* const var_190;
    int64_t var_188;
    int32_t rbp_1;
    
    if (rdi_5 == 2)
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6d0772277f38ed34(2, var_e0);
        rbp_1 = 0x3f;
        label_46888d:
        var_190 = "  ?()failed to canonicalize ";
        var_188 = 3;
        var_198 = -0x8000000000000000;
        
        if (*(arg1 + 0x18))
            goto label_46881a;
        
        goto label_4688bc;
    }
    
    char var_b0;
    int64_t rbp;
    rbp = !(var_b0 & 0x10);
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6d0772277f38ed34(rdi_5, var_e0);
    int64_t r14_1;
    r14_1 = rbp;
    rbp_1 = (r14_1 << 1) + 0x2b;
    int64_t var_80;
    
    if (!var_80)
        goto label_46888d;
    
    uu_who::platform::unix::idle_string::hf7cff6d29f8898c5(&var_198, var_80);
    int64_t result;
    int64_t var_1e8;
    int64_t (* var_1d8)(void* arg1, int64_t arg2);
    int64_t var_1d0;
    int64_t (* var_1c0)(void* arg1, int64_t arg2);
    int64_t (* r14_2)(void* arg1, int64_t arg2);
    
    if (!*(arg1 + 0x18))
    {
        label_4688bc:
        uucore::features::utmpx::Utmpx::host::hfb1a95bf3e0888e1(&var_1e8, arg2);
        r14_2 = var_1d8;
        int64_t* var_180;
        int64_t (* var_178)(void* arg1, int64_t arg2);
        int128_t var_168;
        
        if (!r14_2)
        {
            label_46886c:
            int64_t (* var_158_1)(void* arg1, int64_t arg2) = var_1d8;
            var_168 = var_1e8;
        }
        else
        {
            label_4688d1:
            var_180 = &var_1e8;
            var_178 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_e8 = &data_4fefa8;
            int64_t var_e0_1 = 2;
            int64_t var_c8_1 = 0;
            int64_t** var_d8_1 = &var_180;
            int64_t var_d0_1 = 1;
            core::option::Option$LT$T$GT$::map_or_else::ha4af03a514854fed(&var_1d0, &var_e8);
            var_168 = var_1d0;
            int64_t (* var_158_2)(void* arg1, int64_t arg2) = var_1c0;
        }
        
        void var_128;
        uucore::features::utmpx::Utmpx::user::h7da4603721cbda8f(&var_128, arg2);
        void var_110;
        uucore::features::utmpx::Utmpx::tty_device::h164f6e4ca04cfddc(&var_110, arg2);
        int64_t var_100;
        int64_t var_148_1 = var_100;
        uu_who::platform::unix::time_string::hf7b3fb93d48ce0b2(&var_180, arg2);
        int32_t var_1ec = *(arg2 + 4);
        int32_t* var_f8 = &var_1ec;
        uint64_t (* var_f0_1)(int32_t* arg1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h6f30f0a695ff7937;
        var_e8 = &data_418a60;
        int64_t var_e0_2 = 1;
        int64_t var_c8_2 = 0;
        int32_t** var_d8_2 = &var_f8;
        int64_t var_d0_2 = 1;
        core::option::Option$LT$T$GT$::map_or_else::ha4af03a514854fed(&var_1d0, &var_e8);
        int64_t (* var_d8_3)(void* arg1, int64_t arg2) = var_1c0;
        var_e8 = var_1d0;
        int64_t var_230_1 = var_188;
        int64_t var_170;
        int64_t var_240_1 = var_170;
        int64_t var_200_1 = 0;
        int64_t var_120;
        int64_t var_118;
        int64_t var_108;
        uu_who::platform::unix::Who::print_line::h48873e2090b4b940(arg1, var_120, var_118, rbp_1, 
            var_108, var_178, var_190, var_e0_2, var_168, 1);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_e8);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_180);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_110);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_128);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_168);
        
        if (r14_2)
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_1e8);
        
        result = 0;
    }
    else
    {
        label_46881a:
        uucore::features::utmpx::Utmpx::canon_host::h6d7ae94323da986c(&var_e8, arg2);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h20da148c3d372166(&var_1d0, &var_e8);
        int64_t rax_1 = var_1d0;
        int64_t result_2;
        result = result_2;
        r14_2 = var_1c0;
        
        if (rax_1 != -0x8000000000000000)
        {
            var_1e8 = rax_1;
            int64_t result_1 = result;
            var_1d8 = r14_2;
            
            if (r14_2)
                goto label_4688d1;
            
            goto label_46886c;
        }
    }
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h23cc7d1edb76b1fb(&var_198);
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h9526885fff10d968(var_1b0, var_1a8);
    return result;
}
