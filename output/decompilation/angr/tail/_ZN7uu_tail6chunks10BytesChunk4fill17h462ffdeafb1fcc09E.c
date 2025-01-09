long long uu_tail::chunks::BytesChunk::fill::h462ffdeafb1fcc09(unsigned long long a0[3], struct_0 *a1, unsigned long long a2)
{
    unsigned long long v0;  // [sp-0x18]
    unsigned long v2;  // rax
    unsigned long v3;  // rdx
    unsigned long long v4;  // rdx

    v0 = v2;
    if (_$LT$std..io..buffered..bufreader..BufReader$LT$R$GT$$u20$as$u20$std..io..Read$GT$::read::h8b00b44a935690a1(a2, a1, 0x2000))
    {
        a0[1] = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v4);
        a0[2] = v4;
        a0[0] = 1;
        return a0;
    }
    a1->field_2000 = v3;
    if (v3)
    {
        a0[1] = 1;
        a0[2] = v3;
        a0[0] = 0;
        return a0;
    }
    *((uint128_t *)&a0[0]) = 0;
    return a0;
}
