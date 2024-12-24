long long uu_tail::chunks::LinesChunk::print_bytes::ha2e4d76a3a2e0222(void* a0, unsigned long long a1, unsigned long a2)
{
    unsigned long long v0;  // [sp-0x18]
    unsigned long v2;  // rax
    unsigned long long v4;  // rdx
    unsigned long long v5;  // rax

    v0 = v2;
    v5 = std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$$RF$mut$u20$W$GT$::write_all::h26025b8fe867a188(a1, uu_tail::chunks::LinesChunk::get_buffer_with::hcc553aaf32a3219b(a0, 0), v4);
    if (v5)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v5);
    return 0;
}
