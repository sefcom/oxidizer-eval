long long uu_join::Repr$LT$Sep$GT$::print_format::hacecbab763209965(unsigned long long a0[41], unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [sp-0x50]
    unsigned long long v1;  // [sp-0x48]
    unsigned long long v2;  // [sp-0x40]
    unsigned long long v8;  // rbp
    unsigned long long v10;  // rdx
    void* v11;  // rax
    unsigned long long v13;  // r14
    unsigned long long v15;  // r13

    v1 = a0[33];
    v0 = a0[34];
    v2 = a0[39];
    while (true)
    {
        v8 = 0;
        if (v8 >= a0[40])
            return 0;
        if (v8)
        {
            v11 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h8f60a657e3e64758(a1, _$LT$uu_join..MultiByteSep$u20$as$u20$uu_join..Separator$GT$::output_separator::h3d279e3ebb80d459(v1, v0), v10);
            if (v11)
                return v11;
        }
        v11 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h8f60a657e3e64758(a1, v13, v15);
        if (v11)
            return v11;
    }
}
