
  fn uu_more::Pager::seek_to_line::h869c7595a8249d8f(arg1: *mut c_void, arg2: i64) -> u64

{
    let rax_1: i64 = core::cmp::Ord::min::hb3329b13fb983db2(arg2, *arg1.byte_offset(0x70));
    let rsi_1: i64 = *arg1.byte_offset(0x38);
    
    if rax_1 >= rsi_1
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(rax_1, rsi_1);
        /* no return */
    }
    
    if ((*(*arg1.byte_offset(0x48) + 0x88))(*arg1.byte_offset(0x40), 0, 
        *(*arg1.byte_offset(0x30) + (rax_1 << 3))) & 1) == 0
    {
        return 0;
    }
    
    uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2()
}
