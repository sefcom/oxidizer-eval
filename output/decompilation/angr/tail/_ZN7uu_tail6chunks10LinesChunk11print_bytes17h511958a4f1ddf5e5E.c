long long uu_tail::chunks::LinesChunk::print_bytes::h511958a4f1ddf5e5(void* a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v1;  // rdx
    unsigned long long v2;  // rax

    v2 = ::0x512410::_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h167ba1bb875d74b3(a1, uu_tail::chunks::LinesChunk::get_buffer_with::h9b4a89d9b9a529ff(a0, a2), v1);
    if (v2)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v2);
    return 0;
}
