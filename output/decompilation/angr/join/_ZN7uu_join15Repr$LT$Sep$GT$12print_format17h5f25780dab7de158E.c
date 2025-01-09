long long uu_join::Repr$LT$Sep$GT$::print_format::h5f25780dab7de158(unsigned long long a0[41], unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [sp-0x58]
    unsigned long long v1;  // [sp-0x50]
    unsigned long long v2;  // [sp-0x48]
    void* v7;  // r14
    unsigned long long v8;  // r14
    unsigned long long v10;  // rdx
    void* v11;  // rax
    unsigned long long v12;  // rax
    unsigned long long v13;  // r15
    unsigned long long v15;  // rbx

    v1 = a0[33];
    v0 = a0[34];
    v2 = a0[39];
    v7 = 0;
    while (true)
    {
        v8 = v7;
        if (v8 >= a0[40])
            return 0;
        if (v8)
        {
            v11 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(a1, _$LT$uu_join..MultiByteSep$u20$as$u20$uu_join..Separator$GT$::output_separator::hb76fe36ffd6c0412(v1, v0), v10);
            if (v11)
                return v11;
        }
        v12 = uu_join::State::print_line::_$u7b$$u7b$closure$u7d$$u7d$::h21253a944e5fa996(a2, a3, v8 * 16 + v2);
        if (!v12)
            v13 = a0[36];
        else
            v13 = v12;
        if (!v12)
            v15 = a0[37];
        else
            v15 = v10;
        v11 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(a1, v13, v15);
        v7 = ::0x46c0a0::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v8);
        if (v11)
            return v11;
    }
}
