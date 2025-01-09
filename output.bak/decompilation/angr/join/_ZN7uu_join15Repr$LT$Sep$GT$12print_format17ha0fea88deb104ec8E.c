long long uu_join::Repr$LT$Sep$GT$::print_format::ha0fea88deb104ec8(unsigned long long a0[5], unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [sp-0x48]
    unsigned long long v1;  // [sp-0x40]
    void* v6;  // rbp
    unsigned long long v7;  // rbp
    void* v9;  // rax
    unsigned long long v10;  // rax
    unsigned long long v11;  // r14
    unsigned long long v13;  // rbx
    unsigned long v14;  // rdx

    v1 = a0[1];
    v0 = (char *)&a0[1] + 1;
    v6 = 0;
    while (true)
    {
        v7 = v6;
        if (v7 >= a0[2])
            return 0;
        if (v7)
        {
            v9 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(a1, _$LT$uu_join..OneByteSep$u20$as$u20$uu_join..Separator$GT$::output_separator::h46f4732182ca8865(v0), 1);
            if (v9)
                return v9;
        }
        v10 = uu_join::State::combine::_$u7b$$u7b$closure$u7d$$u7d$::h06ca42913a256998(a2, v7 * 16 + v1);
        if (!v10)
            v11 = a0[3];
        else
            v11 = v10;
        if (!v10)
            v13 = a0[4];
        else
            v13 = v14;
        v9 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(a1, v11, v13);
        v6 = ::0x46c0a0::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v7);
        if (v9)
            return v9;
    }
}
