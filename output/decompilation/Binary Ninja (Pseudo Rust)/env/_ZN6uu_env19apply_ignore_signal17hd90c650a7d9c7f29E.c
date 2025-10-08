
  fn uu_env::apply_ignore_signal::hd90c650a7d9c7f29(arg1: *mut c_void) -> u64

{
    let rax: i64;
    let var_28: i64 = rax;
    let r14: *mut i32 = *arg1.byte_offset(0x68);
    let r15_1: i64 = *arg1.byte_offset(0x70) << 3;
    let mut r12: i64 = 0;
    let mut i: u64;
    
    do
    {
        if r15_1 == r12
        {
            return 0;
        }
        
        let mut rax_1: i8;
        let mut rdx_1: i64;
        rax_1 = _$LT$nix..sys..signal..Signal$u20$as$u20$core..convert..TryFrom$LT$i32$GT$$GT$::try_from::h9a35f89cbe212992(*r14.byte_offset(r12));
        
        if (rax_1 & 1) != 0
        {
            /* tailcall */
            return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
        }
        
        i = uu_env::ignore_signal::hd22c2b126fd57d37(rdx_1);
        r12 += 8;
    } while i == 0;
    
    i
}
