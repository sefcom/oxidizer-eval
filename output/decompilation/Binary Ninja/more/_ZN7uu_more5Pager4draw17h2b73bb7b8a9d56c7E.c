
  int64_t uu_more::Pager::draw::h2b73bb7b8a9d56c7(void* arg1, int64_t* arg2, int32_t arg3)

{
    uu_more::Pager::draw_lines::h890a8f2ebbed6d60(arg1, arg2);
    uint64_t rax = *(arg1 + 0x40);
    int64_t rsi = -1;
    
    if (rax + *(arg1 + 0x18) >= rax)
        rsi = rax + *(arg1 + 0x18);
    
    uu_more::Pager::draw_prompt::hbe0a765e7105d705(arg1, arg2, 
        core::cmp::min_by::h872777368743a5ee(*(arg1 + 0x30), rsi), arg3);
    /* tailcall */
    return core::result::Result$LT$T$C$E$GT$::unwrap::h830102b0065460c6(
        _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(arg2));
}
