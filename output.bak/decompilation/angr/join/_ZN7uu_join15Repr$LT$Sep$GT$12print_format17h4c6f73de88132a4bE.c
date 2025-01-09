long long uu_join::Repr$LT$Sep$GT$::print_format::h4c6f73de88132a4b(unsigned long long a0[5], unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [sp-0x40]
    void* v5;  // r13
    unsigned long long v6;  // r13
    void* v8;  // rax
    unsigned long long v9;  // rax
    unsigned long long v10;  // r14
    unsigned long long v12;  // rbp
    unsigned long v13;  // rdx

    v0 = a0[1];
    v5 = 0;
    while (true)
    {
        v6 = v5;
        if (v6 >= a0[2])
            return 0;
        if (v6)
        {
            v8 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(a1, 1, 0);
            if (v8)
                return v8;
        }
        v9 = uu_join::State::combine::_$u7b$$u7b$closure$u7d$$u7d$::h06ca42913a256998(a2, v6 * 16 + v0);
        if (v9)
            v10 = v9;
        else
            v10 = a0[3];
        if (!v9)
            v12 = a0[4];
        else
            v12 = v13;
        v8 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(a1, v10, v12);
        v5 = ::0x46c0a0::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v6);
        if (v8)
            return v8;
    }
}
