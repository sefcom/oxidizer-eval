
  int64_t* uu_dd::parseargs::parse_bytes_with_opt_multiplier::h61a7f82d67afab9c(int64_t* arg1, int64_t arg2, uint64_t arg3)

{
    void var_68;
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&var_68, 
        0x78, arg2, arg3);
    int64_t var_78 = 0;
    uint64_t var_70 = arg3;
    int16_t var_38 = 1;
    void var_d0;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h96366f3336c0a79d(&var_d0, &var_78);
    int64_t var_c0;
    
    if (var_c0 == 1)
    {
        int64_t* var_c8;
        uu_dd::parseargs::parse_bytes_no_x::h9d66ee8239148f5f(arg1, arg2, arg3, *var_c8, var_c8[1]);
        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hf4edae12fbccf23e(
            &var_d0);
    }
    
    void var_98;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h532aa9ace314f175(&var_98, &var_d0);
    char* i_2;
    void* rdx_2;
    i_2 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1fb4a3ee92f93d48(&var_98);
    int64_t r12_1;
    
    if (!i_2)
        r12_1 = 1;
    else
    {
        char* i_1 = i_2;
        void* r13_1 = rdx_2;
        r12_1 = 1;
        char* i;
        
        do
        {
            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(i_1, r13_1, "0", 1))
                uu_dd::parseargs::show_zero_multiplier_warning::hbe4ec55817d90dd4();
            
            int64_t var_b8;
            uu_dd::parseargs::parse_bytes_no_x::h9d66ee8239148f5f(&var_b8, arg2, arg3, i_1, r13_1);
            int64_t rax_3 = var_b8;
            int64_t var_b0;
            int64_t rcx_3 = var_b0;
            int64_t* rdx_5;
            
            if (rax_3 != 0xe)
            {
                rdx_5 = arg1;
                int128_t var_a8;
                *(rdx_5 + 0x10) = var_a8;
                label_4d49bd:
                *rdx_5 = rax_3;
                rdx_5[1] = rcx_3;
                return core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$str$GT$$GT$::h09ad4d2f7ce83910(&var_98);
            }
            
            if ((r12_1 * rcx_3) >> 0x40 != {0})
            {
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(
                    &var_b8, arg2, arg3);
                rcx_3 = var_b8;
                rdx_5 = arg1;
                *(rdx_5 + 0x10) = var_b0;
                rax_3 = 0xd;
                goto label_4d49bd;
            }
            
            r12_1 *= rcx_3;
            void* rdx_4;
            i = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1fb4a3ee92f93d48(&var_98);
            i_1 = i;
            r13_1 = rdx_4;
        } while (i);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$str$GT$$GT$::h09ad4d2f7ce83910(&var_98);
    arg1[1] = r12_1;
    *arg1 = 0xe;
    return arg1;
}
