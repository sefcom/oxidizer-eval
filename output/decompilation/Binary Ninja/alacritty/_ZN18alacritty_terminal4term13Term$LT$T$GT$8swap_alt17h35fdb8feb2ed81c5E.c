
  int64_t alacritty_terminal::term::Term$LT$T$GT$::swap_alt::h35fdb8feb2ed81c5(void* arg1)

{
    if (!(*(arg1 + 0x6dd) & 0x10))
    {
        int64_t rax_1;
        int32_t rdx_1;
        rax_1 = alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::semantic_search_left::_$u7b$$u7b$closure$u7d$$u7d$::hbf63da3c25834af9(*(arg1 + 0x58), *(arg1 + 0x60));
        int128_t var_48;
        _$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$core..clone..Clone$GT$::clone::ha89e2699b0a1570a(&var_48, arg1 + 0x68);
        int32_t r15_1 = *(arg1 + 0x80);
        char rbp_1 = *(arg1 + 0x84);
        int64_t var_38;
        int64_t var_50_1 = var_38;
        int128_t zmm0_1 = var_48;
        core::ptr::drop_in_place$LT$alacritty_terminal..grid..Cursor$LT$alacritty_terminal..term..cell..Cell$GT$$GT$::hdbfd31c2680bb7f5(arg1 + 0x108);
        *(arg1 + 0x108) = rax_1;
        *(arg1 + 0x110) = rdx_1;
        int128_t var_64;
        *(arg1 + 0x114) = var_64;
        *(arg1 + 0x120) = zmm0_1;
        *(arg1 + 0x130) = r15_1;
        *(arg1 + 0x134) = rbp_1;
        int64_t rax_4;
        int32_t rdx_2;
        rax_4 = alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::semantic_search_left::_$u7b$$u7b$closure$u7d$$u7d$::hbf63da3c25834af9(*(arg1 + 0x58), *(arg1 + 0x60));
        _$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$core..clone..Clone$GT$::clone::ha89e2699b0a1570a(&var_48, arg1 + 0x68);
        int32_t rbp_2 = *(arg1 + 0x80);
        char r13_2 = *(arg1 + 0x84);
        int64_t var_50_2 = var_38;
        int128_t zmm0_3 = var_48;
        core::ptr::drop_in_place$LT$alacritty_terminal..grid..Cursor$LT$alacritty_terminal..term..cell..Cell$GT$$GT$::hdbfd31c2680bb7f5(arg1 + 0x88);
        *(arg1 + 0x88) = rax_4;
        *(arg1 + 0x90) = rdx_2;
        *(arg1 + 0x94) = var_64;
        *(arg1 + 0xa0) = zmm0_3;
        *(arg1 + 0xb0) = rbp_2;
        *(arg1 + 0xb4) = r13_2;
        alacritty_terminal::grid::Grid$LT$T$GT$::reset_region::h3f908732bc647e2d(arg1 + 0xd8);
    }
    
    core::intrinsics::typed_swap_nonoverlapping::h0a04095f3d754e5f(arg1 + 0x1b8, arg1 + 0x1d0);
    int64_t rax_6 = *(arg1 + 0x1c8);
    char rax_7;
    
    if (!rax_6)
        rax_7 = 0;
    else
        rax_7 = *(*(arg1 + 0x1c0) + rax_6 - 1);
    
    alacritty_terminal::term::Term$LT$T$GT$::set_keyboard_mode::hfafc66273a9bb82d(arg1, 
        _$LT$alacritty_terminal..term..TermMode$u20$as$u20$core..convert..From$LT$vte..ansi..KeyboardModes$GT$$GT$::from::h0c201033fe81af1b(rax_7), 
        0);
    int64_t result =
        core::intrinsics::typed_swap_nonoverlapping::h837dfdb8c289e852(arg1 + 0x28, arg1 + 0xd8);
    *(arg1 + 0x6dd) ^= 0x10;
    *(arg1 + 0x280) = 2;
    *(arg1 + 0x210) = 1;
    return result;
}
