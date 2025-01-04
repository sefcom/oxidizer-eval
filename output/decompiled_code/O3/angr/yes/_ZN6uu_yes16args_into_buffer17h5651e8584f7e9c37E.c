long long uu_yes::args_into_buffer::h5651e8584f7e9c37(unsigned long long a0, unsigned long long *a1, unsigned long a2)
{
    char v0;  // [bp-0xc0]
    char v1;  // [bp-0x58]
    unsigned long long v3;  // rsi
    unsigned long long v4;  // rax
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rdx

    if (!*(a1))
        return alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h2642fa33805b0088(a0, core::slice::iter::Iter$LT$T$GT$::make_slice::h7c7f2adc9ed8f72a("y\n", &g_413421), v5);
    core::iter::traits::iterator::Iterator::map::hb91a5a802183f65d(&v1, a1);
    itertools::free::intersperse::h6dfe3766eed6430b(&v0, &v1, " ", 1);
    v4 = _$LT$itertools..intersperse..IntersperseWith$LT$I$C$ElemF$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbbc9ff9732d61faf(&v0, v3);
    if (!v4)
        return alloc::vec::Vec$LT$T$C$A$GT$::push::h15e2c35668a0a643(a0);
    do
    {
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h2642fa33805b0088(a0, core::slice::iter::Iter$LT$T$GT$::make_slice::h7c7f2adc9ed8f72a(v4, v6 + v4), v7);
        v4 = _$LT$itertools..intersperse..IntersperseWith$LT$I$C$ElemF$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbbc9ff9732d61faf(&v0, v3);
    } while (v4);
}
