
  int64_t* alacritty_terminal::selection::Selection::to_range::h2a26a8fa10c1a05c(int64_t* arg1, int128_t* arg2, void* arg3)

{
    int64_t r15 = *(arg3 + 0xb8);
    int64_t rax = arg2[1];
    int128_t var_98 = *arg2;
    int128_t var_b8 = *(arg2 + 0x18);
    int64_t rax_1 = *(arg2 + 0x28);
    int32_t rbp = *var_b8[8];
    
    if (_$LT$alacritty_terminal..index..Point$LT$L$C$C$GT$$u20$as$u20$core..cmp..Ord$GT$::cmp::h2b413278cc536aee(var_98, *var_98[8], var_b8, rbp) > 0)
    {
        core::intrinsics::typed_swap_nonoverlapping::h0a04095f3d754e5f(&var_98, &var_b8);
        rbp = *var_b8[8];
    }
    
    int64_t rax_3 = *(arg3 + 0x50);
    int32_t rcx_1 = 0;
    int64_t* result = rax_3 - *(arg3 + 0xc0);
    
    if (rax_3 >= *(arg3 + 0xc0))
        rcx_1 = result;
    
    if (rbp >= -(rcx_1))
    {
        int64_t rax_4;
        int32_t rdx_2;
        rax_4 = alacritty_terminal::index::Point::grid_clamp::hd0d1827dd0c9d684(var_98, *var_98[8], 
            arg3, 1);
        var_98 = rax_4;
        *var_98[8] = rdx_2;
        int64_t rax_5;
        int32_t rdx_4;
        rax_5 =
            alacritty_terminal::index::Point::grid_clamp::hd0d1827dd0c9d684(var_b8, rbp, arg3, 1);
        var_b8 = rax_5;
        *var_b8[8] = rdx_4;
        int64_t var_78;
        int128_t var_58;
        
        switch (arg2[3])
        {
            case 0:
            {
                int64_t var_48_1 = rax;
                var_58 = var_98;
                int64_t var_68_1 = rax_1;
                var_78 = var_b8;
                int32_t var_70_1 = *var_b8[8];
                int32_t var_6c_1 = *var_b8[0xc];
                return alacritty_terminal::selection::Selection::range_simple::h1a39dda08803e914(
                    arg1, arg2, &var_58, &var_78, r15);
                break;
            }
            case 1:
            {
                int64_t var_48_2 = rax;
                var_58 = var_98;
                int64_t var_68_2 = rax_1;
                var_78 = var_b8;
                int32_t var_70_2 = *var_b8[8];
                int32_t var_6c_2 = *var_b8[0xc];
                return alacritty_terminal::selection::Selection::range_block::hb0d8e5332cc8abd5(
                    arg1, arg2, &var_58, &var_78);
                break;
            }
            case 2:
            {
                /* tailcall */
                return alacritty_terminal::selection::Selection::range_semantic::h4a75215fc3ee45a7(
                    arg1, arg3, rax_4, rdx_2, rax_5, rdx_4);
            }
            case 3:
            {
                int32_t rax_12 = alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::line_search_left::h51103e5e6ff36c7a(arg3, rdx_2);
                int32_t rdx_8;
                result = alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::line_search_right::h7ee6c3b77284b281(arg3, rdx_4);
                *arg1 = 0;
                arg1[1] = rax_12;
                arg1[2] = result;
                arg1[3] = rdx_8;
                arg1[4] = 0;
                break;
            }
        }
    }
    else
        arg1[4] = 2;
    
    return result;
}
