
  int64_t uu_uniq::handle_obsolete::haf9e8c417503fdd5(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4 @ r15)

{
    int64_t var_8 = arg4;
    int64_t var_80 = -0x8000000000000000;
    int64_t var_68 = -0x8000000000000000;
    char var_a2 = 0;
    char var_a1 = 0;
    int64_t* var_a0 = &var_80;
    int64_t* var_98 = &var_68;
    char* var_90 = &var_a2;
    char* var_88 = &var_a1;
    int64_t var_50;
    core::iter::traits::iterator::Iterator::filter_map::h2424cec6f5fbd74f(&var_50, arg2, arg3, 
        &var_a0);
    int64_t rdx =
        core::iter::traits::iterator::Iterator::collect::h1eec4f759b0db5a3(&var_a0, &var_50);
    int64_t rax = var_80;
    int64_t result;
    int64_t r14;
    int64_t rax_1;
    
    if (rax != -0x8000000000000000)
    {
        int128_t var_78;
        int128_t var_48_2 = var_78;
        var_50 = rax;
        int64_t rax_2;
        rax_2 = uu_uniq::handle_obsolete::_$u7b$$u7b$closure$u7d$$u7d$::h8d9ea62ae7968a62(&var_50);
        r14 = rax_2;
        arg4 = rdx;
        rax_1 = var_68;
        
        if (rax_1 != -0x8000000000000000)
        {
            label_45cce2:
            int128_t var_60;
            int128_t var_48_1 = var_60;
            var_50 = rax_1;
            result =
                uu_uniq::handle_obsolete::_$u7b$$u7b$closure$u7d$$u7d$::h8d9ea62ae7968a62(&var_50);
        }
        else
            result = 0;
    }
    else
    {
        r14 = 0;
        rax_1 = var_68;
        
        if (rax_1 != -0x8000000000000000)
            goto label_45cce2;
        
        result = 0;
    }
    arg1[4] = var_90;
    *(arg1 + 0x10) = var_a0;
    *arg1 = r14;
    arg1[1] = arg4;
    arg1[5] = result;
    arg1[6] = rdx;
    return result;
}
