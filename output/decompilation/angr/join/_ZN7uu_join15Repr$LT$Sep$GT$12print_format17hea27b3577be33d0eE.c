long long uu_join::Repr$LT$Sep$GT$::print_format::hea27b3577be33d0e(unsigned long long a0[5], unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [sp-0x40]
    void* v5;  // rbp
    unsigned long long v6;  // rax
    void* v7;  // rax
    unsigned long long v8;  // rax
    unsigned long long v10;  // rax
    unsigned long long v13;  // rdx
    unsigned long v14;  // rdx

    v0 = a0[1];
    v5 = 0;
    while (v5 < a0[2])
    {
        v6 = ::0x46c0a0::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v5);
        if (v5)
        {
            v7 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(a1, " ", 1);
            if (v7)
                return v7;
        }
        v8 = uu_join::State::combine::_$u7b$$u7b$closure$u7d$$u7d$::h06ca42913a256998(a2, v5 * 16 + v0);
        if (v8)
            v10 = v8;
        else
            v10 = a0[3];
        if (!v8)
            v13 = a0[4];
        else
            v13 = v14;
        v7 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(a1, v10, v13);
        v5 = v6;
        if (v7)
            return v7;
    }
    return 0;
}
