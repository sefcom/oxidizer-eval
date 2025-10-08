
  uint64_t uu_env::apply_ignore_signal::hd90c650a7d9c7f29(void* arg1)

{
    int64_t rax;
    int64_t var_28 = rax;
    int32_t* r14 = *(arg1 + 0x68);
    int64_t r15_1 = *(arg1 + 0x70) << 3;
    int64_t r12 = 0;
    uint64_t i;
    
    do
    {
        if (r15_1 == r12)
            return 0;
        
        char rax_1;
        int64_t rdx_1;
        rax_1 = _$LT$nix..sys..signal..Signal$u20$as$u20$core..convert..TryFrom$LT$i32$GT$$GT$::try_from::h9a35f89cbe212992(*(r14 + r12));
        
        if (rax_1 & 1)
            /* tailcall */
            return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
        
        i = uu_env::ignore_signal::hd22c2b126fd57d37(rdx_1);
        r12 += 8;
    } while (!i);
    
    return i;
}
