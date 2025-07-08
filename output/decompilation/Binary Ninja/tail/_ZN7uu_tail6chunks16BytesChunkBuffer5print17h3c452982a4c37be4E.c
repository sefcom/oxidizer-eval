
  int128_t* uu_tail::chunks::BytesChunkBuffer::print::h3c452982a4c37be4(int64_t* arg1, int64_t* arg2)

{
    int128_t var_38;
    alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::iter::h4a54dde34758e423(&var_38, arg1);
    int128_t zmm0 = var_38;
    int128_t var_28;
    int128_t var_48 = var_28;
    int128_t var_58 = zmm0;
    int128_t* result;
    
    while (true)
    {
        int64_t* rax_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5d73d6dce9ac4e35(&var_58);
        
        if (!rax_1)
        {
            zmm0 = var_58;
            var_58 = var_48;
            var_48 = zmm0;
            rax_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5d73d6dce9ac4e35(&var_58);
            
            if (!rax_1)
            {
                result = nullptr;
                break;
            }
        }
        
        int64_t rax_2;
        uint64_t rdx_1;
        rax_2 = uu_tail::chunks::BytesChunk::get_buffer::h202da470562e82e0(*rax_1);
        
        if (_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h167ba1bb875d74b3(arg2, rax_2, rdx_1))
        {
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
            break;
        }
    }
    
    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::h13404fe74d804a04(arg2);
    return result;
}
