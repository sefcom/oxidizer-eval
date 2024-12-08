long long uu_tr::operation::TranslateOperation::new::h42c5528eb1d93a25(struct_1 *a0, struct_0 *a1, unsigned long long a2[3])
{
    char v0;  // [bp-0xd0]
    char v1;  // [bp-0x70]
    char v2;  // [bp-0x50]
    unsigned long long v4;  // rax
    unsigned long v6;  // rdx
    unsigned long long v7;  // rdx

    v4 = a2[2];
    if (v4)
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h4c04a644b88724a8(&v1, a1);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h4c04a644b88724a8(&v0, a2);
        core::iter::traits::iterator::Iterator::chain::h34cd4af8ae5433ff(&v2, &v0, *((char *)(v4 + a2[1] - 1)));
        core::iter::traits::iterator::Iterator::zip::h2536b25885f6c2af(&v0, &v1, &v2);
        _$LT$std..collections..hash..map..HashMap$LT$K$C$V$C$S$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$LP$K$C$V$RP$$GT$$GT$::from_iter::h2c2dd0e9f4fafa83(a0, &v0, v7);
        return a0;
    }
    if (a1->field_10)
    {
        *((long long *)&a0->padding_8[0]) = 9223372036854775813;
        a0->field_0 = 0;
    }
    else
    {
        ::0x4bacb0::std::thread::local::LocalKey$LT$T$GT$::try_with::hec20f2262fb1d73c(&v0, a1, a2);
        a0->field_10 = g_52f638;
        *((uint128_t *)&a0->field_0) = g_52f628;
        a0->field_20 = ::0x4bbc90::core::result::Result$LT$T$C$E$GT$::expect::h77866c3e472d79f5(&v0);
        a0->field_28 = v6;
    }
    ::0x4bb180::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8400dbf207ca475c(a2);
    ::0x4bb180::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8400dbf207ca475c(a1);
    return a0;
}
