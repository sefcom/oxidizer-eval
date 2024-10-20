long long uu_more::reset_term::h30fedddbe2bd2661(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long a3)
{
    unsigned long v0;  // [sp-0x38], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x30]
    unsigned long long v2;  // [sp-0x28]
    int v3;  // [sp-0x20]
    unsigned long long v5;  // rax
    unsigned long long v6;  // rcx
    unsigned long long v7;  // rax
    unsigned long long v8;  // rsi
    unsigned long long v9;  // rdx
    unsigned long long v10;  // rax

    v5 = crossterm::terminal::sys::unix::disable_raw_mode::heaeb51c389641fec(a0, a1);
    if (v5)
    {
        v0 = v5;
        core::result::unwrap_failed::h39784290e544308e(); /* do not return */
    }
    v7 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(a0, &anon.d58bd02a723bd021606085005bc52729.42.llvm.16558445346262642515, 4, v6);
    if (v7)
    {
        v0 = v7;
        core::result::unwrap_failed::h39784290e544308e(); /* do not return */
    }
    v0 = &g_517e28;
    v1 = 1;
    v2 = 8;
    *((int128_t *)&v3) = 0;
    std::io::stdio::_print::he918bceb0c89db46(&v0, v8, v9);
    v10 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(a0, v8, v9, v6);
    if (v10)
    {
        v0 = v10;
        core::result::unwrap_failed::h39784290e544308e(); /* do not return */
    }
    return v10;
}
