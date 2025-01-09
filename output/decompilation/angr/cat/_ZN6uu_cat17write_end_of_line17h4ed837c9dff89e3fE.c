long long uu_cat::write_end_of_line::h4ed837c9dff89e3f(unsigned long long a0[2], unsigned long long a1, unsigned long long a2, unsigned long long a3, char a4)
{
    unsigned long long v0;  // [sp-0x28]
    unsigned long v2;  // rax
    unsigned long long v3;  // rax

    v0 = v2;
    v3 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(a1, a2, a3);
    if (!v3 && (!(a4) || !((v3 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::flush::hf4899ae455fb37b6(a1), v3))))
    {
        a0[0] = 9223372036854775814;
        return v3;
    }
    a0[0] = 0x8000000000000000;
    a0[1] = v3;
    return v3;
}
