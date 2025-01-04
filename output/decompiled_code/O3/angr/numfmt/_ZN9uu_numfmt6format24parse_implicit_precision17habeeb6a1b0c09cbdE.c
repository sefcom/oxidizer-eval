long long uu_numfmt::format::parse_implicit_precision::habeeb6a1b0c09cbd(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [sp-0x38]
    unsigned long long v1;  // [sp-0x30]
    char v2;  // [sp-0x28]
    char v3;  // [bp-0x20]
    char v4;  // [bp-0x10]
    char v5;  // [bp-0x8]
    unsigned long long v7;  // rsi
    unsigned long long v8;  // rdx

    core::str::_$LT$impl$u20$str$GT$::split_once::hfea80893a51b600a(&v3, a0, a1);
    if (*((long long *)&v3))
    {
        v0 = *((long long *)&v4);
        v1 = *((long long *)&v5) + v0;
        v2 = 0;
        return _$LT$core..iter..adapters..take_while..TakeWhile$LT$I$C$P$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hfb57bf5ada456b55(&v0, v7, v8);
    }
    return 0;
}
