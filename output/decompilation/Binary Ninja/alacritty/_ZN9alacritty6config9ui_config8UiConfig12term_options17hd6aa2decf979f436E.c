
  int64_t alacritty::config::ui_config::UiConfig::term_options::hd6aa2decf979f436(int128_t* arg1, void* arg2, uint64_t arg3 @ r15)

{
    uint64_t var_10 = arg3;
    int128_t var_40;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_40, 
        arg2 + 0x48);
    uint64_t r12 = *(arg2 + 0x410);
    uint16_t rax = *(arg2 + 0x3d4);
    uint64_t rbp;
    
    if (rax != 4)
    {
        int32_t rax_1;
        int32_t rdx_1;
        rax_1 = alacritty::config::cursor::_$LT$impl$u20$core..convert..From$LT$alacritty..config..cursor..ConfigCursorStyle$GT$$u20$for$u20$vte..ansi..CursorStyle$GT$::from::hf8b7e6b388c32a93(rax | *(arg2 + 0x3d5) << 8);
        arg3 = rdx_1;
        rbp = rax_1 & 1;
    }
    else
        rbp = 2;
    
    char rax_2;
    char rdx_2;
    rax_2 = alacritty::config::cursor::_$LT$impl$u20$core..convert..From$LT$alacritty..config..cursor..ConfigCursorStyle$GT$$u20$for$u20$vte..ansi..CursorStyle$GT$::from::hf8b7e6b388c32a93(*(arg2 + 0x3d6));
    char rcx_3 = *(arg2 + 0x390);
    *(arg1 + 0x18) = r12;
    arg1[2] = rax_2 & 1;
    *(arg1 + 0x21) = rdx_2;
    *(arg1 + 0x22) = rbp;
    *(arg1 + 0x23) = arg3;
    int64_t result;
    arg1[1] = result;
    *arg1 = var_40;
    *(arg1 + 0x24) = 1;
    *(arg1 + 0x25) = rcx_3;
    return result;
}
