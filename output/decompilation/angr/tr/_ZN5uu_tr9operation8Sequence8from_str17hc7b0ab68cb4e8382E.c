long long uu_tr::operation::Sequence::from_str::hc7b0ab68cb4e8382(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x89]
    int v1;  // [bp-0x80], Other Possible Types: unsigned long long
    int v2;  // [bp-0x78]
    unsigned long long v3;  // [sp-0x70]
    char v4;  // [bp-0x68]
    char v5;  // [bp-0x60]
    char v6;  // [bp-0x50]
    char v7;  // [bp-0x40]
    char v8;  // [bp-0x38]
    int v10;  // xmm0

    nom::multi::many0::_$u7b$$u7b$closure$u7d$$u7d$::h8cf6a4b7fc883442(&v4, &v0, a1, a2);
    if (*((long long *)&v4))
    {
        v10 = *((int128_t *)&v5);
        *((int128_t *)&v2) = *((int128_t *)&v6);
        v1 = v10;
    }
    else
    {
        v3 = *((long long *)&v7);
        *((int128_t *)&v1) = *((int128_t *)&v6);
        v1 = 3;
    }
    core::result::Result$LT$T$C$E$GT$::unwrap::hb9abf94b670d136b(&v4, &v1);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h9e5e53909aab6517(&v8, &v4);
    return core::iter::adapters::try_process::hb2b95e5a82835fee(a0, &v8);
}
