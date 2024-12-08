long long uu_join::Repr$LT$Sep$GT$::print_format::h312ee19cc0318035(unsigned long long a0[5], unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [sp-0x48]
    unsigned long long v1;  // [sp-0x40]
    unsigned long long v7;  // rbp
    void* v9;  // rax
    unsigned long long v11;  // r14
    unsigned long long v13;  // rbx

    v1 = a0[1];
    v0 = (char *)&a0[1] + 1;
    while (true)
    {
        v7 = 0;
        if (v7 >= a0[2])
            return 0;
        if (v7)
        {
            v9 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h8f60a657e3e64758(a1, _$LT$uu_join..OneByteSep$u20$as$u20$uu_join..Separator$GT$::output_separator::h301f9a00817ac2d0(v0), 1);
            if (v9)
                return v9;
        }
        v9 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h8f60a657e3e64758(a1, v11, v13);
        if (v9)
            return v9;
    }
}
