
  uint64_t uu_more::Pager::seek_to_line::h869c7595a8249d8f(void* arg1, int64_t arg2)

{
    int64_t rax_1 = core::cmp::Ord::min::hb3329b13fb983db2(arg2, *(arg1 + 0x70));
    int64_t rsi_1 = *(arg1 + 0x38);
    
    if (rax_1 >= rsi_1)
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(rax_1, rsi_1);
        /* no return */
    }
    
    if (!((*(*(arg1 + 0x48) + 0x88))(*(arg1 + 0x40), 0, *(*(arg1 + 0x30) + (rax_1 << 3))) & 1))
        return 0;
    
    return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
}
