
  int128_t* uu_tail::chunks::LinesChunk::print_bytes::heb78e59b7507785b(void* arg1, int64_t* arg2)

{
    int64_t rax;
    int64_t var_18 = rax;
    int64_t rax_1;
    uint64_t rdx;
    rax_1 = uu_tail::chunks::LinesChunk::get_buffer_with::h9b4a89d9b9a529ff(arg1, 0);
    
    if (!std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$$RF$mut$u20$W$GT$::write_all::h889fb69209bd29d4(arg2, rax_1, rdx))
        return nullptr;
    
    return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
}
