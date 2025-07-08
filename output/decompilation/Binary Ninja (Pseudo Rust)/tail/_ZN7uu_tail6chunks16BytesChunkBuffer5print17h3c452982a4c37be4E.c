
  fn uu_tail::chunks::BytesChunkBuffer::print::h3c452982a4c37be4(arg1: *mut i64, arg2: *mut i64) -> *mut i128

{
    let mut var_38: i128;
    alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::iter::h4a54dde34758e423(&var_38, arg1);
    let mut zmm0: i128 = var_38;
    let var_28: i128;
    let mut var_48: i128 = var_28;
    let mut var_58: i128 = zmm0;
    let mut result: *mut i128;
    
    loop
    {
        let mut rax_1: *mut i64 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5d73d6dce9ac4e35(&var_58);
        
        if rax_1 == 0
        {
            zmm0 = var_58;
            var_58 = var_48;
            var_48 = zmm0;
            rax_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5d73d6dce9ac4e35(&var_58);
            
            if rax_1 == 0
            {
                result = nullptr;
                break;
            }
        }
        
        let mut rax_2: i64;
        let mut rdx_1: u64;
        rax_2 = uu_tail::chunks::BytesChunk::get_buffer::h202da470562e82e0(*rax_1);
        
        if _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h167ba1bb875d74b3(arg2, rax_2, rdx_1) != 0
        {
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
            break;
        }
    }
    
    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::h13404fe74d804a04(arg2);
    result
}
