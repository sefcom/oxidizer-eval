long long uu_tr::operation::Sequence::from_str::hc7b0ab68cb4e8382(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x89]
    int v1;  // [bp-0x88], Other Possible Types: unsigned long long
    int v2;  // [bp-0x80]
    int v3;  // [bp-0x78]
    unsigned long long v4;  // [sp-0x70]
    char v5;  // [bp-0x68]
    char v6;  // [bp-0x60]
    char v7;  // [bp-0x50]
    char v8;  // [bp-0x40]
    char v9;  // [bp-0x38]
    int v11;  // xmm0

    nom::multi::many0::_$u7b$$u7b$closure$u7d$$u7d$::h8cf6a4b7fc883442(&v5, &v0, a1, a2);
    if (*((long long *)&v5))
    {
        v11 = *((int128_t *)&v6);
        *((int128_t *)&v3) = *((int128_t *)&v7);
        v1 = v11;
    }
    else
    {
        v4 = *((long long *)&v8);
        *((int128_t *)&v2) = *((int128_t *)&v7);
        v1 = 3;
    }
    core::result::Result$LT$T$C$E$GT$::unwrap::hb9abf94b670d136b(&v5, &v1);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h9e5e53909aab6517(&v9, &v5);
    return core::iter::adapters::try_process::hb2b95e5a82835fee(a0, &v9);
}
