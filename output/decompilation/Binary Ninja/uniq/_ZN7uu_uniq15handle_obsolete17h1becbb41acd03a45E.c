
  int64_t uu_uniq::handle_obsolete::h1becbb41acd03a45(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4 @ r15)

{
    int64_t var_10 = arg4;
    int64_t* var_a0 = -0x8000000000000000;
    int64_t* var_88 = -0x8000000000000000;
    char var_c2 = 0;
    char var_c1 = 0;
    int64_t* var_c0 = &var_a0;
    int64_t* var_b8 = &var_88;
    char* var_b0 = &var_c2;
    char* var_a8 = &var_c1;
    void var_58;
    core::iter::traits::iterator::Iterator::filter_map::hcec70c5cd690a3a4(&var_58, arg2, arg3, 
        &var_c0);
    int128_t var_70;
    int64_t rdx = _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h5a1dfc9d90ab14e5(&var_70, &var_58);
    int64_t* rax = var_a0;
    int64_t result;
    int64_t r14;
    int64_t* rax_1;
    
    if (rax != -0x8000000000000000)
    {
        int128_t var_98;
        var_b8 = var_98;
        var_c0 = rax;
        int64_t rbp;
        rbp = 1;
        int64_t rax_2;
        rax_2 = uu_uniq::handle_obsolete::_$u7b$$u7b$closure$u7d$$u7d$::h80beacdf87cc02d6(&var_c0);
        r14 = rax_2;
        arg4 = rdx;
        rax_1 = var_88;
        
        if (rax_1 == -0x8000000000000000)
            result = 0;
        else
        {
            label_4702f3:
            int128_t var_80;
            var_b8 = var_80;
            var_c0 = rax_1;
            result =
                uu_uniq::handle_obsolete::_$u7b$$u7b$closure$u7d$$u7d$::h80beacdf87cc02d6(&var_c0);
        }
    }
    else
    {
        r14 = 0;
        rax_1 = var_88;
        
        if (rax_1 != -0x8000000000000000)
            goto label_4702f3;
        
        result = 0;
    }
    int64_t var_60;
    arg1[4] = var_60;
    *(arg1 + 0x10) = var_70;
    *arg1 = r14;
    arg1[1] = arg4;
    arg1[5] = result;
    arg1[6] = rdx;
    return result;
}
