
  uint64_t uu_more::Pager::draw::h5a1246f76957caca(void* arg1, int64_t arg2, int32_t arg3)

{
    uint64_t result = uu_more::Pager::draw_lines::hf362fbee6ca4fba8(arg1, arg2);
    
    if (result)
        return result;
    
    int64_t rax = *(arg1 + 0x50);
    int64_t rsi = -1;
    
    if (rax + *(arg1 + 0x58) >= rax)
        rsi = rax + *(arg1 + 0x58);
    
    uu_more::Pager::draw_prompt::hc5b983e1ff1da72e(arg1, arg2, 
        core::cmp::Ord::min::hb3329b13fb983db2(*(arg1 + 0x70), rsi), arg3);
    
    if (!_$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::hfb2969f84e2164f2(arg2))
        return 0;
    
    return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
}
