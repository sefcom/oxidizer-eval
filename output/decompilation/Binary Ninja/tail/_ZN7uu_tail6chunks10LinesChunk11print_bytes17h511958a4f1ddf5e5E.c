
  int128_t* uu_tail::chunks::LinesChunk::print_bytes::h511958a4f1ddf5e5(void* arg1, int64_t* arg2, int64_t arg3)

{
    int64_t rax;
    uint64_t rdx;
    rax = uu_tail::chunks::LinesChunk::get_buffer_with::h9b4a89d9b9a529ff(arg1, arg3);
    
    if (!_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h167ba1bb875d74b3(arg2, rax, rdx))
        return 0;
    
    return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
}
