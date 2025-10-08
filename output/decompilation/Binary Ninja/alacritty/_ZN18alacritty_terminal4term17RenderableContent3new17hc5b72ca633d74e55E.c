
  int64_t alacritty_terminal::term::RenderableContent::new::hc5b72ca633d74e55(int64_t* arg1, void* arg2)

{
    int64_t r13 = *(arg2 + 0xb8);
    int32_t r15 = *(arg2 + 0xc0);
    int64_t r12 = *(arg2 + 0xc8);
    int128_t var_70;
    alacritty_terminal::term::RenderableCursor::new::h18d857dbc051652b(&var_70, arg2);
    int128_t var_58;
    char var_38;
    
    if (*(arg2 + 0x280) != 2)
        alacritty_terminal::selection::Selection::to_range::h2a26a8fa10c1a05c(&var_58, 
            arg2 + 0x258, arg2);
    else
        var_38 = 2;
    
    int32_t rbp_1 = ~r12;
    int32_t rax = core::cmp::Ord::min::h08e004ced85b11eb(r15 + rbp_1, r15 - 1);
    int32_t rdx_2 = *(arg2 + 0x6dc);
    arg1[1] = arg2 + 0x28;
    arg1[2] = r13 - 1;
    arg1[3] = rbp_1;
    arg1[4] = r13 - 1;
    arg1[5] = rax;
    int128_t zmm0 = var_58;
    int128_t var_48;
    *(arg1 + 0x60) = var_48;
    arg1[0xe] = var_38;
    *(arg1 + 0x50) = zmm0;
    *(arg1 + 0x38) = var_70;
    int64_t result;
    arg1[9] = result;
    *arg1 = r12;
    arg1[6] = arg2 + 0x2a8;
    arg1[0xf] = rdx_2;
    return result;
}
