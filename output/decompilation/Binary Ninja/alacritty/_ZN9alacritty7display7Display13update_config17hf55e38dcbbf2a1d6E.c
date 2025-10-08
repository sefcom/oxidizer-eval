
  int64_t alacritty::display::Display::update_config::hf55e38dcbbf2a1d6(void* arg1, void* arg2)

{
    *(arg1 + 0xc0) = *(arg2 + 0xb);
    *(arg1 + 0x5c0) = *(arg2 + 0x35a);
    uint32_t rax_2 = *(arg2 + 0x358);
    uint64_t rcx_3 = ((rax_2 >> 3) * 0x20c5) >> 0x14;
    *(arg1 + 0x5a0) = rcx_3;
    *(arg1 + 0x5a8) = (rax_2 - rcx_3 * 0x3e8) * 0xf4240;
    void var_337;
    _$LT$alacritty..display..color..List$u20$as$u20$core..convert..From$LT$$RF$alacritty..config..color..Colors$GT$$GT$::from::h4562d385f38e06c1(&var_337, arg2 + 0x1d8);
    return memcpy(arg1 + 0x838, &var_337, 0x327);
}
