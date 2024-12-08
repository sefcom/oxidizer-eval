long long uu_yes::args_into_buffer::h50bbea3b2abf9f1f(unsigned long long a0, unsigned long long *a1, unsigned long a2)
{
    char v0;  // [bp-0xc0]
    char v1;  // [bp-0x58]
    unsigned long long v3;  // rsi
    unsigned long long v4;  // rax
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rdx

    if (!*(a1))
        return alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h7595231f38b65b79(a0, core::slice::iter::Iter$LT$T$GT$::make_slice::h257443b281dcbebe("y\n", "Disabling rust signal handlers failed/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/yes/src/yes.rs"), v5);
    core::iter::traits::iterator::Iterator::map::hb672127132ed8829(&v1, a1);
    itertools::free::intersperse::h1b9539312c3e7db1(&v0, &v1, " ", 1);
    v4 = _$LT$itertools..intersperse..IntersperseWith$LT$I$C$ElemF$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1e4c12bdd8a2e227(&v0, v3);
    if (!v4)
        return alloc::vec::Vec$LT$T$C$A$GT$::push::h962e198cca8c3d80(a0);
    do
    {
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h7595231f38b65b79(a0, core::slice::iter::Iter$LT$T$GT$::make_slice::h257443b281dcbebe(v4, v6 + v4), v7);
        v4 = _$LT$itertools..intersperse..IntersperseWith$LT$I$C$ElemF$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1e4c12bdd8a2e227(&v0, v3);
    } while (v4);
}
