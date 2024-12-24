long long uu_tail::chunks::LinesChunk::print_bytes::hae0b238e6854cfd3(void* a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v1;  // rdx
    unsigned long long v2;  // rax

    v2 = ::0x50ac70::_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h85b13ab36f2f57c1(a1, uu_tail::chunks::LinesChunk::get_buffer_with::hcc553aaf32a3219b(a0, a2), v1);
    if (v2)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v2);
    return 0;
}
