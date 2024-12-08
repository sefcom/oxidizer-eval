long long uu_tail::chunks::BytesChunk::fill::hdc829b12083ca35a(unsigned long long a0[3], struct_0 *a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [sp-0x18]
    unsigned long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rdx
    unsigned long v5;  // rdx

    v0 = v2;
    v3 = std::io::impls::_$LT$impl$u20$std..io..Read$u20$for$u20$alloc..boxed..Box$LT$R$GT$$GT$::read::hb3728ce2adde616f(a2, a3, a1);
    if (v3)
    {
        v3 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v4);
        a0[1] = v3;
        a0[2] = v4;
        a0[0] = 1;
        return v3;
    }
    a1->field_2000 = v5;
    if (v5)
    {
        a0[1] = 1;
        a0[2] = v5;
        a0[0] = 0;
        return v3;
    }
    *((int128_t *)&a0[0]) = 0;
    return v3;
}
