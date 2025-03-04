long long uu_join::Repr$LT$Sep$GT$::print_format::h8b2cf1c3af867261(unsigned long long a0[5], unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [sp-0x50]
    unsigned long long v1;  // [sp-0x48]
    void* v6;  // rbp
    unsigned long long v7;  // rax
    void* v8;  // rax
    unsigned long long v9;  // rax
    unsigned long long v11;  // rax
    unsigned long long v14;  // rdx
    unsigned long v15;  // rdx

    v1 = a0[1];
    v0 = (char *)&a0[1] + 1;
    v6 = 0;
    while (true)
    {
        if (v6 >= a0[2])
            return 0;
        v7 = ::0x46c0a0::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v6);
        if (v6)
        {
            v8 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(a1, _$LT$uu_join..OneByteSep$u20$as$u20$uu_join..Separator$GT$::output_separator::h46f4732182ca8865(v0), 1);
            if (v8)
                return v8;
        }
        v9 = uu_join::State::print_line::_$u7b$$u7b$closure$u7d$$u7d$::h21253a944e5fa996(a2, a3, v6 * 16 + v1);
        if (!v9)
            v11 = a0[3];
        else
            v11 = v9;
        if (v9)
            v14 = v15;
        else
            v14 = a0[4];
        v8 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(a1, v11, v14);
        v6 = v7;
        if (v8)
            return v8;
    }
}
