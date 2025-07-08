
  fn uu_tail::chunks::BytesChunkBuffer::print::had08519fe61c1e10(arg1: *mut i64, arg2: *mut i64) -> *mut i128

{
    let mut var_38: i128;
    alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::iter::h4a54dde34758e423(&var_38, arg1);
    let mut i: i64;
    
    do
    {
        let mut rax_1: *mut i64 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5d73d6dce9ac4e35(&var_38);
        
        if rax_1 == 0
        {
            let zmm0_1: i128 = var_38;
            let mut var_28: i128;
            var_38 = var_28;
            var_28 = zmm0_1;
            rax_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5d73d6dce9ac4e35(&var_38);
            
            if rax_1 == 0
            {
                return nullptr;
            }
        }
        
        let mut rax_2: i64;
        let mut rdx_1: u64;
        rax_2 = uu_tail::chunks::BytesChunk::get_buffer::h202da470562e82e0(*rax_1);
        i = std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$$RF$mut$u20$W$GT$::write_all::h889fb69209bd29d4(arg2, rax_2, rdx_1);
    } while i == 0;
    uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa()
}
