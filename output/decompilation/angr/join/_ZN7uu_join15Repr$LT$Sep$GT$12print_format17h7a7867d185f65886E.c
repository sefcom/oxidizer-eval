long long uu_join::Repr$LT$Sep$GT$::print_format::h7a7867d185f65886(unsigned long long a0[41], unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [sp-0x50]
    unsigned long long v1;  // [sp-0x48]
    unsigned long long v2;  // [sp-0x40]
    void* v7;  // rbp
    unsigned long long v8;  // rax
    void* v9;  // rax
    unsigned long long v10;  // rax
    unsigned long long v12;  // rax
    unsigned long long v15;  // rdx
    unsigned long v16;  // rdx

    v1 = a0[33];
    v0 = a0[34];
    v2 = a0[39];
    v7 = 0;
    while (v7 < a0[40])
    {
        v8 = ::0x46c0a0::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v7);
        if (v7)
        {
            v9 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(a1, _$LT$uu_join..MultiByteSep$u20$as$u20$uu_join..Separator$GT$::output_separator::hb76fe36ffd6c0412(v1, v0), a2);
            if (v9)
                return v9;
        }
        v10 = uu_join::State::combine::_$u7b$$u7b$closure$u7d$$u7d$::h06ca42913a256998(a2, v7 * 16 + v2);
        if (v10)
            v12 = v10;
        else
            v12 = a0[36];
        if (v10)
            v15 = v16;
        else
            v15 = a0[37];
        v9 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(a1, v12, v15);
        v7 = v8;
        if (v9)
            return v9;
    }
    return 0;
}
